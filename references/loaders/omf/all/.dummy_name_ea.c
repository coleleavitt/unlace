// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3580
// Name:            .dummy_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3580 jmp     cs:off_142A8
//
// Resolved target: dummy_name_ea
// Target address:  0x148B8
// GOT/IAT slot:    0x142A8
// Slot symbol:     off_142A8
// Target type:     <no type info>
// ============================================================

void .dummy_name_ea(/* see target signature */)
{
    // Tail-call to dummy_name_ea via GOT/IAT indirection
    return dummy_name_ea(/* forwarded args */);
}

