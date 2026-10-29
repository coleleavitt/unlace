// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB6A0
// Name:            .emovi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB6A0 jmp     cs:off_2C7B338
//
// Resolved target: emovi
// Target address:  0x8308E0
// GOT/IAT slot:    0x2C7B338
// Slot symbol:     off_2C7B338
// Target type:     <no type info>
// ============================================================

void .emovi(/* see target signature */)
{
    // Tail-call to emovi via GOT/IAT indirection
    return emovi(/* forwarded args */);
}

