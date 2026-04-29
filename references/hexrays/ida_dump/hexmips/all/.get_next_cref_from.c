// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC40
// Name:            .get_next_cref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC40 jmp     cs:off_4CDE08
//
// Resolved target: get_next_cref_from
// Target address:  0x4D0848
// GOT/IAT slot:    0x4CDE08
// Slot symbol:     off_4CDE08
// Target type:     <no type info>
// ============================================================

void .get_next_cref_from(/* see target signature */)
{
    // Tail-call to get_next_cref_from via GOT/IAT indirection
    return get_next_cref_from(/* forwarded args */);
}

