// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7CB0
// Name:            .update_snapshot_attributes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7CB0 jmp     cs:off_2C79640
//
// Resolved target: update_snapshot_attributes
// Target address:  0x592BA0
// GOT/IAT slot:    0x2C79640
// Slot symbol:     off_2C79640
// Target type:     <no type info>
// ============================================================

void .update_snapshot_attributes(/* see target signature */)
{
    // Tail-call to update_snapshot_attributes via GOT/IAT indirection
    return update_snapshot_attributes(/* forwarded args */);
}

