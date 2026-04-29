// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A760
// Name:            .idcv_object
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A760 jmp     cs:off_4BF398
//
// Resolved target: idcv_object
// Target address:  0x4C2860
// GOT/IAT slot:    0x4BF398
// Slot symbol:     off_4BF398
// Target type:     <no type info>
// ============================================================

void .idcv_object(/* see target signature */)
{
    // Tail-call to idcv_object via GOT/IAT indirection
    return idcv_object(/* forwarded args */);
}

