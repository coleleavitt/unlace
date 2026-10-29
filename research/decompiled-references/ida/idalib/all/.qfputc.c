// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB560
// Name:            .qfputc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB560 jmp     cs:off_2C7B298
//
// Resolved target: qfputc
// Target address:  0x83F810
// GOT/IAT slot:    0x2C7B298
// Slot symbol:     off_2C7B298
// Target type:     <no type info>
// ============================================================

void .qfputc(/* see target signature */)
{
    // Tail-call to qfputc via GOT/IAT indirection
    return qfputc(/* forwarded args */);
}

