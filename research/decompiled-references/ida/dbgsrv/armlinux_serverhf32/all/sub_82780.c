/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82780
// Address: 0x00082780

//----- (00082780) --------------------------------------------------------
_DWORD *__fastcall sub_82780(_DWORD *a1, size_t a2, int a3, _BYTE *a4, size_t a5)
{
  sub_822F4(a1, a2, a3, a5);
  if ( !a5 )
    return a1;
  if ( a5 != 1 )
  {
    memcpy((void *)(*a1 + a2), a4, a5);
    return a1;
  }
  *(_BYTE *)(*a1 + a2) = *a4;
  return a1;
}
