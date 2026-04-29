// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DC70
// Name:            .h2ti
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DC70 jmp     cs:off_B3620
//
// Resolved target: h2ti
// Target address:  0xB3E00
// GOT/IAT slot:    0xB3620
// Slot symbol:     off_B3620
// Target type:     <no type info>
// ============================================================

void .h2ti(/* see target signature */)
{
    // Tail-call to h2ti via GOT/IAT indirection
    return h2ti(/* forwarded args */);
}

