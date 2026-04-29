// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x296E0
// Name:            .qtime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x296E0 jmp     cs:off_4B9358
//
// Resolved target: qtime64
// Target address:  0x4BBD28
// GOT/IAT slot:    0x4B9358
// Slot symbol:     off_4B9358
// Target type:     <no type info>
// ============================================================

void .qtime64(/* see target signature */)
{
    // Tail-call to qtime64 via GOT/IAT indirection
    return qtime64(/* forwarded args */);
}

