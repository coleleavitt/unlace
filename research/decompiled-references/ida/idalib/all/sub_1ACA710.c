void **__fastcall sub_1ACA710(__int64 *a1, void **a2, double a3)
{
  if ( !a2 )
    return (void **)(&dword_0 + 1);
  if ( (*(_DWORD *)a2 & 0x8000) != 0 || (*(_WORD *)a2 & 0x1FF) == 0x19 )
    return a2;
  return (void **)sub_1ACA350(a1, a2, a3);
}
