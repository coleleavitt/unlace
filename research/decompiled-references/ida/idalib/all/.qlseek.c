// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADC00
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADC00 jmp     cs:off_2C7C5E8
//
// Resolved target: qlseek
// Target address:  0x837720
// GOT/IAT slot:    0x2C7C5E8
// Slot symbol:     off_2C7C5E8
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

