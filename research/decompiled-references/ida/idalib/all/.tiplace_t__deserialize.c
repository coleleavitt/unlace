// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8F70
// Name:            .tiplace_t__deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8F70 jmp     cs:off_2C79FA0
//
// Resolved target: tiplace_t__deserialize
// Target address:  0x55BF40
// GOT/IAT slot:    0x2C79FA0
// Slot symbol:     off_2C79FA0
// Target type:     <no type info>
// ============================================================

void .tiplace_t__deserialize(/* see target signature */)
{
    // Tail-call to tiplace_t__deserialize via GOT/IAT indirection
    return tiplace_t__deserialize(/* forwarded args */);
}

