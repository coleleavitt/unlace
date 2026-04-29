// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2230
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2230 jmp     cs:off_8100
//
// Resolved target: set_selector
// Target address:  0x82E0
// GOT/IAT slot:    0x8100
// Slot symbol:     off_8100
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

