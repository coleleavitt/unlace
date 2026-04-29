// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA650
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA650 jmp     cs:off_CA310
//
// Resolved target: get_bytes
// Target address:  0xD0C48
// GOT/IAT slot:    0xCA310
// Slot symbol:     off_CA310
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

