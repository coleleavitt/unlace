// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115430
// Name:            .addr_from_tag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115430 jmp     cs:addr_from_tag_ptr
//
// Resolved target: addr_from_tag
// Target address:  0x8D5C70
// GOT/IAT slot:    0x8A16B8
// Slot symbol:     addr_from_tag_ptr
// Target type:     <no type info>
// ============================================================

void .addr_from_tag(/* see target signature */)
{
    // Tail-call to addr_from_tag via GOT/IAT indirection
    return addr_from_tag(/* forwarded args */);
}

