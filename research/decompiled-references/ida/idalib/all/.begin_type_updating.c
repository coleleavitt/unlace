// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC120
// Name:            .begin_type_updating
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC120 jmp     cs:off_2C7B878
//
// Resolved target: begin_type_updating
// Target address:  0x60CC40
// GOT/IAT slot:    0x2C7B878
// Slot symbol:     off_2C7B878
// Target type:     <no type info>
// ============================================================

void .begin_type_updating(/* see target signature */)
{
    // Tail-call to begin_type_updating via GOT/IAT indirection
    return begin_type_updating(/* forwarded args */);
}

