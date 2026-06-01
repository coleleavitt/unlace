// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112050
// Name:            .del_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112050 jmp     cs:del_func_ptr
//
// Resolved target: del_func
// Target address:  0x8D3AF8
// GOT/IAT slot:    0x89FCC8
// Slot symbol:     del_func_ptr
// Target type:     <no type info>
// ============================================================

void .del_func(/* see target signature */)
{
    // Tail-call to del_func via GOT/IAT indirection
    return del_func(/* forwarded args */);
}

