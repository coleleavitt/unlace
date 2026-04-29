// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4860
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4860 jmp     cs:off_28418
//
// Resolved target: get_byte
// Target address:  0x29DD0
// GOT/IAT slot:    0x28418
// Slot symbol:     off_28418
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

