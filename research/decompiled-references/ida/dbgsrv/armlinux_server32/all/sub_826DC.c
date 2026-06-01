/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_826DC
// Address: 0x000826DC

//----- (000826DC) --------------------------------------------------------
_DWORD *__fastcall sub_826DC(_DWORD *a1, int *a2)
{
  int v3; // r3

  v3 = *a2;
  if ( *(int *)(*a2 - 4) >= 0 )
  {
    sub_825E8(a2);
    v3 = *a2;
  }
  *a1 = v3 + *(_DWORD *)(v3 - 12);
  return a1;
}
