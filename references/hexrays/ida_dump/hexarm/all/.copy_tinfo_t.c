// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D5D0
// Name:            .copy_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D5D0 jmp     cs:off_4E92D0
//
// Resolved target: copy_tinfo_t
// Target address:  0x4EBCC0
// GOT/IAT slot:    0x4E92D0
// Slot symbol:     off_4E92D0
// Target type:     <no type info>
// ============================================================

void .copy_tinfo_t(/* see target signature */)
{
    // Tail-call to copy_tinfo_t via GOT/IAT indirection
    return copy_tinfo_t(/* forwarded args */);
}

