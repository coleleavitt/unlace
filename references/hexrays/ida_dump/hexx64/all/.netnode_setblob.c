// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C230
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C230 jmp     cs:off_4ED900
//
// Resolved target: netnode_setblob
// Target address:  0x4F1C20
// GOT/IAT slot:    0x4ED900
// Slot symbol:     off_4ED900
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

