// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C1A0
// Name:            .netnode_delblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C1A0 jmp     cs:off_4ED8B8
//
// Resolved target: netnode_delblob
// Target address:  0x4F1BD8
// GOT/IAT slot:    0x4ED8B8
// Slot symbol:     off_4ED8B8
// Target type:     <no type info>
// ============================================================

void .netnode_delblob(/* see target signature */)
{
    // Tail-call to netnode_delblob via GOT/IAT indirection
    return netnode_delblob(/* forwarded args */);
}

