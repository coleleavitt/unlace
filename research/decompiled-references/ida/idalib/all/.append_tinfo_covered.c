// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACBF0
// Name:            .append_tinfo_covered
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACBF0 jmp     cs:off_2C7BDE0
//
// Resolved target: append_tinfo_covered
// Target address:  0x53E920
// GOT/IAT slot:    0x2C7BDE0
// Slot symbol:     off_2C7BDE0
// Target type:     <no type info>
// ============================================================

void .append_tinfo_covered(/* see target signature */)
{
    // Tail-call to append_tinfo_covered via GOT/IAT indirection
    return append_tinfo_covered(/* forwarded args */);
}

