// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C260
// Name:            .dstr_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C260 jmp     cs:off_4CE118
//
// Resolved target: dstr_tinfo
// Target address:  0x4D0B78
// GOT/IAT slot:    0x4CE118
// Slot symbol:     off_4CE118
// Target type:     <no type info>
// ============================================================

void .dstr_tinfo(/* see target signature */)
{
    // Tail-call to dstr_tinfo via GOT/IAT indirection
    return dstr_tinfo(/* forwarded args */);
}

