// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA040
// Name:            ._ITM_memcpyRtWn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA040 jmp     cs:off_48020
//
// Resolved target: _ITM_memcpyRtWn
// Target address:  0x48630
// GOT/IAT slot:    0x48020
// Slot symbol:     off_48020
// Target type:     <no type info>
// ============================================================

void ._ITM_memcpyRtWn(/* see target signature */)
{
    // Tail-call to _ITM_memcpyRtWn via GOT/IAT indirection
    return _ITM_memcpyRtWn(/* forwarded args */);
}

