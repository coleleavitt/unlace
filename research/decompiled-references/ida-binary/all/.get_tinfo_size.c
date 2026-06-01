// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1136D0
// Name:            .get_tinfo_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1136D0 jmp     cs:get_tinfo_size_ptr
//
// Resolved target: get_tinfo_size
// Target address:  0x8D4978
// GOT/IAT slot:    0x8A0808
// Slot symbol:     get_tinfo_size_ptr
// Target type:     <no type info>
// ============================================================

void .get_tinfo_size(/* see target signature */)
{
    // Tail-call to get_tinfo_size via GOT/IAT indirection
    return get_tinfo_size(/* forwarded args */);
}

