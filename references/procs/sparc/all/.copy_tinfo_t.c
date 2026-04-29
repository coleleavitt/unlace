// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7110
// Name:            .copy_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7110 jmp     cs:off_19070
//
// Resolved target: copy_tinfo_t
// Target address:  0x195A0
// GOT/IAT slot:    0x19070
// Slot symbol:     off_19070
// Target type:     <no type info>
// ============================================================

void .copy_tinfo_t(/* see target signature */)
{
    // Tail-call to copy_tinfo_t via GOT/IAT indirection
    return copy_tinfo_t(/* forwarded args */);
}

