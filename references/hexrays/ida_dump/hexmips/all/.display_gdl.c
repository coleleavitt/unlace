// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAA0
// Name:            .display_gdl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAA0 jmp     cs:off_4CD538
//
// Resolved target: display_gdl
// Target address:  0x4CFF40
// GOT/IAT slot:    0x4CD538
// Slot symbol:     off_4CD538
// Target type:     <no type info>
// ============================================================

void .display_gdl(/* see target signature */)
{
    // Tail-call to display_gdl via GOT/IAT indirection
    return display_gdl(/* forwarded args */);
}

