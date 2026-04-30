// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112C30
// Name:            .get_xrefpos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112C30 jmp     cs:get_xrefpos_ptr
//
// Resolved target: get_xrefpos
// Target address:  0x8D4298
// GOT/IAT slot:    0x8A02B8
// Slot symbol:     get_xrefpos_ptr
// Target type:     <no type info>
// ============================================================

void .get_xrefpos(/* see target signature */)
{
    // Tail-call to get_xrefpos via GOT/IAT indirection
    return get_xrefpos(/* forwarded args */);
}

