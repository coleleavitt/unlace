// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EBC0
// Name:            .add_idc_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EBC0 jmp     cs:off_4E9DC8
//
// Resolved target: add_idc_class
// Target address:  0x4EC808
// GOT/IAT slot:    0x4E9DC8
// Slot symbol:     off_4E9DC8
// Target type:     <no type info>
// ============================================================

void .add_idc_class(/* see target signature */)
{
    // Tail-call to add_idc_class via GOT/IAT indirection
    return add_idc_class(/* forwarded args */);
}

