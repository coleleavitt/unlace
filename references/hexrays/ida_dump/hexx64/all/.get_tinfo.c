// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D080
// Name:            .get_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D080 jmp     cs:off_4EE028
//
// Resolved target: get_tinfo
// Target address:  0x4F2378
// GOT/IAT slot:    0x4EE028
// Slot symbol:     off_4EE028
// Target type:     <no type info>
// ============================================================

void .get_tinfo(/* see target signature */)
{
    // Tail-call to get_tinfo via GOT/IAT indirection
    return get_tinfo(/* forwarded args */);
}

