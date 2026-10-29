// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112D10
// Name:            .set_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112D10 jmp     cs:set_tinfo_ptr
//
// Resolved target: set_tinfo
// Target address:  0x8D4340
// GOT/IAT slot:    0x8A0328
// Slot symbol:     set_tinfo_ptr
// Target type:     <no type info>
// ============================================================

void .set_tinfo(/* see target signature */)
{
    // Tail-call to set_tinfo via GOT/IAT indirection
    return set_tinfo(/* forwarded args */);
}

