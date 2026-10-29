// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD890
// Name:            .clr_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD890 jmp     cs:off_2C7C430
//
// Resolved target: clr_abits
// Target address:  0x3D0EE0
// GOT/IAT slot:    0x2C7C430
// Slot symbol:     off_2C7C430
// Target type:     <no type info>
// ============================================================

void .clr_abits(/* see target signature */)
{
    // Tail-call to clr_abits via GOT/IAT indirection
    return clr_abits(/* forwarded args */);
}

