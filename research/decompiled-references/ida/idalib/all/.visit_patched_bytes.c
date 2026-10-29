// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAAD0
// Name:            .visit_patched_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAAD0 jmp     cs:off_2C7AD50
//
// Resolved target: visit_patched_bytes
// Target address:  0x59A4C0
// GOT/IAT slot:    0x2C7AD50
// Slot symbol:     off_2C7AD50
// Target type:     <no type info>
// ============================================================

void .visit_patched_bytes(/* see target signature */)
{
    // Tail-call to visit_patched_bytes via GOT/IAT indirection
    return visit_patched_bytes(/* forwarded args */);
}

