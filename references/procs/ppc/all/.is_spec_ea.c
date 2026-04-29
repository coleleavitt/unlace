// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E60
// Name:            .is_spec_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E60 jmp     cs:off_95718
//
// Resolved target: is_spec_ea
// Target address:  0x96168
// GOT/IAT slot:    0x95718
// Slot symbol:     off_95718
// Target type:     <no type info>
// ============================================================

void .is_spec_ea(/* see target signature */)
{
    // Tail-call to is_spec_ea via GOT/IAT indirection
    return is_spec_ea(/* forwarded args */);
}

