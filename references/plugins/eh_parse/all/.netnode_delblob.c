// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6520
// Name:            .netnode_delblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6520 jmp     cs:off_2F278
//
// Resolved target: netnode_delblob
// Target address:  0x2F8E8
// GOT/IAT slot:    0x2F278
// Slot symbol:     off_2F278
// Target type:     <no type info>
// ============================================================

void .netnode_delblob(/* see target signature */)
{
    // Tail-call to netnode_delblob via GOT/IAT indirection
    return netnode_delblob(/* forwarded args */);
}

