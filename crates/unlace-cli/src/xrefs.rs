//! Direct code cross-references recovered by lifting every discovered function.

use std::collections::BTreeMap;

use anyhow::Result;
use unlace_ir::xref::{InstructionXref, build_instruction_xrefs};
use unlace_lift::get_lifter;
use unlace_loader::BinaryImage;

use crate::pipeline;
use crate::profiling::{self, TraceField};

/// Lift every function `image` exposes and collect its direct `CALL`/`BRANCH`
/// edges. Functions that fail to lift are skipped.
pub fn instruction_xrefs(image: &BinaryImage) -> Result<Vec<InstructionXref>> {
    let functions = pipeline::discover_functions(image, None)?;
    let lifter = get_lifter(image.arch);
    let mut lifted = BTreeMap::new();
    for entry in &functions {
        match pipeline::lift_function(image, lifter.as_ref(), entry) {
            Ok(function) => {
                lifted.insert(entry.addr, function);
            }
            Err(err) => profiling::diagnostic(
                "debug",
                "skipping xref lift failure",
                [
                    TraceField::text("function", entry.name.clone()),
                    TraceField::text("err", err.to_string()),
                ],
            ),
        }
    }
    Ok(build_instruction_xrefs(&lifted))
}

#[cfg(test)]
mod tests {
    use std::path::Path;

    use unlace_ir::xref::XrefKind;

    use super::*;

    #[test]
    fn hello_world_main_calls_puts_plt_stub() {
        let path = Path::new(env!("CARGO_MANIFEST_DIR")).join("../../fixtures/hello_world.elf");
        let image = crate::load::open_image(&path).expect("load fixture");
        let xrefs = instruction_xrefs(&image).expect("xrefs");

        let main_call = InstructionXref {
            from: 0x106f,
            to: 0x1050,
            kind: XrefKind::Call,
        };
        assert!(xrefs.contains(&main_call), "{xrefs:?}");
    }
}
