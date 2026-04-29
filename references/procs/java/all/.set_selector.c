// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6530
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6530 jmp     cs:off_2D280
//
// Resolved target: set_selector
// Target address:  0x2D780
// GOT/IAT slot:    0x2D280
// Slot symbol:     off_2D280
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

