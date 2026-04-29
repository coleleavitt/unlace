// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E0
// Name:            .get_tinfo_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E0 jmp     cs:off_8058
//
// Resolved target: get_tinfo_tid
// Target address:  0x82B8
// GOT/IAT slot:    0x8058
// Slot symbol:     off_8058
// Target type:     <no type info>
// ============================================================

void .get_tinfo_tid(/* see target signature */)
{
    // Tail-call to get_tinfo_tid via GOT/IAT indirection
    return get_tinfo_tid(/* forwarded args */);
}

