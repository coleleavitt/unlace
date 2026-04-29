// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6680
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6680 jmp     cs:off_8D328
//
// Resolved target: get_ash
// Target address:  0x8D8E8
// GOT/IAT slot:    0x8D328
// Slot symbol:     off_8D328
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

