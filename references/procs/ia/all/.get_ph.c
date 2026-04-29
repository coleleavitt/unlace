// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7370
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7370 jmp     cs:off_261A0
//
// Resolved target: get_ph
// Target address:  0x26470
// GOT/IAT slot:    0x261A0
// Slot symbol:     off_261A0
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

