// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9A30
// Name:            .set_func_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9A30 jmp     cs:off_2C7A500
//
// Resolved target: set_func_end
// Target address:  0x5CE150
// GOT/IAT slot:    0x2C7A500
// Slot symbol:     off_2C7A500
// Target type:     <no type info>
// ============================================================

void .set_func_end(/* see target signature */)
{
    // Tail-call to set_func_end via GOT/IAT indirection
    return set_func_end(/* forwarded args */);
}

