// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115FC0
// Name:            .get_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115FC0 jmp     cs:get_fixup_ptr
//
// Resolved target: get_fixup
// Target address:  0x8D63B8
// GOT/IAT slot:    0x8A1C80
// Slot symbol:     get_fixup_ptr
// Target type:     <no type info>
// ============================================================

void .get_fixup(/* see target signature */)
{
    // Tail-call to get_fixup via GOT/IAT indirection
    return get_fixup(/* forwarded args */);
}

