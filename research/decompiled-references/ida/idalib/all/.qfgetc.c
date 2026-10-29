// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA690
// Name:            .qfgetc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA690 jmp     cs:off_2C7AB30
//
// Resolved target: qfgetc
// Target address:  0x83F850
// GOT/IAT slot:    0x2C7AB30
// Slot symbol:     off_2C7AB30
// Target type:     <no type info>
// ============================================================

void .qfgetc(/* see target signature */)
{
    // Tail-call to qfgetc via GOT/IAT indirection
    return qfgetc(/* forwarded args */);
}

