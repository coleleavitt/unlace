// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B900
// Name:            .addr_from_tag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B900 jmp     cs:off_4CDC68
//
// Resolved target: addr_from_tag
// Target address:  0x4D06A0
// GOT/IAT slot:    0x4CDC68
// Slot symbol:     off_4CDC68
// Target type:     <no type info>
// ============================================================

void .addr_from_tag(/* see target signature */)
{
    // Tail-call to addr_from_tag via GOT/IAT indirection
    return addr_from_tag(/* forwarded args */);
}

