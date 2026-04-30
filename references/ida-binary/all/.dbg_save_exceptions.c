// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111DE0
// Name:            .dbg_save_exceptions
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111DE0 jmp     cs:dbg_save_exceptions_ptr
//
// Resolved target: dbg_save_exceptions
// Target address:  0x8D3990
// GOT/IAT slot:    0x89FB90
// Slot symbol:     dbg_save_exceptions_ptr
// Target type:     <no type info>
// ============================================================

void .dbg_save_exceptions(/* see target signature */)
{
    // Tail-call to dbg_save_exceptions via GOT/IAT indirection
    return dbg_save_exceptions(/* forwarded args */);
}

