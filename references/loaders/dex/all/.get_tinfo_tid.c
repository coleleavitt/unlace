// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3160
// Name:            .get_tinfo_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3160 jmp     cs:off_28098
//
// Resolved target: get_tinfo_tid
// Target address:  0x28548
// GOT/IAT slot:    0x28098
// Slot symbol:     off_28098
// Target type:     <no type info>
// ============================================================

void .get_tinfo_tid(/* see target signature */)
{
    // Tail-call to get_tinfo_tid via GOT/IAT indirection
    return get_tinfo_tid(/* forwarded args */);
}

