// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2250
// Name:            .qlgetc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2250 jmp     cs:off_8110
//
// Resolved target: qlgetc
// Target address:  0x82F8
// GOT/IAT slot:    0x8110
// Slot symbol:     off_8110
// Target type:     <no type info>
// ============================================================

void .qlgetc(/* see target signature */)
{
    // Tail-call to qlgetc via GOT/IAT indirection
    return qlgetc(/* forwarded args */);
}

