// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC100
// Name:            .dto_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC100 jmp     cs:off_2C7B868
//
// Resolved target: dto_init
// Target address:  0x62FF00
// GOT/IAT slot:    0x2C7B868
// Slot symbol:     off_2C7B868
// Target type:     <no type info>
// ============================================================

void .dto_init(/* see target signature */)
{
    // Tail-call to dto_init via GOT/IAT indirection
    return dto_init(/* forwarded args */);
}

