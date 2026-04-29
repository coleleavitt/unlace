// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3250
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3250 jmp     cs:off_13110
//
// Resolved target: qlseek
// Target address:  0x13488
// GOT/IAT slot:    0x13110
// Slot symbol:     off_13110
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

