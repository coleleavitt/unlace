// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7260
// Name:            .determine_rtl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7260 jmp     cs:off_2C79118
//
// Resolved target: determine_rtl
// Target address:  0x68E980
// GOT/IAT slot:    0x2C79118
// Slot symbol:     off_2C79118
// Target type:     <no type info>
// ============================================================

void .determine_rtl(/* see target signature */)
{
    // Tail-call to determine_rtl via GOT/IAT indirection
    return determine_rtl(/* forwarded args */);
}

