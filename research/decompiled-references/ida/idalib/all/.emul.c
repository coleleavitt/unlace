// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC0B0
// Name:            .emul
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC0B0 jmp     cs:off_2C7B840
//
// Resolved target: emul
// Target address:  0x831650
// GOT/IAT slot:    0x2C7B840
// Slot symbol:     off_2C7B840
// Target type:     <no type info>
// ============================================================

void .emul(/* see target signature */)
{
    // Tail-call to emul via GOT/IAT indirection
    return emul(/* forwarded args */);
}

