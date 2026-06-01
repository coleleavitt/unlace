// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD7E0
// Name:            .remove_func_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD7E0 jmp     cs:off_2C7C3D8
//
// Resolved target: remove_func_tail
// Target address:  0x5CF0C0
// GOT/IAT slot:    0x2C7C3D8
// Slot symbol:     off_2C7C3D8
// Target type:     <no type info>
// ============================================================

void .remove_func_tail(/* see target signature */)
{
    // Tail-call to remove_func_tail via GOT/IAT indirection
    return remove_func_tail(/* forwarded args */);
}

