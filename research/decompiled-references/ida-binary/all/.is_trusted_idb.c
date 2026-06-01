// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BAC0
// Name:            .is_trusted_idb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BAC0 jmp     cs:is_trusted_idb_ptr
//
// Resolved target: is_trusted_idb
// Target address:  0x8D9CE8
// GOT/IAT slot:    0x8A4A00
// Slot symbol:     is_trusted_idb_ptr
// Target type:     <no type info>
// ============================================================

void .is_trusted_idb(/* see target signature */)
{
    // Tail-call to is_trusted_idb via GOT/IAT indirection
    return is_trusted_idb(/* forwarded args */);
}

