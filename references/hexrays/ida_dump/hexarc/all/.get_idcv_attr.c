// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC50
// Name:            .get_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC50 jmp     cs:off_4B9E10
//
// Resolved target: get_idcv_attr
// Target address:  0x4BC838
// GOT/IAT slot:    0x4B9E10
// Slot symbol:     off_4B9E10
// Target type:     <no type info>
// ============================================================

void .get_idcv_attr(/* see target signature */)
{
    // Tail-call to get_idcv_attr via GOT/IAT indirection
    return get_idcv_attr(/* forwarded args */);
}

