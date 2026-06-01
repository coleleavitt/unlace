// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1166D0
// Name:            .first_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1166D0 jmp     cs:first_idcv_attr_ptr
//
// Resolved target: first_idcv_attr
// Target address:  0x8D6808
// GOT/IAT slot:    0x8A2008
// Slot symbol:     first_idcv_attr_ptr
// Target type:     <no type info>
// ============================================================

void .first_idcv_attr(/* see target signature */)
{
    // Tail-call to first_idcv_attr via GOT/IAT indirection
    return first_idcv_attr(/* forwarded args */);
}

