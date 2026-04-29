// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2340
// Name:            .find_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2340 jmp     cs:off_8188
//
// Resolved target: find_selector
// Target address:  0x83F8
// GOT/IAT slot:    0x8188
// Slot symbol:     off_8188
// Target type:     <no type info>
// ============================================================

void .find_selector(/* see target signature */)
{
    // Tail-call to find_selector via GOT/IAT indirection
    return find_selector(/* forwarded args */);
}

