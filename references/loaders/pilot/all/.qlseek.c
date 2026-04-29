// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2110
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2110 jmp     cs:off_8070
//
// Resolved target: qlseek
// Target address:  0x8250
// GOT/IAT slot:    0x8070
// Slot symbol:     off_8070
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

