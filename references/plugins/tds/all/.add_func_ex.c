// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2270
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2270 jmp     cs:off_A120
//
// Resolved target: add_func_ex
// Target address:  0xA350
// GOT/IAT slot:    0xA120
// Slot symbol:     off_A120
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

