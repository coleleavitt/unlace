// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD690
// Name:            .h2ti
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD690 jmp     cs:off_2C7C330
//
// Resolved target: h2ti
// Target address:  0x5F6EC0
// GOT/IAT slot:    0x2C7C330
// Slot symbol:     off_2C7C330
// Target type:     <no type info>
// ============================================================

void .h2ti(/* see target signature */)
{
    // Tail-call to h2ti via GOT/IAT indirection
    return h2ti(/* forwarded args */);
}

