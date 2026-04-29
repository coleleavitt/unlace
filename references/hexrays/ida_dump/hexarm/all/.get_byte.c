// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F0C0
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F0C0 jmp     cs:off_4EA048
//
// Resolved target: get_byte
// Target address:  0x4ECA98
// GOT/IAT slot:    0x4EA048
// Slot symbol:     off_4EA048
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

