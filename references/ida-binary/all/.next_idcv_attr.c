// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117740
// Name:            .next_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117740 jmp     cs:next_idcv_attr_ptr
//
// Resolved target: next_idcv_attr
// Target address:  0x8D7290
// GOT/IAT slot:    0x8A2840
// Slot symbol:     next_idcv_attr_ptr
// Target type:     <no type info>
// ============================================================

void .next_idcv_attr(/* see target signature */)
{
    // Tail-call to next_idcv_attr via GOT/IAT indirection
    return next_idcv_attr(/* forwarded args */);
}

