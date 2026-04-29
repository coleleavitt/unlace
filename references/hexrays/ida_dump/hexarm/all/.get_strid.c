// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DD70
// Name:            .get_strid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DD70 jmp     cs:off_4E96A0
//
// Resolved target: get_strid
// Target address:  0x4EC0B8
// GOT/IAT slot:    0x4E96A0
// Slot symbol:     off_4E96A0
// Target type:     <no type info>
// ============================================================

void .get_strid(/* see target signature */)
{
    // Tail-call to get_strid via GOT/IAT indirection
    return get_strid(/* forwarded args */);
}

