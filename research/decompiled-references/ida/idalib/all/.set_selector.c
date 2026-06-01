// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7390
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7390 jmp     cs:off_2C791B0
//
// Resolved target: set_selector
// Target address:  0x50FD90
// GOT/IAT slot:    0x2C791B0
// Slot symbol:     off_2C791B0
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

