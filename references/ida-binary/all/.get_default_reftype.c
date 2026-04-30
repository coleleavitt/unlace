// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A250
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A250 jmp     cs:get_default_reftype_ptr
//
// Resolved target: get_default_reftype
// Target address:  0x8D8D70
// GOT/IAT slot:    0x8A3DC8
// Slot symbol:     get_default_reftype_ptr
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

