// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB0F0
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB0F0 jmp     cs:off_2C7B060
//
// Resolved target: netnode_setblob
// Target address:  0x7BEF50
// GOT/IAT slot:    0x2C7B060
// Slot symbol:     off_2C7B060
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

