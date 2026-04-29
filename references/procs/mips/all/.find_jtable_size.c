// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x196A0
// Name:            .find_jtable_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x196A0 jmp     cs:off_75338
//
// Resolved target: find_jtable_size
// Target address:  0x75B88
// GOT/IAT slot:    0x75338
// Slot symbol:     off_75338
// Target type:     <no type info>
// ============================================================

void .find_jtable_size(/* see target signature */)
{
    // Tail-call to find_jtable_size via GOT/IAT indirection
    return find_jtable_size(/* forwarded args */);
}

