// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1183C0
// Name:            .dirtree_findfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1183C0 jmp     cs:dirtree_findfirst_ptr
//
// Resolved target: dirtree_findfirst
// Target address:  0x8D7A60
// GOT/IAT slot:    0x8A2E80
// Slot symbol:     dirtree_findfirst_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_findfirst(/* see target signature */)
{
    // Tail-call to dirtree_findfirst via GOT/IAT indirection
    return dirtree_findfirst(/* forwarded args */);
}

