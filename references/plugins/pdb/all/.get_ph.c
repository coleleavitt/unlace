// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DA40
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DA40 jmp     cs:off_B3508
//
// Resolved target: get_ph
// Target address:  0xB3CD0
// GOT/IAT slot:    0xB3508
// Slot symbol:     off_B3508
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

