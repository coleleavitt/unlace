// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9B70
// Name:            .copy_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9B70 jmp     cs:off_2C7A5A0
//
// Resolved target: copy_tinfo_t
// Target address:  0x5425D0
// GOT/IAT slot:    0x2C7A5A0
// Slot symbol:     off_2C7A5A0
// Target type:     <no type info>
// ============================================================

void .copy_tinfo_t(/* see target signature */)
{
    // Tail-call to copy_tinfo_t via GOT/IAT indirection
    return copy_tinfo_t(/* forwarded args */);
}

