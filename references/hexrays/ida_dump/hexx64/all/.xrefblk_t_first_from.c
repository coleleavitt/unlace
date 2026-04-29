// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C090
// Name:            .xrefblk_t_first_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C090 jmp     cs:off_4ED830
//
// Resolved target: xrefblk_t_first_from
// Target address:  0x4F1B40
// GOT/IAT slot:    0x4ED830
// Slot symbol:     off_4ED830
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_from via GOT/IAT indirection
    return xrefblk_t_first_from(/* forwarded args */);
}

