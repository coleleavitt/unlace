// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3640
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3640 jmp     cs:off_20308
//
// Resolved target: get_byte
// Target address:  0x21C40
// GOT/IAT slot:    0x20308
// Slot symbol:     off_20308
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

