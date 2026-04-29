// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x292B0
// Name:            .set_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x292B0 jmp     cs:off_4B9140
//
// Resolved target: set_tinfo
// Target address:  0x4BBB10
// GOT/IAT slot:    0x4B9140
// Slot symbol:     off_4B9140
// Target type:     <no type info>
// ============================================================

void .set_tinfo(/* see target signature */)
{
    // Tail-call to set_tinfo via GOT/IAT indirection
    return set_tinfo(/* forwarded args */);
}

