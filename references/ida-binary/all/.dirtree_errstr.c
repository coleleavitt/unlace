// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117F10
// Name:            .dirtree_errstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117F10 jmp     cs:dirtree_errstr_ptr
//
// Resolved target: dirtree_errstr
// Target address:  0x8D7788
// GOT/IAT slot:    0x8A2C28
// Slot symbol:     dirtree_errstr_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_errstr(/* see target signature */)
{
    // Tail-call to dirtree_errstr via GOT/IAT indirection
    return dirtree_errstr(/* forwarded args */);
}

