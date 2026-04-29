// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEC0
// Name:            .is_ordinal_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEC0 jmp     cs:off_4ED748
//
// Resolved target: is_ordinal_name
// Target address:  0x4F1A58
// GOT/IAT slot:    0x4ED748
// Slot symbol:     off_4ED748
// Target type:     <no type info>
// ============================================================

void .is_ordinal_name(/* see target signature */)
{
    // Tail-call to is_ordinal_name via GOT/IAT indirection
    return is_ordinal_name(/* forwarded args */);
}

