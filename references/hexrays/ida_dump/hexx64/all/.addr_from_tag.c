// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C9E0
// Name:            .addr_from_tag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C9E0 jmp     cs:off_4EDCD8
//
// Resolved target: addr_from_tag
// Target address:  0x4F2010
// GOT/IAT slot:    0x4EDCD8
// Slot symbol:     off_4EDCD8
// Target type:     <no type info>
// ============================================================

void .addr_from_tag(/* see target signature */)
{
    // Tail-call to addr_from_tag via GOT/IAT indirection
    return addr_from_tag(/* forwarded args */);
}

