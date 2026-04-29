// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A0E0
// Name:            .qmutex_free
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A0E0 jmp     cs:off_4DA058
//
// Resolved target: qmutex_free
// Target address:  0x4DCA28
// GOT/IAT slot:    0x4DA058
// Slot symbol:     off_4DA058
// Target type:     <no type info>
// ============================================================

void .qmutex_free(/* see target signature */)
{
    // Tail-call to qmutex_free via GOT/IAT indirection
    return qmutex_free(/* forwarded args */);
}

