// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116620
// Name:            .is_in_nlist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116620 jmp     cs:is_in_nlist_ptr
//
// Resolved target: is_in_nlist
// Target address:  0x8D67A0
// GOT/IAT slot:    0x8A1FB0
// Slot symbol:     is_in_nlist_ptr
// Target type:     <no type info>
// ============================================================

void .is_in_nlist(/* see target signature */)
{
    // Tail-call to is_in_nlist via GOT/IAT indirection
    return is_in_nlist(/* forwarded args */);
}

