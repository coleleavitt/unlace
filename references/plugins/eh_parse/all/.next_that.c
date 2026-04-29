// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6310
// Name:            .next_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6310 jmp     cs:off_2F170
//
// Resolved target: next_that
// Target address:  0x2F7E0
// GOT/IAT slot:    0x2F170
// Slot symbol:     off_2F170
// Target type:     <no type info>
// ============================================================

void .next_that(/* see target signature */)
{
    // Tail-call to next_that via GOT/IAT indirection
    return next_that(/* forwarded args */);
}

