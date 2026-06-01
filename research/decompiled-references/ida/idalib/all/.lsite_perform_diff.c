// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB2A0
// Name:            .lsite_perform_diff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB2A0 jmp     cs:off_2C7B138
//
// Resolved target: lsite_perform_diff
// Target address:  0x8CFEC0
// GOT/IAT slot:    0x2C7B138
// Slot symbol:     off_2C7B138
// Target type:     <no type info>
// ============================================================

void .lsite_perform_diff(/* see target signature */)
{
    // Tail-call to lsite_perform_diff via GOT/IAT indirection
    return lsite_perform_diff(/* forwarded args */);
}

