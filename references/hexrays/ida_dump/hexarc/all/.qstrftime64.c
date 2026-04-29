// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A6C0
// Name:            .qstrftime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A6C0 jmp     cs:off_4B9B48
//
// Resolved target: qstrftime64
// Target address:  0x4BC550
// GOT/IAT slot:    0x4B9B48
// Slot symbol:     off_4B9B48
// Target type:     <no type info>
// ============================================================

void .qstrftime64(/* see target signature */)
{
    // Tail-call to qstrftime64 via GOT/IAT indirection
    return qstrftime64(/* forwarded args */);
}

