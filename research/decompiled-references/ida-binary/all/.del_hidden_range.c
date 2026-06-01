// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115940
// Name:            .del_hidden_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115940 jmp     cs:del_hidden_range_ptr
//
// Resolved target: del_hidden_range
// Target address:  0x8D5F88
// GOT/IAT slot:    0x8A1940
// Slot symbol:     del_hidden_range_ptr
// Target type:     <no type info>
// ============================================================

void .del_hidden_range(/* see target signature */)
{
    // Tail-call to del_hidden_range via GOT/IAT indirection
    return del_hidden_range(/* forwarded args */);
}

