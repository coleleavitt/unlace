// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46C0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46C0 jmp     cs:off_23348
//
// Resolved target: get_ph
// Target address:  0x23780
// GOT/IAT slot:    0x23348
// Slot symbol:     off_23348
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

