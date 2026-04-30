// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A2D0
// Name:            .get_tid_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A2D0 jmp     cs:get_tid_ordinal_ptr
//
// Resolved target: get_tid_ordinal
// Target address:  0x8D8DB0
// GOT/IAT slot:    0x8A3E08
// Slot symbol:     get_tid_ordinal_ptr
// Target type:     <no type info>
// ============================================================

void .get_tid_ordinal(/* see target signature */)
{
    // Tail-call to get_tid_ordinal via GOT/IAT indirection
    return get_tid_ordinal(/* forwarded args */);
}

