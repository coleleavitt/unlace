// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2500
// Name:            .find_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2500 jmp     cs:off_B268
//
// Resolved target: find_selector
// Target address:  0xB710
// GOT/IAT slot:    0xB268
// Slot symbol:     off_B268
// Target type:     <no type info>
// ============================================================

void .find_selector(/* see target signature */)
{
    // Tail-call to find_selector via GOT/IAT indirection
    return find_selector(/* forwarded args */);
}

