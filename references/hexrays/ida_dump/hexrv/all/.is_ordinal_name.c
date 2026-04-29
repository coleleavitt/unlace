// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE60
// Name:            .is_ordinal_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE60 jmp     cs:off_4BF718
//
// Resolved target: is_ordinal_name
// Target address:  0x4C2C08
// GOT/IAT slot:    0x4BF718
// Slot symbol:     off_4BF718
// Target type:     <no type info>
// ============================================================

void .is_ordinal_name(/* see target signature */)
{
    // Tail-call to is_ordinal_name via GOT/IAT indirection
    return is_ordinal_name(/* forwarded args */);
}

