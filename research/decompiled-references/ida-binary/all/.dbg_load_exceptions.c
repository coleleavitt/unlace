// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160C0
// Name:            .dbg_load_exceptions
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160C0 jmp     cs:dbg_load_exceptions_ptr
//
// Resolved target: dbg_load_exceptions
// Target address:  0x8D6458
// GOT/IAT slot:    0x8A1D00
// Slot symbol:     dbg_load_exceptions_ptr
// Target type:     <no type info>
// ============================================================

void .dbg_load_exceptions(/* see target signature */)
{
    // Tail-call to dbg_load_exceptions via GOT/IAT indirection
    return dbg_load_exceptions(/* forwarded args */);
}

