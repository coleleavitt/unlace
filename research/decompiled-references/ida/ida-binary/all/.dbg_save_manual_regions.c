// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118CF0
// Name:            .dbg_save_manual_regions
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118CF0 jmp     cs:dbg_save_manual_regions_ptr
//
// Resolved target: dbg_save_manual_regions
// Target address:  0x8D7FD0
// GOT/IAT slot:    0x8A3318
// Slot symbol:     dbg_save_manual_regions_ptr
// Target type:     <no type info>
// ============================================================

void .dbg_save_manual_regions(/* see target signature */)
{
    // Tail-call to dbg_save_manual_regions via GOT/IAT indirection
    return dbg_save_manual_regions(/* forwarded args */);
}

