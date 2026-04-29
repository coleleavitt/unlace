// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x35840
// Name:     check_flat_jump_table
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to check_flat_jump_table are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void check_flat_jump_table(/* see import library declaration */);

