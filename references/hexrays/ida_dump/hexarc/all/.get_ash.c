// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADD0
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADD0 jmp     cs:off_4B9ED0
//
// Resolved target: get_ash
// Target address:  0x4BC900
// GOT/IAT slot:    0x4B9ED0
// Slot symbol:     off_4B9ED0
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

