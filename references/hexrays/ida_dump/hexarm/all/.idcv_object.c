// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D770
// Name:            .idcv_object
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D770 jmp     cs:off_4E93A0
//
// Resolved target: idcv_object
// Target address:  0x4EBD90
// GOT/IAT slot:    0x4E93A0
// Slot symbol:     off_4E93A0
// Target type:     <no type info>
// ============================================================

void .idcv_object(/* see target signature */)
{
    // Tail-call to idcv_object via GOT/IAT indirection
    return idcv_object(/* forwarded args */);
}

