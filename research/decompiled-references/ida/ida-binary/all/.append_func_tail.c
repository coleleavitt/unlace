// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113250
// Name:            .append_func_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113250 jmp     cs:append_func_tail_ptr
//
// Resolved target: append_func_tail
// Target address:  0x8D46A0
// GOT/IAT slot:    0x8A05C8
// Slot symbol:     append_func_tail_ptr
// Target type:     <no type info>
// ============================================================

void .append_func_tail(/* see target signature */)
{
    // Tail-call to append_func_tail via GOT/IAT indirection
    return append_func_tail(/* forwarded args */);
}

