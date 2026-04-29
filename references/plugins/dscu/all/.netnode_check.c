// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4360
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4360 jmp     cs:off_1F198
//
// Resolved target: netnode_check
// Target address:  0x1F450
// GOT/IAT slot:    0x1F198
// Slot symbol:     off_1F198
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

