// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6F0
// Name:            .qstrftime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6F0 jmp     cs:off_4C0B60
//
// Resolved target: qstrftime64
// Target address:  0x4C3B60
// GOT/IAT slot:    0x4C0B60
// Slot symbol:     off_4C0B60
// Target type:     <no type info>
// ============================================================

void .qstrftime64(/* see target signature */)
{
    // Tail-call to qstrftime64 via GOT/IAT indirection
    return qstrftime64(/* forwarded args */);
}

