// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC4B0
// Name:            .qvprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC4B0 jmp     cs:off_2C7BA40
//
// Resolved target: qvprintf
// Target address:  0x84E510
// GOT/IAT slot:    0x2C7BA40
// Slot symbol:     off_2C7BA40
// Target type:     <no type info>
// ============================================================

void .qvprintf(/* see target signature */)
{
    // Tail-call to qvprintf via GOT/IAT indirection
    return qvprintf(/* forwarded args */);
}

