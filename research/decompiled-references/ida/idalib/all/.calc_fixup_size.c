// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7880
// Name:            .calc_fixup_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7880 jmp     cs:off_2C79428
//
// Resolved target: calc_fixup_size
// Target address:  0x41D140
// GOT/IAT slot:    0x2C79428
// Slot symbol:     off_2C79428
// Target type:     <no type info>
// ============================================================

void .calc_fixup_size(/* see target signature */)
{
    // Tail-call to calc_fixup_size via GOT/IAT indirection
    return calc_fixup_size(/* forwarded args */);
}

