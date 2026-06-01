// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0E0
// Name:            .get_tinfo_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0E0 jmp     cs:get_tinfo_tid_ptr
//
// Resolved target: get_tinfo_tid
// Target address:  0x8D8CB8
// GOT/IAT slot:    0x8A3D10
// Slot symbol:     get_tinfo_tid_ptr
// Target type:     <no type info>
// ============================================================

void .get_tinfo_tid(/* see target signature */)
{
    // Tail-call to get_tinfo_tid via GOT/IAT indirection
    return get_tinfo_tid(/* forwarded args */);
}

