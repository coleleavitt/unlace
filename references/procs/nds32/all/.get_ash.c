// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8700
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8700 jmp     cs:off_2A368
//
// Resolved target: get_ash
// Target address:  0x2A8F0
// GOT/IAT slot:    0x2A368
// Slot symbol:     off_2A368
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

