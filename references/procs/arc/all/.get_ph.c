// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x87F0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x87F0 jmp     cs:off_2A3E0
//
// Resolved target: get_ph
// Target address:  0x2BE08
// GOT/IAT slot:    0x2A3E0
// Slot symbol:     off_2A3E0
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

