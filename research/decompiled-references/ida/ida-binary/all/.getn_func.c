// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A900
// Name:            .getn_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A900 jmp     cs:getn_func_ptr
//
// Resolved target: getn_func
// Target address:  0x8D91F0
// GOT/IAT slot:    0x8A4120
// Slot symbol:     getn_func_ptr
// Target type:     <no type info>
// ============================================================

void .getn_func(/* see target signature */)
{
    // Tail-call to getn_func via GOT/IAT indirection
    return getn_func(/* forwarded args */);
}

