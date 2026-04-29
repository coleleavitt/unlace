// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACC0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACC0 jmp     cs:off_4B9E48
//
// Resolved target: get_ph
// Target address:  0x4BC878
// GOT/IAT slot:    0x4B9E48
// Slot symbol:     off_4B9E48
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

