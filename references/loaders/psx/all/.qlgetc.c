// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2300
// Name:            .qlgetc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2300 jmp     cs:off_A168
//
// Resolved target: qlgetc
// Target address:  0xA428
// GOT/IAT slot:    0xA168
// Slot symbol:     off_A168
// Target type:     <no type info>
// ============================================================

void .qlgetc(/* see target signature */)
{
    // Tail-call to qlgetc via GOT/IAT indirection
    return qlgetc(/* forwarded args */);
}

