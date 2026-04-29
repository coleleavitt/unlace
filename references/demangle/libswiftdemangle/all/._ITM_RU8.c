// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA370
// Name:            ._ITM_RU8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA370 jmp     cs:off_481B8
//
// Resolved target: _ITM_RU8
// Target address:  0x48660
// GOT/IAT slot:    0x481B8
// Slot symbol:     off_481B8
// Target type:     <no type info>
// ============================================================

void ._ITM_RU8(/* see target signature */)
{
    // Tail-call to _ITM_RU8 via GOT/IAT indirection
    return _ITM_RU8(/* forwarded args */);
}

