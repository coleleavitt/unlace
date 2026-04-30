// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116BB0
// Name:            .calc_max_align
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116BB0 jmp     cs:calc_max_align_ptr
//
// Resolved target: calc_max_align
// Target address:  0x8D6B38
// GOT/IAT slot:    0x8A2278
// Slot symbol:     calc_max_align_ptr
// Target type:     <no type info>
// ============================================================

void .calc_max_align(/* see target signature */)
{
    // Tail-call to calc_max_align via GOT/IAT indirection
    return calc_max_align(/* forwarded args */);
}

