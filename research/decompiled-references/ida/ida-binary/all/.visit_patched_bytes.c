// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116DF0
// Name:            .visit_patched_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116DF0 jmp     cs:visit_patched_bytes_ptr
//
// Resolved target: visit_patched_bytes
// Target address:  0x8D6C90
// GOT/IAT slot:    0x8A2398
// Slot symbol:     visit_patched_bytes_ptr
// Target type:     <no type info>
// ============================================================

void .visit_patched_bytes(/* see target signature */)
{
    // Tail-call to visit_patched_bytes via GOT/IAT indirection
    return visit_patched_bytes(/* forwarded args */);
}

