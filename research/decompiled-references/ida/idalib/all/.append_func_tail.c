// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8680
// Name:            .append_func_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8680 jmp     cs:off_2C79B28
//
// Resolved target: append_func_tail
// Target address:  0x5CF7D0
// GOT/IAT slot:    0x2C79B28
// Slot symbol:     off_2C79B28
// Target type:     <no type info>
// ============================================================

void .append_func_tail(/* see target signature */)
{
    // Tail-call to append_func_tail via GOT/IAT indirection
    return append_func_tail(/* forwarded args */);
}

