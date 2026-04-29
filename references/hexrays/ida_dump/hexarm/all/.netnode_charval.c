// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E300
// Name:            .netnode_charval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E300 jmp     cs:off_4E9968
//
// Resolved target: netnode_charval
// Target address:  0x4EC388
// GOT/IAT slot:    0x4E9968
// Slot symbol:     off_4E9968
// Target type:     <no type info>
// ============================================================

void .netnode_charval(/* see target signature */)
{
    // Tail-call to netnode_charval via GOT/IAT indirection
    return netnode_charval(/* forwarded args */);
}

