// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B780
// Name:            .clr_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B780 jmp     cs:clr_abits_ptr
//
// Resolved target: clr_abits
// Target address:  0x8D9AF8
// GOT/IAT slot:    0x8A4860
// Slot symbol:     clr_abits_ptr
// Target type:     <no type info>
// ============================================================

void .clr_abits(/* see target signature */)
{
    // Tail-call to clr_abits via GOT/IAT indirection
    return clr_abits(/* forwarded args */);
}

