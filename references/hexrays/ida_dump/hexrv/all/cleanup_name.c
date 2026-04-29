// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x4C33C8
// Name:     cleanup_name
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to cleanup_name are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void cleanup_name(/* see import library declaration */);

