// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x90D0
// Name:            .qtime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x90D0 jmp     cs:off_26050
//
// Resolved target: qtime64
// Target address:  0x26360
// GOT/IAT slot:    0x26050
// Slot symbol:     off_26050
// Target type:     <no type info>
// ============================================================

void .qtime64(/* see target signature */)
{
    // Tail-call to qtime64 via GOT/IAT indirection
    return qtime64(/* forwarded args */);
}

