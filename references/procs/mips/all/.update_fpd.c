// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C30
// Name:            .update_fpd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C30 jmp     cs:off_75600
//
// Resolved target: update_fpd
// Target address:  0x75E68
// GOT/IAT slot:    0x75600
// Slot symbol:     off_75600
// Target type:     <no type info>
// ============================================================

void .update_fpd(/* see target signature */)
{
    // Tail-call to update_fpd via GOT/IAT indirection
    return update_fpd(/* forwarded args */);
}

