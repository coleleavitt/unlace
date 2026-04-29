// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCF0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCF0 jmp     cs:off_4CDE60
//
// Resolved target: get_ph
// Target address:  0x4D08B0
// GOT/IAT slot:    0x4CDE60
// Slot symbol:     off_4CDE60
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

