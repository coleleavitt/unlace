// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19730
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19730 jmp     cs:off_75380
//
// Resolved target: netnode_setblob
// Target address:  0x75BD0
// GOT/IAT slot:    0x75380
// Slot symbol:     off_75380
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

