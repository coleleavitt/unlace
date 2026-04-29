// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F170
// Name:            .equal_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F170 jmp     cs:off_4EA0A0
//
// Resolved target: equal_bytes
// Target address:  0x4ECAF8
// GOT/IAT slot:    0x4EA0A0
// Slot symbol:     off_4EA0A0
// Target type:     <no type info>
// ============================================================

void .equal_bytes(/* see target signature */)
{
    // Tail-call to equal_bytes via GOT/IAT indirection
    return equal_bytes(/* forwarded args */);
}

