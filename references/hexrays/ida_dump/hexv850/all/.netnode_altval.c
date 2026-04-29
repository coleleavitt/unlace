// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADE0
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADE0 jmp     cs:off_4C06D8
//
// Resolved target: netnode_altval
// Target address:  0x4C36C8
// GOT/IAT slot:    0x4C06D8
// Slot symbol:     off_4C06D8
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

