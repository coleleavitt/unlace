// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B090
// Name:            .tag_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B090 jmp     cs:off_4DA830
//
// Resolved target: tag_addr
// Target address:  0x4DD230
// GOT/IAT slot:    0x4DA830
// Slot symbol:     off_4DA830
// Target type:     <no type info>
// ============================================================

void .tag_addr(/* see target signature */)
{
    // Tail-call to tag_addr via GOT/IAT indirection
    return tag_addr(/* forwarded args */);
}

