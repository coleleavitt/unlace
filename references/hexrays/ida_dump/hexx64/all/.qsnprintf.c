// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C1E0
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C1E0 jmp     cs:off_4ED8D8
//
// Resolved target: qsnprintf
// Target address:  0x4F1BF8
// GOT/IAT slot:    0x4ED8D8
// Slot symbol:     off_4ED8D8
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

