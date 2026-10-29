// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAE20
// Name:            .get_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAE20 jmp     cs:off_2C7AEF8
//
// Resolved target: get_tinfo
// Target address:  0x694B90
// GOT/IAT slot:    0x2C7AEF8
// Slot symbol:     off_2C7AEF8
// Target type:     <no type info>
// ============================================================

void .get_tinfo(/* see target signature */)
{
    // Tail-call to get_tinfo via GOT/IAT indirection
    return get_tinfo(/* forwarded args */);
}

