// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB640
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB640 jmp     cs:off_2C7B308
//
// Resolved target: get_ph
// Target address:  0x3FB8B0
// GOT/IAT slot:    0x2C7B308
// Slot symbol:     off_2C7B308
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

