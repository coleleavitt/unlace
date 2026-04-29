// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1090
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1090 jmp     cs:off_7030
//
// Resolved target: qlseek
// Target address:  0x7128
// GOT/IAT slot:    0x7030
// Slot symbol:     off_7030
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

