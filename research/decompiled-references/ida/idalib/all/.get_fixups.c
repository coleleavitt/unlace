// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8D40
// Name:            .get_fixups
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8D40 jmp     cs:off_2C79E88
//
// Resolved target: get_fixups
// Target address:  0x41D390
// GOT/IAT slot:    0x2C79E88
// Slot symbol:     off_2C79E88
// Target type:     <no type info>
// ============================================================

void .get_fixups(/* see target signature */)
{
    // Tail-call to get_fixups via GOT/IAT indirection
    return get_fixups(/* forwarded args */);
}

