// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA260
// Name:            ._ZGTtdlPv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA260 jmp     cs:off_48130
//
// Resolved target: _ZGTtdlPv
// Target address:  0x48650
// GOT/IAT slot:    0x48130
// Slot symbol:     off_48130
// Target type:     <no type info>
// ============================================================

void ._ZGTtdlPv(/* see target signature */)
{
    // Tail-call to _ZGTtdlPv via GOT/IAT indirection
    return _ZGTtdlPv(/* forwarded args */);
}

