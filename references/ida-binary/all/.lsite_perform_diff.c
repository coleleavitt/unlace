// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117BA0
// Name:            .lsite_perform_diff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117BA0 jmp     cs:lsite_perform_diff_ptr
//
// Resolved target: lsite_perform_diff
// Target address:  0x8D7538
// GOT/IAT slot:    0x8A2A70
// Slot symbol:     lsite_perform_diff_ptr
// Target type:     <no type info>
// ============================================================

void .lsite_perform_diff(/* see target signature */)
{
    // Tail-call to lsite_perform_diff via GOT/IAT indirection
    return lsite_perform_diff(/* forwarded args */);
}

