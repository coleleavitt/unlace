// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x98F0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x98F0 jmp     cs:off_2E460
//
// Resolved target: netnode_supset
// Target address:  0x2EAE8
// GOT/IAT slot:    0x2E460
// Slot symbol:     off_2E460
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

