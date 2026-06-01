/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6FCA0
// Address: 0x0006FCA0

//----- (0006FCA0) --------------------------------------------------------
_UNKNOWN **__fastcall sub_6FCA0(const char *a1)
{
  _DWORD *v2; // r4
  const char *v4; // r0

  if ( !(sub_9B7B4((int)&dword_DE4FC, 0, 0) << 31) && _cxa_guard_acquire(&dword_DE4FC) )
  {
    dword_DE4F8 = (int)qsem_create(a1, 1u);
    _cxa_guard_release(&dword_DE4FC);
  }
  if ( !dword_DE4F8 )
  {
    v4 = qstrerror(0xFFFFFFFF);
    sub_1C9E4("%s qsem: %s", a1, v4);
  }
  if ( !qsem_wait(dword_DE4F8, 0) )
    sub_1C9E4("%s: another running copy has been detected, exiting...", a1);
  v2 = operator new(4u);
  *v2 = &off_DAA40;
  sub_704F8((int)&dword_DE4E8, (int)v2);
  *v2 = &off_DAB10;
  return &off_DAB10;
}
// DAA40: using guessed type _UNKNOWN *off_DAA40;
// DAB10: using guessed type _UNKNOWN *off_DAB10;
// DE4E8: using guessed type int dword_DE4E8;
// DE4F8: using guessed type int dword_DE4F8;
// DE4FC: using guessed type int dword_DE4FC;
