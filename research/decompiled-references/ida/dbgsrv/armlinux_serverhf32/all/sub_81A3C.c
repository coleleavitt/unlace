/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81A3C
// Address: 0x00081A3C

//----- (00081A3C) --------------------------------------------------------
int *__fastcall sub_81A3C(int *result, int *a2)
{
  int v2; // r2
  int v3; // r3

  v2 = *result;
  if ( *(int *)(*result - 4) < 0 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = *a2;
  if ( *(int *)(*a2 - 4) < 0 )
    *(_DWORD *)(v3 - 4) = 0;
  *result = v3;
  *a2 = v2;
  return result;
}
