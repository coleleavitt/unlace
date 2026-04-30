// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119DB0
// Name:            .auto_is_ok
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119DB0 jmp     cs:auto_is_ok_ptr
//
// Resolved target: auto_is_ok
// Target address:  0x8D8A70
// GOT/IAT slot:    0x8A3B78
// Slot symbol:     auto_is_ok_ptr
// Target type:     <no type info>
// ============================================================

void .auto_is_ok(/* see target signature */)
{
    // Tail-call to auto_is_ok via GOT/IAT indirection
    return auto_is_ok(/* forwarded args */);
}

