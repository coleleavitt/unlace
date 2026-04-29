// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8470
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8470 jmp     cs:off_2A220
//
// Resolved target: get_bytes
// Target address:  0x2BC30
// GOT/IAT slot:    0x2A220
// Slot symbol:     off_2A220
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

