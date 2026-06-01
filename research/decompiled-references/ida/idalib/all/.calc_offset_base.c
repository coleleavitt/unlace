// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB760
// Name:            .calc_offset_base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB760 jmp     cs:off_2C7B398
//
// Resolved target: calc_offset_base
// Target address:  0x4E3330
// GOT/IAT slot:    0x2C7B398
// Slot symbol:     off_2C7B398
// Target type:     <no type info>
// ============================================================

void .calc_offset_base(/* see target signature */)
{
    // Tail-call to calc_offset_base via GOT/IAT indirection
    return calc_offset_base(/* forwarded args */);
}

