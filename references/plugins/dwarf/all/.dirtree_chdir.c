// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA240
// Name:            .dirtree_chdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA240 jmp     cs:off_CA108
//
// Resolved target: dirtree_chdir
// Target address:  0xD0A38
// GOT/IAT slot:    0xCA108
// Slot symbol:     off_CA108
// Target type:     <no type info>
// ============================================================

void .dirtree_chdir(/* see target signature */)
{
    // Tail-call to dirtree_chdir via GOT/IAT indirection
    return dirtree_chdir(/* forwarded args */);
}

