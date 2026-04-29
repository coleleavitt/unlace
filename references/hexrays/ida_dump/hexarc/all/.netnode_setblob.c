// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A170
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A170 jmp     cs:off_4B98A0
//
// Resolved target: netnode_setblob
// Target address:  0x4BC2A0
// GOT/IAT slot:    0x4B98A0
// Slot symbol:     off_4B98A0
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

