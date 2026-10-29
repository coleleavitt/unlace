// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A270
// Name:            .update_fpd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A270 jmp     cs:update_fpd_ptr
//
// Resolved target: update_fpd
// Target address:  0x8D8D80
// GOT/IAT slot:    0x8A3DD8
// Slot symbol:     update_fpd_ptr
// Target type:     <no type info>
// ============================================================

void .update_fpd(/* see target signature */)
{
    // Tail-call to update_fpd via GOT/IAT indirection
    return update_fpd(/* forwarded args */);
}

