// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B100
// Name:            .prev_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B100 jmp     cs:off_4ED068
//
// Resolved target: prev_that
// Target address:  0x4F1360
// GOT/IAT slot:    0x4ED068
// Slot symbol:     off_4ED068
// Target type:     <no type info>
// ============================================================

void .prev_that(/* see target signature */)
{
    // Tail-call to prev_that via GOT/IAT indirection
    return prev_that(/* forwarded args */);
}

