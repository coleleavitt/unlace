// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD250
// Name:            .l_compare2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD250 jmp     cs:off_2C7C110
//
// Resolved target: l_compare2
// Target address:  0x453300
// GOT/IAT slot:    0x2C7C110
// Slot symbol:     off_2C7C110
// Target type:     <no type info>
// ============================================================

void .l_compare2(/* see target signature */)
{
    // Tail-call to l_compare2 via GOT/IAT indirection
    return l_compare2(/* forwarded args */);
}

