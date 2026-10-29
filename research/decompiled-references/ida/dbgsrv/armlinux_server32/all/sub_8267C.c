/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8267C
// Address: 0x0008267C

//----- (0008267C) --------------------------------------------------------
_DWORD *__fastcall sub_8267C(_DWORD *a1, int *a2)
{
  int v3; // r3

  v3 = *a2;
  if ( *(int *)(*a2 - 4) >= 0 )
  {
    sub_825E8(a2);
    v3 = *a2;
  }
  *a1 = v3;
  return a1;
}
