// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B2C0
// Name:            .set_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B2C0 jmp     cs:off_4ED148
//
// Resolved target: set_tinfo
// Target address:  0x4F1440
// GOT/IAT slot:    0x4ED148
// Slot symbol:     off_4ED148
// Target type:     <no type info>
// ============================================================

void .set_tinfo(/* see target signature */)
{
    // Tail-call to set_tinfo via GOT/IAT indirection
    return set_tinfo(/* forwarded args */);
}

