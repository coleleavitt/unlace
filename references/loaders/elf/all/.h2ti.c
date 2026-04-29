// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9B00
// Name:            .h2ti
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9B00 jmp     cs:off_89568
//
// Resolved target: h2ti
// Target address:  0x8C8A0
// GOT/IAT slot:    0x89568
// Slot symbol:     off_89568
// Target type:     <no type info>
// ============================================================

void .h2ti(/* see target signature */)
{
    // Tail-call to h2ti via GOT/IAT indirection
    return h2ti(/* forwarded args */);
}

