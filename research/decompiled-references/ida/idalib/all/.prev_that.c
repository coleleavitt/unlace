// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7D60
// Name:            .prev_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7D60 jmp     cs:off_2C79698
//
// Resolved target: prev_that
// Target address:  0x3C1970
// GOT/IAT slot:    0x2C79698
// Slot symbol:     off_2C79698
// Target type:     <no type info>
// ============================================================

void .prev_that(/* see target signature */)
{
    // Tail-call to prev_that via GOT/IAT indirection
    return prev_that(/* forwarded args */);
}

