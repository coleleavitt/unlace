// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACB00
// Name:            .get_tid_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACB00 jmp     cs:off_2C7BD68
//
// Resolved target: get_tid_ordinal
// Target address:  0x6BD880
// GOT/IAT slot:    0x2C7BD68
// Slot symbol:     off_2C7BD68
// Target type:     <no type info>
// ============================================================

void .get_tid_ordinal(/* see target signature */)
{
    // Tail-call to get_tid_ordinal via GOT/IAT indirection
    return get_tid_ordinal(/* forwarded args */);
}

