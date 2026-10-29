// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACE00
// Name:            .qlgetc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACE00 jmp     cs:off_2C7BEE8
//
// Resolved target: qlgetc
// Target address:  0x837960
// GOT/IAT slot:    0x2C7BEE8
// Slot symbol:     off_2C7BEE8
// Target type:     <no type info>
// ============================================================

void .qlgetc(/* see target signature */)
{
    // Tail-call to qlgetc via GOT/IAT indirection
    return qlgetc(/* forwarded args */);
}

