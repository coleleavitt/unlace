// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6430
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6430 jmp     cs:off_2D200
//
// Resolved target: netnode_setblob
// Target address:  0x2D700
// GOT/IAT slot:    0x2D200
// Slot symbol:     off_2D200
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

