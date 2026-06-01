// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC6A0
// Name:            .hexplace_t__serialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC6A0 jmp     cs:off_2C7BB38
//
// Resolved target: hexplace_t__serialize
// Target address:  0x424DF0
// GOT/IAT slot:    0x2C7BB38
// Slot symbol:     off_2C7BB38
// Target type:     <no type info>
// ============================================================

void .hexplace_t__serialize(/* see target signature */)
{
    // Tail-call to hexplace_t__serialize via GOT/IAT indirection
    return hexplace_t__serialize(/* forwarded args */);
}

