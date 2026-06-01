// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9C60
// Name:            .dirtree_chdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9C60 jmp     cs:off_2C7A618
//
// Resolved target: dirtree_chdir
// Target address:  0x779DB0
// GOT/IAT slot:    0x2C7A618
// Slot symbol:     off_2C7A618
// Target type:     <no type info>
// ============================================================

void .dirtree_chdir(/* see target signature */)
{
    // Tail-call to dirtree_chdir via GOT/IAT indirection
    return dirtree_chdir(/* forwarded args */);
}

