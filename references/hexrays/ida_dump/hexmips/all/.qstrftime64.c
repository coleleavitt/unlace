// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6F0
// Name:            .qstrftime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6F0 jmp     cs:off_4CDB60
//
// Resolved target: qstrftime64
// Target address:  0x4D0588
// GOT/IAT slot:    0x4CDB60
// Slot symbol:     off_4CDB60
// Target type:     <no type info>
// ============================================================

void .qstrftime64(/* see target signature */)
{
    // Tail-call to qstrftime64 via GOT/IAT indirection
    return qstrftime64(/* forwarded args */);
}

