void **__fastcall sub_1ACA320(__int64 *a1, void **a2, double a3)
{
  if ( !a2 )
    return (void **)(&dword_0 + 1);
  if ( (*(_DWORD *)a2 & 0x8000) != 0 )
    return a2;
  return (void **)sub_1AC9F70(a1, a2, a3);
}
