// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115090
// Name:            .set_func_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115090 jmp     cs:set_func_end_ptr
//
// Resolved target: set_func_end
// Target address:  0x8D5A20
// GOT/IAT slot:    0x8A14E8
// Slot symbol:     set_func_end_ptr
// Target type:     <no type info>
// ============================================================

void .set_func_end(/* see target signature */)
{
    // Tail-call to set_func_end via GOT/IAT indirection
    return set_func_end(/* forwarded args */);
}

