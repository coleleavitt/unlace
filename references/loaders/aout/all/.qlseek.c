// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10F0
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10F0 jmp     cs:off_6060
//
// Resolved target: qlseek
// Target address:  0x61E8
// GOT/IAT slot:    0x6060
// Slot symbol:     off_6060
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

