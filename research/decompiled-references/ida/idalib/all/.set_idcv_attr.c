// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9EF0
// Name:            .set_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9EF0 jmp     cs:off_2C7A760
//
// Resolved target: set_idcv_attr
// Target address:  0x798C30
// GOT/IAT slot:    0x2C7A760
// Slot symbol:     off_2C7A760
// Target type:     <no type info>
// ============================================================

void .set_idcv_attr(/* see target signature */)
{
    // Tail-call to set_idcv_attr via GOT/IAT indirection
    return set_idcv_attr(/* forwarded args */);
}

