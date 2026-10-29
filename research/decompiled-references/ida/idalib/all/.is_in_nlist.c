// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA670
// Name:            .is_in_nlist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA670 jmp     cs:off_2C7AB20
//
// Resolved target: is_in_nlist
// Target address:  0x4E15A0
// GOT/IAT slot:    0x2C7AB20
// Slot symbol:     off_2C7AB20
// Target type:     <no type info>
// ============================================================

void .is_in_nlist(/* see target signature */)
{
    // Tail-call to is_in_nlist via GOT/IAT indirection
    return is_in_nlist(/* forwarded args */);
}

