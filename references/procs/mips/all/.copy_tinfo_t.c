// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19240
// Name:            .copy_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19240 jmp     cs:off_75108
//
// Resolved target: copy_tinfo_t
// Target address:  0x75958
// GOT/IAT slot:    0x75108
// Slot symbol:     off_75108
// Target type:     <no type info>
// ============================================================

void .copy_tinfo_t(/* see target signature */)
{
    // Tail-call to copy_tinfo_t via GOT/IAT indirection
    return copy_tinfo_t(/* forwarded args */);
}

