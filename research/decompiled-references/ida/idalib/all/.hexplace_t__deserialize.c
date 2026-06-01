// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7C40
// Name:            .hexplace_t__deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7C40 jmp     cs:off_2C79608
//
// Resolved target: hexplace_t__deserialize
// Target address:  0x424F20
// GOT/IAT slot:    0x2C79608
// Slot symbol:     off_2C79608
// Target type:     <no type info>
// ============================================================

void .hexplace_t__deserialize(/* see target signature */)
{
    // Tail-call to hexplace_t__deserialize via GOT/IAT indirection
    return hexplace_t__deserialize(/* forwarded args */);
}

