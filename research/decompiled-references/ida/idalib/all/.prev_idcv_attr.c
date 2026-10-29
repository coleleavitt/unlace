// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC080
// Name:            .prev_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC080 jmp     cs:off_2C7B828
//
// Resolved target: prev_idcv_attr
// Target address:  0x791A70
// GOT/IAT slot:    0x2C7B828
// Slot symbol:     off_2C7B828
// Target type:     <no type info>
// ============================================================

void .prev_idcv_attr(/* see target signature */)
{
    // Tail-call to prev_idcv_attr via GOT/IAT indirection
    return prev_idcv_attr(/* forwarded args */);
}

