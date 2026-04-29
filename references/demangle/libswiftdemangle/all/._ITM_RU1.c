// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1A0
// Name:            ._ITM_RU1
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1A0 jmp     cs:off_480D0
//
// Resolved target: _ITM_RU1
// Target address:  0x48640
// GOT/IAT slot:    0x480D0
// Slot symbol:     off_480D0
// Target type:     <no type info>
// ============================================================

void ._ITM_RU1(/* see target signature */)
{
    // Tail-call to _ITM_RU1 via GOT/IAT indirection
    return _ITM_RU1(/* forwarded args */);
}

