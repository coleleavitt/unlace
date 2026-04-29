// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3590
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3590 jmp     cs:off_202B0
//
// Resolved target: get_ph
// Target address:  0x21BE8
// GOT/IAT slot:    0x202B0
// Slot symbol:     off_202B0
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

