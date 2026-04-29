// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D9E0
// Name:            .set_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D9E0 jmp     cs:off_4E94D8
//
// Resolved target: set_idcv_attr
// Target address:  0x4EBEE0
// GOT/IAT slot:    0x4E94D8
// Slot symbol:     off_4E94D8
// Target type:     <no type info>
// ============================================================

void .set_idcv_attr(/* see target signature */)
{
    // Tail-call to set_idcv_attr via GOT/IAT indirection
    return set_idcv_attr(/* forwarded args */);
}

