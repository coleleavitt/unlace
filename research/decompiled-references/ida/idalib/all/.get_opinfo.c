// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD090
// Name:            .get_opinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD090 jmp     cs:off_2C7C030
//
// Resolved target: get_opinfo
// Target address:  0x3C9620
// GOT/IAT slot:    0x2C7C030
// Slot symbol:     off_2C7C030
// Target type:     <no type info>
// ============================================================

void .get_opinfo(/* see target signature */)
{
    // Tail-call to get_opinfo via GOT/IAT indirection
    return get_opinfo(/* forwarded args */);
}

