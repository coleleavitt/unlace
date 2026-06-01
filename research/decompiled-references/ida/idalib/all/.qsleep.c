// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC7F0
// Name:            .qsleep
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC7F0 jmp     cs:off_2C7BBE0
//
// Resolved target: qsleep
// Target address:  0x840F00
// GOT/IAT slot:    0x2C7BBE0
// Slot symbol:     off_2C7BBE0
// Target type:     <no type info>
// ============================================================

void .qsleep(/* see target signature */)
{
    // Tail-call to qsleep via GOT/IAT indirection
    return qsleep(/* forwarded args */);
}

