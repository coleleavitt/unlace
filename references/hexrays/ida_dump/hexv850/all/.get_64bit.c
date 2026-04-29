// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B590
// Name:            .get_64bit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B590 jmp     cs:off_4C0AB0
//
// Resolved target: get_64bit
// Target address:  0x4C3AA8
// GOT/IAT slot:    0x4C0AB0
// Slot symbol:     off_4C0AB0
// Target type:     <no type info>
// ============================================================

void .get_64bit(/* see target signature */)
{
    // Tail-call to get_64bit via GOT/IAT indirection
    return get_64bit(/* forwarded args */);
}

