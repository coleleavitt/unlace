// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1185E0
// Name:            .del_numbered_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1185E0 jmp     cs:del_numbered_type_ptr
//
// Resolved target: del_numbered_type
// Target address:  0x8D7BB0
// GOT/IAT slot:    0x8A2F90
// Slot symbol:     del_numbered_type_ptr
// Target type:     <no type info>
// ============================================================

void .del_numbered_type(/* see target signature */)
{
    // Tail-call to del_numbered_type via GOT/IAT indirection
    return del_numbered_type(/* forwarded args */);
}

