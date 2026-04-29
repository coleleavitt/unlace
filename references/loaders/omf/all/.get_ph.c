// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3570
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3570 jmp     cs:off_142A0
//
// Resolved target: get_ph
// Target address:  0x148B0
// GOT/IAT slot:    0x142A0
// Slot symbol:     off_142A0
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

