// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A760
// Name:            .idcv_object
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A760 jmp     cs:off_4DA398
//
// Resolved target: idcv_object
// Target address:  0x4DCD68
// GOT/IAT slot:    0x4DA398
// Slot symbol:     off_4DA398
// Target type:     <no type info>
// ============================================================

void .idcv_object(/* see target signature */)
{
    // Tail-call to idcv_object via GOT/IAT indirection
    return idcv_object(/* forwarded args */);
}

