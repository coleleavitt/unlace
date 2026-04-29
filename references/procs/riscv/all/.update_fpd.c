// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA940
// Name:            .update_fpd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA940 jmp     cs:off_35488
//
// Resolved target: update_fpd
// Target address:  0x35AF0
// GOT/IAT slot:    0x35488
// Slot symbol:     off_35488
// Target type:     <no type info>
// ============================================================

void .update_fpd(/* see target signature */)
{
    // Tail-call to update_fpd via GOT/IAT indirection
    return update_fpd(/* forwarded args */);
}

