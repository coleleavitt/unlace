// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E110
// Name:            .netnode_delblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E110 jmp     cs:off_4E9870
//
// Resolved target: netnode_delblob
// Target address:  0x4EC290
// GOT/IAT slot:    0x4E9870
// Slot symbol:     off_4E9870
// Target type:     <no type info>
// ============================================================

void .netnode_delblob(/* see target signature */)
{
    // Tail-call to netnode_delblob via GOT/IAT indirection
    return netnode_delblob(/* forwarded args */);
}

