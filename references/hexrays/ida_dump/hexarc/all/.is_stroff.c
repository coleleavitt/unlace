// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A5D0
// Name:            .is_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A5D0 jmp     cs:off_4B9AD0
//
// Resolved target: is_stroff
// Target address:  0x4BC4D8
// GOT/IAT slot:    0x4B9AD0
// Slot symbol:     off_4B9AD0
// Target type:     <no type info>
// ============================================================

void .is_stroff(/* see target signature */)
{
    // Tail-call to is_stroff via GOT/IAT indirection
    return is_stroff(/* forwarded args */);
}

