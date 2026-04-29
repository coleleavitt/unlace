// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A2B0
// Name:            .set_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A2B0 jmp     cs:off_4DA140
//
// Resolved target: set_tinfo
// Target address:  0x4DCB10
// GOT/IAT slot:    0x4DA140
// Slot symbol:     off_4DA140
// Target type:     <no type info>
// ============================================================

void .set_tinfo(/* see target signature */)
{
    // Tail-call to set_tinfo via GOT/IAT indirection
    return set_tinfo(/* forwarded args */);
}

