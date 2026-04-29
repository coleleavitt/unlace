// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x199A0
// Name:            .update_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x199A0 jmp     cs:off_754B8
//
// Resolved target: update_func
// Target address:  0x75D10
// GOT/IAT slot:    0x754B8
// Slot symbol:     off_754B8
// Target type:     <no type info>
// ============================================================

void .update_func(/* see target signature */)
{
    // Tail-call to update_func via GOT/IAT indirection
    return update_func(/* forwarded args */);
}

