// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170 jmp     cs:off_40A0
//
// Resolved target: set_selector
// Target address:  0x41B8
// GOT/IAT slot:    0x40A0
// Slot symbol:     off_40A0
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

