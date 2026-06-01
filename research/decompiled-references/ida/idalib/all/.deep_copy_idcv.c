// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC970
// Name:            .deep_copy_idcv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC970 jmp     cs:off_2C7BCA0
//
// Resolved target: deep_copy_idcv
// Target address:  0x79BCA0
// GOT/IAT slot:    0x2C7BCA0
// Slot symbol:     off_2C7BCA0
// Target type:     <no type info>
// ============================================================

void .deep_copy_idcv(/* see target signature */)
{
    // Tail-call to deep_copy_idcv via GOT/IAT indirection
    return deep_copy_idcv(/* forwarded args */);
}

