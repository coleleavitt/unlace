// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCE0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCE0 jmp     cs:off_4DAE58
//
// Resolved target: get_ph
// Target address:  0x4DD888
// GOT/IAT slot:    0x4DAE58
// Slot symbol:     off_4DAE58
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

