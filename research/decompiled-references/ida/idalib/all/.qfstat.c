// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9690
// Name:            .qfstat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9690 jmp     cs:off_2C7A330
//
// Resolved target: qfstat
// Target address:  0x83ED00
// GOT/IAT slot:    0x2C7A330
// Slot symbol:     off_2C7A330
// Target type:     __int64 __fastcall(int fildes)
// ============================================================

/* see target sig */ .qfstat(/* see target signature */)
{
    // Tail-call to qfstat via GOT/IAT indirection
    return qfstat(/* forwarded args */);
}

