// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A790
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A790 jmp     cs:off_4B9BB0
//
// Resolved target: netnode_check
// Target address:  0x4BC5C0
// GOT/IAT slot:    0x4B9BB0
// Slot symbol:     off_4B9BB0
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

