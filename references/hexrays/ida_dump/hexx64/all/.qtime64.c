// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B710
// Name:            .qtime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B710 jmp     cs:off_4ED370
//
// Resolved target: qtime64
// Target address:  0x4F1668
// GOT/IAT slot:    0x4ED370
// Slot symbol:     off_4ED370
// Target type:     <no type info>
// ============================================================

void .qtime64(/* see target signature */)
{
    // Tail-call to qtime64 via GOT/IAT indirection
    return qtime64(/* forwarded args */);
}

