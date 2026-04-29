// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0 jmp     cs:off_50B8
//
// Resolved target: add_func_ex
// Target address:  0x5258
// GOT/IAT slot:    0x50B8
// Slot symbol:     off_50B8
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

