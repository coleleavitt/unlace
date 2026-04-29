// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170 jmp     cs:off_50A0
//
// Resolved target: netnode_check
// Target address:  0x51E0
// GOT/IAT slot:    0x50A0
// Slot symbol:     off_50A0
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

