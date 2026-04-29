// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6640
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6640 jmp     cs:off_8D308
//
// Resolved target: get_ph
// Target address:  0x8D8C8
// GOT/IAT slot:    0x8D308
// Slot symbol:     off_8D308
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

