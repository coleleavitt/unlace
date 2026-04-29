// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2130
// Name:            .next_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2130 jmp     cs:off_A080
//
// Resolved target: next_that
// Target address:  0xB350
// GOT/IAT slot:    0xA080
// Slot symbol:     off_A080
// Target type:     <no type info>
// ============================================================

void .next_that(/* see target signature */)
{
    // Tail-call to next_that via GOT/IAT indirection
    return next_that(/* forwarded args */);
}

