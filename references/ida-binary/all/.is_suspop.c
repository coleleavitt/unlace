// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BCB0
// Name:            .is_suspop
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BCB0 jmp     cs:is_suspop_ptr
//
// Resolved target: is_suspop
// Target address:  0x8D9E28
// GOT/IAT slot:    0x8A4AF8
// Slot symbol:     is_suspop_ptr
// Target type:     <no type info>
// ============================================================

void .is_suspop(/* see target signature */)
{
    // Tail-call to is_suspop via GOT/IAT indirection
    return is_suspop(/* forwarded args */);
}

