// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9880
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9880 jmp     cs:off_2E428
//
// Resolved target: get_ph
// Target address:  0x2EAB0
// GOT/IAT slot:    0x2E428
// Slot symbol:     off_2E428
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

