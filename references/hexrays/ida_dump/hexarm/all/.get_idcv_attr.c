// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ECB0
// Name:            .get_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ECB0 jmp     cs:off_4E9E40
//
// Resolved target: get_idcv_attr
// Target address:  0x4EC888
// GOT/IAT slot:    0x4E9E40
// Slot symbol:     off_4E9E40
// Target type:     <no type info>
// ============================================================

void .get_idcv_attr(/* see target signature */)
{
    // Tail-call to get_idcv_attr via GOT/IAT indirection
    return get_idcv_attr(/* forwarded args */);
}

