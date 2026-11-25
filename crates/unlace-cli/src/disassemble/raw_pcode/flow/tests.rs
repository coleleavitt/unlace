use super::*;

fn op(opcode: &'static str, inputs: &[(&str, u64, u32)]) -> RawPcodeOp {
    RawPcodeOp {
        opcode,
        output: None,
        inputs: inputs
            .iter()
            .map(|&(space, offset, size)| RawPcodeVarnode {
                space: space.into(),
                offset,
                size,
            })
            .collect(),
    }
}

fn edges(ops: &[RawPcodeOp]) -> Vec<(&'static str, Option<u64>)> {
    successors(ops, 0x104)
        .unwrap()
        .iter()
        .map(|e| (e.kind, e.target))
        .collect()
}

#[test]
fn flow_is_read_the_way_the_decompiler_reads_it() {
    let predicated = [
        op("CBRANCH", &[("ram", 0x104, 4), ("unique", 0, 1)]),
        op("COPY", &[]),
    ];
    assert_eq!(
        edges(&predicated),
        [("branch", Some(0x104)), ("fallthrough", Some(0x104))]
    );
    let conditional_return = [op("CBRANCH", &[("ram", 0x104, 4)]), op("RETURN", &[])];
    assert_eq!(edges(&conditional_return), [("branch", Some(0x104))]);
    let jump = [op("BRANCH", &[("ram", 0x200, 4)])];
    assert_eq!(edges(&jump), [("branch", Some(0x200))]);
    let skip_to_end = [
        op("CBRANCH", &[("const", 2, 4)]),
        op("BRANCH", &[("ram", 0x200, 4)]),
    ];
    assert_eq!(
        edges(&skip_to_end),
        [("branch", Some(0x200)), ("fallthrough", Some(0x104))]
    );
    let internal = [
        op("CBRANCH", &[("const", 2, 4)]),
        op("RETURN", &[]),
        op("COPY", &[]),
    ];
    assert_eq!(edges(&internal), [("fallthrough", Some(0x104))]);
    let backward = [op("COPY", &[]), op("CBRANCH", &[("const", 0xffff_ffff, 4)])];
    assert_eq!(edges(&backward), [("fallthrough", Some(0x104))]);
    assert!(successors(&[op("BRANCH", &[("const", 5, 4)])], 0x104).is_none());
    assert_eq!(
        edges(&[op("BRANCHIND", &[("register", 0, 4)])]),
        [("indirect", None)]
    );
    assert_eq!(
        edges(&[op("CALL", &[("ram", 0x300, 4)])]),
        [("fallthrough", Some(0x104))]
    );
    assert_eq!(edges(&[]), [("fallthrough", Some(0x104))]);
}
