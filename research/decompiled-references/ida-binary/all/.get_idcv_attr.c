// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B6A0
// Name:            .get_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B6A0 jmp     cs:get_idcv_attr_ptr
//
// Resolved target: get_idcv_attr
// Target address:  0x8D9A68
// GOT/IAT slot:    0x8A47F0
// Slot symbol:     get_idcv_attr_ptr
// Target type:     <no type info>
// ============================================================

void .get_idcv_attr(/* see target signature */)
{
    // Tail-call to get_idcv_attr via GOT/IAT indirection
    return get_idcv_attr(/* forwarded args */);
}

