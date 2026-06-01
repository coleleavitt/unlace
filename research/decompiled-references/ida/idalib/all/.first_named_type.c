// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A88F0
// Name:            .first_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A88F0 jmp     cs:off_2C79C60
//
// Resolved target: first_named_type
// Target address:  0x64D760
// GOT/IAT slot:    0x2C79C60
// Slot symbol:     off_2C79C60
// Target type:     <no type info>
// ============================================================

void .first_named_type(/* see target signature */)
{
    // Tail-call to first_named_type via GOT/IAT indirection
    return first_named_type(/* forwarded args */);
}

