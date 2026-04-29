// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6060
// Name:            .prev_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6060 jmp     cs:off_2F018
//
// Resolved target: prev_that
// Target address:  0x2F688
// GOT/IAT slot:    0x2F018
// Slot symbol:     off_2F018
// Target type:     <no type info>
// ============================================================

void .prev_that(/* see target signature */)
{
    // Tail-call to prev_that via GOT/IAT indirection
    return prev_that(/* forwarded args */);
}

