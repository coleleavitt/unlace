// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6300
// Name:            .get_strid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6300 jmp     cs:off_8D168
//
// Resolved target: get_strid
// Target address:  0x8D700
// GOT/IAT slot:    0x8D168
// Slot symbol:     off_8D168
// Target type:     <no type info>
// ============================================================

void .get_strid(/* see target signature */)
{
    // Tail-call to get_strid via GOT/IAT indirection
    return get_strid(/* forwarded args */);
}

