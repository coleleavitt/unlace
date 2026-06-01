// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117410
// Name:            .get_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117410 jmp     cs:get_tinfo_ptr
//
// Resolved target: get_tinfo
// Target address:  0x8D7090
// GOT/IAT slot:    0x8A26A8
// Slot symbol:     get_tinfo_ptr
// Target type:     <no type info>
// ============================================================

void .get_tinfo(/* see target signature */)
{
    // Tail-call to get_tinfo via GOT/IAT indirection
    return get_tinfo(/* forwarded args */);
}

