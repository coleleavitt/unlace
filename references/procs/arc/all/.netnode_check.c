// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8650
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8650 jmp     cs:off_2A310
//
// Resolved target: netnode_check
// Target address:  0x2BD28
// GOT/IAT slot:    0x2A310
// Slot symbol:     off_2A310
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

