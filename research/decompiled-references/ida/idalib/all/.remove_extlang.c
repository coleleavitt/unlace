// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABDD0
// Name:            .remove_extlang
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABDD0 jmp     cs:off_2C7B6D0
//
// Resolved target: remove_extlang
// Target address:  0x78A3E0
// GOT/IAT slot:    0x2C7B6D0
// Slot symbol:     off_2C7B6D0
// Target type:     <no type info>
// ============================================================

void .remove_extlang(/* see target signature */)
{
    // Tail-call to remove_extlang via GOT/IAT indirection
    return remove_extlang(/* forwarded args */);
}

