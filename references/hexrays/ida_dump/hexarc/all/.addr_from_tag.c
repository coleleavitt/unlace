// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8D0
// Name:            .addr_from_tag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8D0 jmp     cs:off_4B9C50
//
// Resolved target: addr_from_tag
// Target address:  0x4BC668
// GOT/IAT slot:    0x4B9C50
// Slot symbol:     off_4B9C50
// Target type:     <no type info>
// ============================================================

void .addr_from_tag(/* see target signature */)
{
    // Tail-call to addr_from_tag via GOT/IAT indirection
    return addr_from_tag(/* forwarded args */);
}

