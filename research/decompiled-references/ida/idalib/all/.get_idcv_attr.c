// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD7F0
// Name:            .get_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD7F0 jmp     cs:off_2C7C3E0
//
// Resolved target: get_idcv_attr
// Target address:  0x7996E0
// GOT/IAT slot:    0x2C7C3E0
// Slot symbol:     off_2C7C3E0
// Target type:     <no type info>
// ============================================================

void .get_idcv_attr(/* see target signature */)
{
    // Tail-call to get_idcv_attr via GOT/IAT indirection
    return get_idcv_attr(/* forwarded args */);
}

