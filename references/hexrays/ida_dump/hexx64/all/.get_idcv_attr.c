// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CD90
// Name:            .get_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CD90 jmp     cs:off_4EDEB0
//
// Resolved target: get_idcv_attr
// Target address:  0x4F21F8
// GOT/IAT slot:    0x4EDEB0
// Slot symbol:     off_4EDEB0
// Target type:     <no type info>
// ============================================================

void .get_idcv_attr(/* see target signature */)
{
    // Tail-call to get_idcv_attr via GOT/IAT indirection
    return get_idcv_attr(/* forwarded args */);
}

