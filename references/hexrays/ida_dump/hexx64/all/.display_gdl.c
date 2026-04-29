// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAF0
// Name:            .display_gdl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAF0 jmp     cs:off_4ED560
//
// Resolved target: display_gdl
// Target address:  0x4F1860
// GOT/IAT slot:    0x4ED560
// Slot symbol:     off_4ED560
// Target type:     <no type info>
// ============================================================

void .display_gdl(/* see target signature */)
{
    // Tail-call to display_gdl via GOT/IAT indirection
    return display_gdl(/* forwarded args */);
}

