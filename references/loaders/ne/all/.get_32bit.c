// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2490
// Name:            .get_32bit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2490 jmp     cs:off_B230
//
// Resolved target: get_32bit
// Target address:  0xB4E0
// GOT/IAT slot:    0xB230
// Slot symbol:     off_B230
// Target type:     <no type info>
// ============================================================

void .get_32bit(/* see target signature */)
{
    // Tail-call to get_32bit via GOT/IAT indirection
    return get_32bit(/* forwarded args */);
}

