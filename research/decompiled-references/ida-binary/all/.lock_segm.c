// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111F90
// Name:            .lock_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111F90 jmp     cs:lock_segm_ptr
//
// Resolved target: lock_segm
// Target address:  0x8D3A78
// GOT/IAT slot:    0x89FC68
// Slot symbol:     lock_segm_ptr
// Target type:     <no type info>
// ============================================================

void .lock_segm(/* see target signature */)
{
    // Tail-call to lock_segm via GOT/IAT indirection
    return lock_segm(/* forwarded args */);
}

