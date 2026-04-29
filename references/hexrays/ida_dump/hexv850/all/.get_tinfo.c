// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF40
// Name:            .get_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF40 jmp     cs:off_4C0F88
//
// Resolved target: get_tinfo
// Target address:  0x4C3FB0
// GOT/IAT slot:    0x4C0F88
// Slot symbol:     off_4C0F88
// Target type:     <no type info>
// ============================================================

void .get_tinfo(/* see target signature */)
{
    // Tail-call to get_tinfo via GOT/IAT indirection
    return get_tinfo(/* forwarded args */);
}

