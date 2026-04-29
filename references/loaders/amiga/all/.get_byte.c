// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1220
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1220 jmp     cs:off_50F8
//
// Resolved target: get_byte
// Target address:  0x5238
// GOT/IAT slot:    0x50F8
// Slot symbol:     off_50F8
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

