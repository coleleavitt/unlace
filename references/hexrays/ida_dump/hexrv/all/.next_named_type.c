// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A050
// Name:            .next_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A050 jmp     cs:off_4BF010
//
// Resolved target: next_named_type
// Target address:  0x4C24D8
// GOT/IAT slot:    0x4BF010
// Slot symbol:     off_4BF010
// Target type:     <no type info>
// ============================================================

void .next_named_type(/* see target signature */)
{
    // Tail-call to next_named_type via GOT/IAT indirection
    return next_named_type(/* forwarded args */);
}

