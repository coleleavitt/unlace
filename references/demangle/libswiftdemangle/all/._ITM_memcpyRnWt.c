// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA470
// Name:            ._ITM_memcpyRnWt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA470 jmp     cs:off_48238
//
// Resolved target: _ITM_memcpyRnWt
// Target address:  0x48668
// GOT/IAT slot:    0x48238
// Slot symbol:     off_48238
// Target type:     <no type info>
// ============================================================

void ._ITM_memcpyRnWt(/* see target signature */)
{
    // Tail-call to _ITM_memcpyRnWt via GOT/IAT indirection
    return _ITM_memcpyRnWt(/* forwarded args */);
}

