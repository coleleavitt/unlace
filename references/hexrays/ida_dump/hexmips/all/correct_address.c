// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x4CFF78
// Name:     correct_address
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to correct_address are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void correct_address(/* see import library declaration */);

