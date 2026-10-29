// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA070
// Name:            .next_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA070 jmp     cs:off_2C7A820
//
// Resolved target: next_that
// Target address:  0x3C1870
// GOT/IAT slot:    0x2C7A820
// Slot symbol:     off_2C7A820
// Target type:     <no type info>
// ============================================================

void .next_that(/* see target signature */)
{
    // Tail-call to next_that via GOT/IAT indirection
    return next_that(/* forwarded args */);
}

