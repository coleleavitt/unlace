// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB940
// Name:            .idcv_object
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB940 jmp     cs:off_2C7B488
//
// Resolved target: idcv_object
// Target address:  0x7976B0
// GOT/IAT slot:    0x2C7B488
// Slot symbol:     off_2C7B488
// Target type:     <no type info>
// ============================================================

void .idcv_object(/* see target signature */)
{
    // Tail-call to idcv_object via GOT/IAT indirection
    return idcv_object(/* forwarded args */);
}

