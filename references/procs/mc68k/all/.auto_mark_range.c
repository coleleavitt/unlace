// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66E0
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66E0 jmp     cs:off_1D358
//
// Resolved target: auto_mark_range
// Target address:  0x1D860
// GOT/IAT slot:    0x1D358
// Slot symbol:     off_1D358
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}

