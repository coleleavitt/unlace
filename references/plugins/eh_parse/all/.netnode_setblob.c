// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6590
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6590 jmp     cs:off_2F2B0
//
// Resolved target: netnode_setblob
// Target address:  0x2F920
// GOT/IAT slot:    0x2F2B0
// Slot symbol:     off_2F2B0
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

