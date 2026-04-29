// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DAC0
// Name:            .display_gdl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DAC0 jmp     cs:off_4E9548
//
// Resolved target: display_gdl
// Target address:  0x4EBF50
// GOT/IAT slot:    0x4E9548
// Slot symbol:     off_4E9548
// Target type:     <no type info>
// ============================================================

void .display_gdl(/* see target signature */)
{
    // Tail-call to display_gdl via GOT/IAT indirection
    return display_gdl(/* forwarded args */);
}

