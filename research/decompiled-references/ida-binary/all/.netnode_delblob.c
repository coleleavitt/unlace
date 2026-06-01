// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AD10
// Name:            .netnode_delblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AD10 jmp     cs:netnode_delblob_ptr
//
// Resolved target: netnode_delblob
// Target address:  0x8D9468
// GOT/IAT slot:    0x8A4328
// Slot symbol:     netnode_delblob_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_delblob(/* see target signature */)
{
    // Tail-call to netnode_delblob via GOT/IAT indirection
    return netnode_delblob(/* forwarded args */);
}

