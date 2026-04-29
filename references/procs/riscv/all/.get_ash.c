// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA920
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA920 jmp     cs:off_35478
//
// Resolved target: get_ash
// Target address:  0x35AE0
// GOT/IAT slot:    0x35478
// Slot symbol:     off_35478
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

