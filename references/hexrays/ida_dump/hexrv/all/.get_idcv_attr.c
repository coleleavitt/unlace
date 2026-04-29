// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC70
// Name:            .get_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC70 jmp     cs:off_4BFE20
//
// Resolved target: get_idcv_attr
// Target address:  0x4C3340
// GOT/IAT slot:    0x4BFE20
// Slot symbol:     off_4BFE20
// Target type:     <no type info>
// ============================================================

void .get_idcv_attr(/* see target signature */)
{
    // Tail-call to get_idcv_attr via GOT/IAT indirection
    return get_idcv_attr(/* forwarded args */);
}

