// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB5A0
// Name:            .dirtree_getcwd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB5A0 jmp     cs:off_2C7B2B8
//
// Resolved target: dirtree_getcwd
// Target address:  0x779E20
// GOT/IAT slot:    0x2C7B2B8
// Slot symbol:     off_2C7B2B8
// Target type:     <no type info>
// ============================================================

void .dirtree_getcwd(/* see target signature */)
{
    // Tail-call to dirtree_getcwd via GOT/IAT indirection
    return dirtree_getcwd(/* forwarded args */);
}

