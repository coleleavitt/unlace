// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x790C70
// Name:            code_highlight_block
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x790C70 jmp     code_highlight_block_0
//
// Resolved target: code_highlight_block_0
// Target address:  0x78FD40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__m128i *, __int64, __int64)
// ============================================================

/* see target sig */ code_highlight_block(/* see target signature */)
{
    // Tail-call to code_highlight_block_0 via direct jump indirection
    return code_highlight_block_0(/* forwarded args */);
}

