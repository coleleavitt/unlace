// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x86D0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x86D0 jmp     cs:off_2A350
//
// Resolved target: get_ph
// Target address:  0x2A8D8
// GOT/IAT slot:    0x2A350
// Slot symbol:     off_2A350
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

