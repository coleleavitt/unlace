// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6150
// Name:            .remove_func_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6150 jmp     cs:off_2F090
//
// Resolved target: remove_func_tail
// Target address:  0x2F700
// GOT/IAT slot:    0x2F090
// Slot symbol:     off_2F090
// Target type:     <no type info>
// ============================================================

void .remove_func_tail(/* see target signature */)
{
    // Tail-call to remove_func_tail via GOT/IAT indirection
    return remove_func_tail(/* forwarded args */);
}

