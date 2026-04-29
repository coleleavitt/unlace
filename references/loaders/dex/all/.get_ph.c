// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3670
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3670 jmp     cs:off_28320
//
// Resolved target: get_ph
// Target address:  0x287E8
// GOT/IAT slot:    0x28320
// Slot symbol:     off_28320
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

