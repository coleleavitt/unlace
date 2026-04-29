// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2230
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2230 jmp     cs:off_8100
//
// Resolved target: netnode_check
// Target address:  0x87E8
// GOT/IAT slot:    0x8100
// Slot symbol:     off_8100
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

