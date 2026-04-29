// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B180
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B180 jmp     cs:off_4BF8A8
//
// Resolved target: netnode_setblob
// Target address:  0x4C2DA0
// GOT/IAT slot:    0x4BF8A8
// Slot symbol:     off_4BF8A8
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

