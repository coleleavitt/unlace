// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF60
// Name:            .is_spec_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF60 jmp     cs:off_4CDF98
//
// Resolved target: is_spec_ea
// Target address:  0x4D09E8
// GOT/IAT slot:    0x4CDF98
// Slot symbol:     off_4CDF98
// Target type:     <no type info>
// ============================================================

void .is_spec_ea(/* see target signature */)
{
    // Tail-call to is_spec_ea via GOT/IAT indirection
    return is_spec_ea(/* forwarded args */);
}

