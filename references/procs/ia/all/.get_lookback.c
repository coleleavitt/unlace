// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x70C0
// Name:            .get_lookback
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x70C0 jmp     cs:off_26048
//
// Resolved target: get_lookback
// Target address:  0x26300
// GOT/IAT slot:    0x26048
// Slot symbol:     off_26048
// Target type:     <no type info>
// ============================================================

void .get_lookback(/* see target signature */)
{
    // Tail-call to get_lookback via GOT/IAT indirection
    return get_lookback(/* forwarded args */);
}

