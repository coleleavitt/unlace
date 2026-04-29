// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21C0
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21C0 jmp     cs:off_B0C8
//
// Resolved target: qlseek
// Target address:  0xB370
// GOT/IAT slot:    0xB0C8
// Slot symbol:     off_B0C8
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

