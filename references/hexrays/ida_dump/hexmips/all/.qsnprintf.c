// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B130
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B130 jmp     cs:off_4CD880
//
// Resolved target: qsnprintf
// Target address:  0x4D02A0
// GOT/IAT slot:    0x4CD880
// Slot symbol:     off_4CD880
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

