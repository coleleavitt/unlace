// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B830
// Name:            .eetol64u
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B830 jmp     cs:off_4DAC00
//
// Resolved target: eetol64u
// Target address:  0x4DD610
// GOT/IAT slot:    0x4DAC00
// Slot symbol:     off_4DAC00
// Target type:     <no type info>
// ============================================================

void .eetol64u(/* see target signature */)
{
    // Tail-call to eetol64u via GOT/IAT indirection
    return eetol64u(/* forwarded args */);
}

