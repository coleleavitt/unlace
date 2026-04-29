// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B8F0
// Name:            .addr_from_tag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B8F0 jmp     cs:off_4BFC60
//
// Resolved target: addr_from_tag
// Target address:  0x4C3170
// GOT/IAT slot:    0x4BFC60
// Slot symbol:     off_4BFC60
// Target type:     <no type info>
// ============================================================

void .addr_from_tag(/* see target signature */)
{
    // Tail-call to addr_from_tag via GOT/IAT indirection
    return addr_from_tag(/* forwarded args */);
}

