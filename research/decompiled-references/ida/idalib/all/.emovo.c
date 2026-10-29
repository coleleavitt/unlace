// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD770
// Name:            .emovo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD770 jmp     cs:off_2C7C3A0
//
// Resolved target: emovo
// Target address:  0x8308A0
// GOT/IAT slot:    0x2C7C3A0
// Slot symbol:     off_2C7C3A0
// Target type:     <no type info>
// ============================================================

void .emovo(/* see target signature */)
{
    // Tail-call to emovo via GOT/IAT indirection
    return emovo(/* forwarded args */);
}

