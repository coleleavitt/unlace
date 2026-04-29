// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6E0
// Name:            .qstrftime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6E0 jmp     cs:off_4BFB58
//
// Resolved target: qstrftime64
// Target address:  0x4C3058
// GOT/IAT slot:    0x4BFB58
// Slot symbol:     off_4BFB58
// Target type:     <no type info>
// ============================================================

void .qstrftime64(/* see target signature */)
{
    // Tail-call to qstrftime64 via GOT/IAT indirection
    return qstrftime64(/* forwarded args */);
}

