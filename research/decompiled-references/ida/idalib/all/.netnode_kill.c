// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AABC0
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AABC0 jmp     cs:off_2C7ADC8
//
// Resolved target: netnode_kill
// Target address:  0x7BF110
// GOT/IAT slot:    0x2C7ADC8
// Slot symbol:     off_2C7ADC8
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}

