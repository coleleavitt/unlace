// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA220
// Name:            .copy_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA220 jmp     cs:off_CA0F8
//
// Resolved target: copy_tinfo_t
// Target address:  0xD0A28
// GOT/IAT slot:    0xCA0F8
// Slot symbol:     off_CA0F8
// Target type:     <no type info>
// ============================================================

void .copy_tinfo_t(/* see target signature */)
{
    // Tail-call to copy_tinfo_t via GOT/IAT indirection
    return copy_tinfo_t(/* forwarded args */);
}

