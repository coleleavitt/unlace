// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x207B0
// Name:            .get_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x207B0 jmp     cs:off_953C0
//
// Resolved target: get_fixup
// Target address:  0x95DF8
// GOT/IAT slot:    0x953C0
// Slot symbol:     off_953C0
// Target type:     <no type info>
// ============================================================

void .get_fixup(/* see target signature */)
{
    // Tail-call to get_fixup via GOT/IAT indirection
    return get_fixup(/* forwarded args */);
}

