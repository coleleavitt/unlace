// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1122E0
// Name:            .calc_def_align
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1122E0 jmp     cs:calc_def_align_ptr
//
// Resolved target: calc_def_align
// Target address:  0x8D3C88
// GOT/IAT slot:    0x89FE10
// Slot symbol:     calc_def_align_ptr
// Target type:     <no type info>
// ============================================================

void .calc_def_align(/* see target signature */)
{
    // Tail-call to calc_def_align via GOT/IAT indirection
    return calc_def_align(/* forwarded args */);
}

