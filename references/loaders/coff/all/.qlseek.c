// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42F0
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42F0 jmp     cs:off_23160
//
// Resolved target: qlseek
// Target address:  0x23580
// GOT/IAT slot:    0x23160
// Slot symbol:     off_23160
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

