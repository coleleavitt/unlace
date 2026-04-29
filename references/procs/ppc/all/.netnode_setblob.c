// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20880
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20880 jmp     cs:off_95428
//
// Resolved target: netnode_setblob
// Target address:  0x95E60
// GOT/IAT slot:    0x95428
// Slot symbol:     off_95428
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

