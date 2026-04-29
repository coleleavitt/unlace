// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB70
// Name:            .next_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB70 jmp     cs:off_4ED5A0
//
// Resolved target: next_that
// Target address:  0x4F18A8
// GOT/IAT slot:    0x4ED5A0
// Slot symbol:     off_4ED5A0
// Target type:     <no type info>
// ============================================================

void .next_that(/* see target signature */)
{
    // Tail-call to next_that via GOT/IAT indirection
    return next_that(/* forwarded args */);
}

