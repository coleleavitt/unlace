// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B7C0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B7C0 jmp     cs:off_4CDBC8
//
// Resolved target: netnode_check
// Target address:  0x4D05F8
// GOT/IAT slot:    0x4CDBC8
// Slot symbol:     off_4CDBC8
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

