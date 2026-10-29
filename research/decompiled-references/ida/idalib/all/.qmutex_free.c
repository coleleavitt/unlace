// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A98F0
// Name:            .qmutex_free
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A98F0 jmp     cs:off_2C7A460
//
// Resolved target: qmutex_free
// Target address:  0x842A20
// GOT/IAT slot:    0x2C7A460
// Slot symbol:     off_2C7A460
// Target type:     __int64 __fastcall(void *ptr)
// ============================================================

/* see target sig */ .qmutex_free(/* see target signature */)
{
    // Tail-call to qmutex_free via GOT/IAT indirection
    return qmutex_free(/* forwarded args */);
}

