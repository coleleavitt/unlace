// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB20
// Name:            .next_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB20 jmp     cs:off_4CD578
//
// Resolved target: next_that
// Target address:  0x4CFF88
// GOT/IAT slot:    0x4CD578
// Slot symbol:     off_4CD578
// Target type:     <no type info>
// ============================================================

void .next_that(/* see target signature */)
{
    // Tail-call to next_that via GOT/IAT indirection
    return next_that(/* forwarded args */);
}

