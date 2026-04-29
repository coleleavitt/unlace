// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AFE0
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AFE0 jmp     cs:off_4BF7D8
//
// Resolved target: get_bytes
// Target address:  0x4C2CC8
// GOT/IAT slot:    0x4BF7D8
// Slot symbol:     off_4BF7D8
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

