// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC30
// Name:            .get_next_cref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC30 jmp     cs:off_4DAE00
//
// Resolved target: get_next_cref_from
// Target address:  0x4DD820
// GOT/IAT slot:    0x4DAE00
// Slot symbol:     off_4DAE00
// Target type:     <no type info>
// ============================================================

void .get_next_cref_from(/* see target signature */)
{
    // Tail-call to get_next_cref_from via GOT/IAT indirection
    return get_next_cref_from(/* forwarded args */);
}

