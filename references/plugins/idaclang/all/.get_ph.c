// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3480
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3480 jmp     cs:off_29228
//
// Resolved target: get_ph
// Target address:  0x295F0
// GOT/IAT slot:    0x29228
// Slot symbol:     off_29228
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

