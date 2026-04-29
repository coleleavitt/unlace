// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6170
// Name:            .copy_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6170 jmp     cs:off_8D0A0
//
// Resolved target: copy_tinfo_t
// Target address:  0x8D620
// GOT/IAT slot:    0x8D0A0
// Slot symbol:     off_8D0A0
// Target type:     <no type info>
// ============================================================

void .copy_tinfo_t(/* see target signature */)
{
    // Tail-call to copy_tinfo_t via GOT/IAT indirection
    return copy_tinfo_t(/* forwarded args */);
}

