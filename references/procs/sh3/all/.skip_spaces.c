// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5470
// Name:            .skip_spaces
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5470 jmp     cs:off_15220
//
// Resolved target: skip_spaces
// Target address:  0x162B0
// GOT/IAT slot:    0x15220
// Slot symbol:     off_15220
// Target type:     <no type info>
// ============================================================

void .skip_spaces(/* see target signature */)
{
    // Tail-call to skip_spaces via GOT/IAT indirection
    return skip_spaces(/* forwarded args */);
}

