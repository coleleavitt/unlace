// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9A50
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9A50 jmp     cs:off_89510
//
// Resolved target: get_byte
// Target address:  0x8C840
// GOT/IAT slot:    0x89510
// Slot symbol:     off_89510
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

