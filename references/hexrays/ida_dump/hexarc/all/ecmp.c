// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x4BBC10
// Name:     ecmp
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to ecmp are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void ecmp(/* see import library declaration */);

