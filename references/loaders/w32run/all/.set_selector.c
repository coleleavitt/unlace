// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1130
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1130 jmp     cs:off_4080
//
// Resolved target: set_selector
// Target address:  0x41A8
// GOT/IAT slot:    0x4080
// Slot symbol:     off_4080
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

