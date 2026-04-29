// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x295C0
// Name:            .copy_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x295C0 jmp     cs:off_4B92C8
//
// Resolved target: copy_tinfo_t
// Target address:  0x4BBC98
// GOT/IAT slot:    0x4B92C8
// Slot symbol:     off_4B92C8
// Target type:     <no type info>
// ============================================================

void .copy_tinfo_t(/* see target signature */)
{
    // Tail-call to copy_tinfo_t via GOT/IAT indirection
    return copy_tinfo_t(/* forwarded args */);
}

