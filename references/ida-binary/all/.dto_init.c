// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1190B0
// Name:            .dto_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1190B0 jmp     cs:dto_init_ptr
//
// Resolved target: dto_init
// Target address:  0x8D8230
// GOT/IAT slot:    0x8A34F8
// Slot symbol:     dto_init_ptr
// Target type:     <no type info>
// ============================================================

void .dto_init(/* see target signature */)
{
    // Tail-call to dto_init via GOT/IAT indirection
    return dto_init(/* forwarded args */);
}

