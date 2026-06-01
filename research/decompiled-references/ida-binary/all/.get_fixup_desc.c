// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1143E0
// Name:            .get_fixup_desc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1143E0 jmp     cs:get_fixup_desc_ptr
//
// Resolved target: get_fixup_desc
// Target address:  0x8D51C0
// GOT/IAT slot:    0x8A0E90
// Slot symbol:     get_fixup_desc_ptr
// Target type:     <no type info>
// ============================================================

void .get_fixup_desc(/* see target signature */)
{
    // Tail-call to get_fixup_desc via GOT/IAT indirection
    return get_fixup_desc(/* forwarded args */);
}

