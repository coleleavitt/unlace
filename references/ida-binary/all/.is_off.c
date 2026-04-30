// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117240
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117240 jmp     cs:is_off_ptr
//
// Resolved target: is_off
// Target address:  0x8D6F50
// GOT/IAT slot:    0x8A25C0
// Slot symbol:     is_off_ptr
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

