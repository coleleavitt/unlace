// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B610
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B610 jmp     cs:off_4DAAF0
//
// Resolved target: is_loaded
// Target address:  0x4DD4F8
// GOT/IAT slot:    0x4DAAF0
// Slot symbol:     off_4DAAF0
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

