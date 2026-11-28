//! Byte-array access rendering.

use super::*;

impl PrintC {
    pub(super) fn bytearray_access(
        &self,
        fd: &Funcdata,
        vn: VarnodeId,
    ) -> Option<crate::bytearrayc::Access> {
        if !self.options.bytearray_c || self.out_lang != crate::lang::OutLang::C {
            return None;
        }
        crate::bytearrayc::access(fd, vn)
    }

    pub(super) fn emit_bytearray_preamble(&mut self, fd: &Funcdata) {
        if !self.options.bytearray_c || self.out_lang != crate::lang::OutLang::C {
            return;
        }
        let pairs: std::collections::BTreeSet<_> = fd
            .vbank()
            .iter_loc()
            .filter_map(|vn| {
                self.bytearray_access(fd, vn)
                    .filter(|a| a.size > 1)
                    .map(|a| (a.size, a.big))
            })
            .collect();
        for (size, big) in pairs {
            for line in crate::bytearrayc::preamble(size, big).lines() {
                self.emit.tag_line();
                self.emit.print(line, SyntaxHighlight::NoColor);
            }
        }
    }

    pub(super) fn push_bytearray_address(
        &mut self,
        access: &crate::bytearrayc::Access,
        op: OpId,
        vn: VarnodeId,
    ) {
        self.push_atom(&Atom::with_op_vn(
            format!("&{}[{}]", access.name, access.offset),
            TagType::VarToken,
            crate::printlanguage::SyntaxHighlight::var_color,
            op_key(op),
            vn_key(vn),
        ));
    }

    pub(super) fn push_bytearray_read(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        vn: VarnodeId,
        op: OpId,
    ) -> bool {
        let Some(access) = self.bytearray_access(fd, vn) else {
            return false;
        };
        if access.size == 1 {
            self.named_globals.record(
                fd,
                arch,
                fd.vbank().get(vn).unwrap().get_addr(),
                &access.name,
            );
            self.push_atom(&Atom::with_op_vn(
                format!("{}[0]", access.name),
                TagType::VarToken,
                crate::printlanguage::SyntaxHighlight::var_color,
                op_key(op),
                vn_key(vn),
            ));
            return true;
        }
        let ty = fd.vbank().get(vn).unwrap().get_type_read_facing(op).clone();
        let ty = ty.get_stripped().unwrap_or(ty);
        let cast = if matches!(
            ty.get_metatype(),
            crate::dtype::type_metatype::TYPE_INT | crate::dtype::type_metatype::TYPE_UINT
        ) && ty.get_size() == access.size
        {
            ty.clone()
        } else {
            let Ok(ty) = arch
                .types()
                .get_base(access.size, crate::dtype::type_metatype::TYPE_UINT)
            else {
                return false;
            };
            ty
        };
        self.named_globals.record(
            fd,
            arch,
            fd.vbank().get(vn).unwrap().get_addr(),
            &access.name,
        );
        self.push_cast_open(&cast, op);
        self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
        self.push_atom(&Atom::syntax(
            crate::bytearrayc::helper(access.size, access.big, false),
            TagType::FuncToken,
            crate::printlanguage::SyntaxHighlight::funcname_color,
        ));
        self.push_bytearray_address(&access, op, vn);
        self.push_cast_close(&cast);
        true
    }

    pub(super) fn emit_bytearray_store(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
    ) -> bool {
        let Some(out) = fd.obank().get(op).and_then(|o| o.get_out()) else {
            return false;
        };
        let Some(access) = self.bytearray_access(fd, out) else {
            return false;
        };
        let operation = fd.obank().get(op).unwrap();
        if matches!(operation.code(), OpCode::CPUI_COPY | OpCode::CPUI_CAST)
            && operation
                .get_in(0)
                .and_then(|vn| fd.vbank().get(vn))
                .is_some_and(|v| {
                    matches!(
                        v.get_type_read_facing(op).get_metatype(),
                        type_metatype::TYPE_FLOAT
                            | type_metatype::TYPE_PTR
                            | type_metatype::TYPE_PTRREL
                            | type_metatype::TYPE_STRUCT
                            | type_metatype::TYPE_UNION
                            | type_metatype::TYPE_CODE
                    )
                })
        {
            return false;
        }
        self.named_globals.record(
            fd,
            arch,
            fd.vbank().get(out).unwrap().get_addr(),
            &access.name,
        );
        if access.size == 1 {
            self.push_op(&tokens::ASSIGNMENT, Some(op_key(op)));
            self.push_atom(&Atom::with_op_vn(
                format!("{}[0]", access.name),
                TagType::VarToken,
                crate::printlanguage::SyntaxHighlight::var_color,
                op_key(op),
                vn_key(out),
            ));
            self.push_bytearray_store_value(fd, arch, op, out);
            return true;
        }
        self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
        self.push_atom(&Atom::syntax(
            crate::bytearrayc::helper(access.size, access.big, true),
            TagType::FuncToken,
            crate::printlanguage::SyntaxHighlight::funcname_color,
        ));
        self.push_op(&tokens::COMMA, Some(op_key(op)));
        self.push_bytearray_address(&access, op, out);
        self.push_bytearray_store_value(fd, arch, op, out);
        true
    }

    /// A same-width integer CAST changes the array view, not the stored bits.
    pub(super) fn push_bytearray_store_value(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        out: VarnodeId,
    ) {
        let operation = fd.obank().get(op).unwrap();
        let input = operation.get_in(0).filter(|&vn| {
            fd.vbank().get(vn).map(|v| v.get_size()) == fd.vbank().get(out).map(|v| v.get_size())
        });
        self.stmt_op = Some(op);
        if operation.code() == OpCode::CPUI_CAST
            && let Some(input) = input
        {
            self.push_vn_ir(fd, arch, input, op);
        } else {
            self.op_push_ir(fd, arch, op, None);
        }
        self.stmt_op = None;
    }
}
