// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB020
// Name:            .next_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB020 jmp     cs:off_2C7AFF8
//
// Resolved target: next_idcv_attr
// Target address:  0x7918C0
// GOT/IAT slot:    0x2C7AFF8
// Slot symbol:     off_2C7AFF8
// Target type:     <no type info>
// ============================================================

void .next_idcv_attr(/* see target signature */)
{
    // Tail-call to next_idcv_attr via GOT/IAT indirection
    return next_idcv_attr(/* forwarded args */);
}

