// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E930
// Name:            .addr_from_tag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E930 jmp     cs:off_4E9C80
//
// Resolved target: addr_from_tag
// Target address:  0x4EC6B8
// GOT/IAT slot:    0x4E9C80
// Slot symbol:     off_4E9C80
// Target type:     <no type info>
// ============================================================

void .addr_from_tag(/* see target signature */)
{
    // Tail-call to addr_from_tag via GOT/IAT indirection
    return addr_from_tag(/* forwarded args */);
}

