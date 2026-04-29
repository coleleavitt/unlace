// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2170
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2170 jmp     cs:off_80A0
//
// Resolved target: clear_tinfo_t
// Target address:  0x8300
// GOT/IAT slot:    0x80A0
// Slot symbol:     off_80A0
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}

