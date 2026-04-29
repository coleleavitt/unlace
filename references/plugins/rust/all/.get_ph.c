// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2320
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2320 jmp     cs:off_A178
//
// Resolved target: get_ph
// Target address:  0xB460
// GOT/IAT slot:    0xA178
// Slot symbol:     off_A178
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

