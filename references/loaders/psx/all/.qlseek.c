// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2160
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2160 jmp     cs:off_A098
//
// Resolved target: qlseek
// Target address:  0xA348
// GOT/IAT slot:    0xA098
// Slot symbol:     off_A098
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

