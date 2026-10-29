// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116FE0
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116FE0 jmp     cs:add_func_ex_ptr
//
// Resolved target: add_func_ex
// Target address:  0x8D6DB8
// GOT/IAT slot:    0x8A2490
// Slot symbol:     add_func_ex_ptr
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

