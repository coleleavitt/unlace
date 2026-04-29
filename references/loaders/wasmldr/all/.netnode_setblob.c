// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2160
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2160 jmp     cs:off_15098
//
// Resolved target: netnode_setblob
// Target address:  0x15288
// GOT/IAT slot:    0x15098
// Slot symbol:     off_15098
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

