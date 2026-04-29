// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150 jmp     cs:off_5090
//
// Resolved target: set_selector
// Target address:  0x51A8
// GOT/IAT slot:    0x5090
// Slot symbol:     off_5090
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

