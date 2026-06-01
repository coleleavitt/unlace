// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112390
// Name:            .update_snapshot_attributes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112390 jmp     cs:update_snapshot_attributes_ptr
//
// Resolved target: update_snapshot_attributes
// Target address:  0x8D3D10
// GOT/IAT slot:    0x89FE68
// Slot symbol:     update_snapshot_attributes_ptr
// Target type:     <no type info>
// ============================================================

void .update_snapshot_attributes(/* see target signature */)
{
    // Tail-call to update_snapshot_attributes via GOT/IAT indirection
    return update_snapshot_attributes(/* forwarded args */);
}

