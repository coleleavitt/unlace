// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF30
// Name:            .get_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF30 jmp     cs:off_4DAF80
//
// Resolved target: get_tinfo
// Target address:  0x4DD9B0
// GOT/IAT slot:    0x4DAF80
// Slot symbol:     off_4DAF80
// Target type:     <no type info>
// ============================================================

void .get_tinfo(/* see target signature */)
{
    // Tail-call to get_tinfo via GOT/IAT indirection
    return get_tinfo(/* forwarded args */);
}

