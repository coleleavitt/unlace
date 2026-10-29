// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC480
// Name:            .is_ordinal_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC480 jmp     cs:off_2C7BA28
//
// Resolved target: is_ordinal_name
// Target address:  0x6B39B0
// GOT/IAT slot:    0x2C7BA28
// Slot symbol:     off_2C7BA28
// Target type:     <no type info>
// ============================================================

void .is_ordinal_name(/* see target signature */)
{
    // Tail-call to is_ordinal_name via GOT/IAT indirection
    return is_ordinal_name(/* forwarded args */);
}

