// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA720
// Name:            .replace_tabs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA720 jmp     cs:off_CA378
//
// Resolved target: replace_tabs
// Target address:  0xD0CB0
// GOT/IAT slot:    0xCA378
// Slot symbol:     off_CA378
// Target type:     <no type info>
// ============================================================

void .replace_tabs(/* see target signature */)
{
    // Tail-call to replace_tabs via GOT/IAT indirection
    return replace_tabs(/* forwarded args */);
}

