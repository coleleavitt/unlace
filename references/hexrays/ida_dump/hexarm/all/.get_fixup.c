// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E020
// Name:            .get_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E020 jmp     cs:off_4E97F8
//
// Resolved target: get_fixup
// Target address:  0x4EC210
// GOT/IAT slot:    0x4E97F8
// Slot symbol:     off_4E97F8
// Target type:     <no type info>
// ============================================================

void .get_fixup(/* see target signature */)
{
    // Tail-call to get_fixup via GOT/IAT indirection
    return get_fixup(/* forwarded args */);
}

