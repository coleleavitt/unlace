// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1070
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1070 jmp     cs:off_4020
//
// Resolved target: qlseek
// Target address:  0x40D8
// GOT/IAT slot:    0x4020
// Slot symbol:     off_4020
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

