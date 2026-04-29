// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1200
// Name:            .find_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1200 jmp     cs:off_50E8
//
// Resolved target: find_selector
// Target address:  0x5270
// GOT/IAT slot:    0x50E8
// Slot symbol:     off_50E8
// Target type:     <no type info>
// ============================================================

void .find_selector(/* see target signature */)
{
    // Tail-call to find_selector via GOT/IAT indirection
    return find_selector(/* forwarded args */);
}

