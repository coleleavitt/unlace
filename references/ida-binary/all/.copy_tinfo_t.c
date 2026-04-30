// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1152B0
// Name:            .copy_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1152B0 jmp     cs:copy_tinfo_t_ptr
//
// Resolved target: copy_tinfo_t
// Target address:  0x8D5BA0
// GOT/IAT slot:    0x8A15F8
// Slot symbol:     copy_tinfo_t_ptr
// Target type:     <no type info>
// ============================================================

void .copy_tinfo_t(/* see target signature */)
{
    // Tail-call to copy_tinfo_t via GOT/IAT indirection
    return copy_tinfo_t(/* forwarded args */);
}

