// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111F40
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111F40 jmp     cs:clear_tinfo_t_ptr
//
// Resolved target: clear_tinfo_t
// Target address:  0x8D3A48
// GOT/IAT slot:    0x89FC40
// Slot symbol:     clear_tinfo_t_ptr
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}

