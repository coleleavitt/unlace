// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DE80
// Name:            .is_ordinal_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DE80 jmp     cs:off_4E9728
//
// Resolved target: is_ordinal_name
// Target address:  0x4EC140
// GOT/IAT slot:    0x4E9728
// Slot symbol:     off_4E9728
// Target type:     <no type info>
// ============================================================

void .is_ordinal_name(/* see target signature */)
{
    // Tail-call to is_ordinal_name via GOT/IAT indirection
    return is_ordinal_name(/* forwarded args */);
}

