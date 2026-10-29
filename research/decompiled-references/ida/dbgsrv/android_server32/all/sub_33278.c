/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_33278
// Address: 0x00033278

//----- (00033278) --------------------------------------------------------
int *__fastcall sub_33278(int *result)
{
  int v1; // r1
  int v2; // r1
  int v3; // r4
  int v4; // r1
  _DWORD *v5; // r6
  void *v6; // r0
  int v7; // r7
  int v8; // [sp+0h] [bp-4h]

  v1 = result[1];
  if ( v1 )
  {
    v2 = v1 - 1;
    result[1] = v2;
    v3 = 28 * v2;
    v4 = *result;
    v5 = (_DWORD *)(*result + v3);
    v6 = (void *)v5[3];
    if ( v6 )
    {
      v8 = v4;
      v5[4] = 0;
      qfree(v6);
      v5[3] = 0;
      v4 = v8;
      *(_DWORD *)(v8 + v3 + 20) = 0;
    }
    result = *(int **)(v4 + v3);
    if ( result )
    {
      v7 = v4;
      v5[1] = 0;
      qfree(result);
      *v5 = 0;
      *(_DWORD *)(v7 + v3 + 8) = 0;
      return (int *)(v7 + v3);
    }
  }
  return result;
}
