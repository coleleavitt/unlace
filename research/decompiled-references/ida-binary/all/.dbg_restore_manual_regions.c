// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B5B0
// Name:            .dbg_restore_manual_regions
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B5B0 jmp     cs:dbg_restore_manual_regions_ptr
//
// Resolved target: dbg_restore_manual_regions
// Target address:  0x8D99D8
// GOT/IAT slot:    0x8A4778
// Slot symbol:     dbg_restore_manual_regions_ptr
// Target type:     <no type info>
// ============================================================

void .dbg_restore_manual_regions(/* see target signature */)
{
    // Tail-call to dbg_restore_manual_regions via GOT/IAT indirection
    return dbg_restore_manual_regions(/* forwarded args */);
}

