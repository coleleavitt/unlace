// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B10
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B10 jmp     cs:off_95570
//
// Resolved target: netnode_check
// Target address:  0x95FB0
// GOT/IAT slot:    0x95570
// Slot symbol:     off_95570
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

