// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C250
// Name:            .dstr_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C250 jmp     cs:off_4C0110
//
// Resolved target: dstr_tinfo
// Target address:  0x4C3648
// GOT/IAT slot:    0x4C0110
// Slot symbol:     off_4C0110
// Target type:     <no type info>
// ============================================================

void .dstr_tinfo(/* see target signature */)
{
    // Tail-call to dstr_tinfo via GOT/IAT indirection
    return dstr_tinfo(/* forwarded args */);
}

