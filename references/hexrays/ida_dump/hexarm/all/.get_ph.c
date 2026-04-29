// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ED20
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ED20 jmp     cs:off_4E9E78
//
// Resolved target: get_ph
// Target address:  0x4EC8C8
// GOT/IAT slot:    0x4E9E78
// Slot symbol:     off_4E9E78
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

