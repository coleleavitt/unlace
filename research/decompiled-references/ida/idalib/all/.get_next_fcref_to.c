// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7190
// Name:            .get_next_fcref_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7190 jmp     cs:off_2C790B0
//
// Resolved target: get_next_fcref_to
// Target address:  0x3E2FB0
// GOT/IAT slot:    0x2C790B0
// Slot symbol:     off_2C790B0
// Target type:     <no type info>
// ============================================================

void .get_next_fcref_to(/* see target signature */)
{
    // Tail-call to get_next_fcref_to via GOT/IAT indirection
    return get_next_fcref_to(/* forwarded args */);
}

