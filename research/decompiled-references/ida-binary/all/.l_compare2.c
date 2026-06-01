// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AD00
// Name:            .l_compare2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AD00 jmp     cs:l_compare2_ptr
//
// Resolved target: l_compare2
// Target address:  0x8D9460
// GOT/IAT slot:    0x8A4320
// Slot symbol:     l_compare2_ptr
// Target type:     <no type info>
// ============================================================

void .l_compare2(/* see target signature */)
{
    // Tail-call to l_compare2 via GOT/IAT indirection
    return l_compare2(/* forwarded args */);
}

