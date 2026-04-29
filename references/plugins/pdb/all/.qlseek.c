// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D400
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D400 jmp     cs:off_B31E8
//
// Resolved target: qlseek
// Target address:  0xB3980
// GOT/IAT slot:    0xB31E8
// Slot symbol:     off_B31E8
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

