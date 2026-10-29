// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A84B0
// Name:            .qgmtime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A84B0 jmp     cs:off_2C79A40
//
// Resolved target: qgmtime
// Target address:  0x841220
// GOT/IAT slot:    0x2C79A40
// Slot symbol:     off_2C79A40
// Target type:     __int64 __fastcall(struct tm *tp)
// ============================================================

/* see target sig */ .qgmtime(/* see target signature */)
{
    // Tail-call to qgmtime via GOT/IAT indirection
    return qgmtime(/* forwarded args */);
}

