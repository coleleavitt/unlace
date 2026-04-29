// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B130
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B130 jmp     cs:off_4C0880
//
// Resolved target: qsnprintf
// Target address:  0x4C3878
// GOT/IAT slot:    0x4C0880
// Slot symbol:     off_4C0880
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

