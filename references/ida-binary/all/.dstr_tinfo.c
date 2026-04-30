// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A320
// Name:            .dstr_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A320 jmp     cs:dstr_tinfo_ptr
//
// Resolved target: dstr_tinfo
// Target address:  0x8D8DE0
// GOT/IAT slot:    0x8A3E30
// Slot symbol:     dstr_tinfo_ptr
// Target type:     <no type info>
// ============================================================

void .dstr_tinfo(/* see target signature */)
{
    // Tail-call to dstr_tinfo via GOT/IAT indirection
    return dstr_tinfo(/* forwarded args */);
}

