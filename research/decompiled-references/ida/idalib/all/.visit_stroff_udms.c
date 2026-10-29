// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD720
// Name:            .visit_stroff_udms
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD720 jmp     cs:off_2C7C378
//
// Resolved target: visit_stroff_udms
// Target address:  0x3CB8D0
// GOT/IAT slot:    0x2C7C378
// Slot symbol:     off_2C7C378
// Target type:     <no type info>
// ============================================================

void .visit_stroff_udms(/* see target signature */)
{
    // Tail-call to visit_stroff_udms via GOT/IAT indirection
    return visit_stroff_udms(/* forwarded args */);
}

