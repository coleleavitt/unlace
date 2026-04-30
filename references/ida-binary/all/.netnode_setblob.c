// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1178A0
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1178A0 jmp     cs:netnode_setblob_ptr
//
// Resolved target: netnode_setblob
// Target address:  0x8D7368
// GOT/IAT slot:    0x8A28F0
// Slot symbol:     netnode_setblob_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

