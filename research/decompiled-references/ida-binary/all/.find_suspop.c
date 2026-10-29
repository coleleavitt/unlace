// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115F10
// Name:            .find_suspop
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115F10 jmp     cs:find_suspop_ptr
//
// Resolved target: find_suspop
// Target address:  0x8D6320
// GOT/IAT slot:    0x8A1C28
// Slot symbol:     find_suspop_ptr
// Target type:     <no type info>
// ============================================================

void .find_suspop(/* see target signature */)
{
    // Tail-call to find_suspop via GOT/IAT indirection
    return find_suspop(/* forwarded args */);
}

