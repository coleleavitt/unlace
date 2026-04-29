// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6D0
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6D0 jmp     cs:off_CA350
//
// Resolved target: qsnprintf
// Target address:  0xD0C88
// GOT/IAT slot:    0xCA350
// Slot symbol:     off_CA350
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

