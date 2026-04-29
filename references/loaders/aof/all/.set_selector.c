// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2230
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2230 jmp     cs:off_7100
//
// Resolved target: set_selector
// Target address:  0x72B8
// GOT/IAT slot:    0x7100
// Slot symbol:     off_7100
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

