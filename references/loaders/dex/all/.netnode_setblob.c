// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3420
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3420 jmp     cs:off_281F8
//
// Resolved target: netnode_setblob
// Target address:  0x286A8
// GOT/IAT slot:    0x281F8
// Slot symbol:     off_281F8
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

