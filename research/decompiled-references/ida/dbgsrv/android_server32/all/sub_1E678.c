/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E678
// Address: 0x0001E678

//----- (0001E678) --------------------------------------------------------
_DWORD *__fastcall sub_1E678(_DWORD *a1)
{
  int v2; // r0
  unsigned int v3; // r5
  _DWORD *v4; // r0
  _DWORD *v5; // r6
  int v6; // r7
  _DWORD *v7; // r5
  void *v8; // r0
  _DWORD *v9; // r1
  _DWORD *result; // r0
  int v11; // [sp+4h] [bp-8h]
  _DWORD *v12; // [sp+8h] [bp-4h]

  v2 = a1[1];
  v3 = a1[2];
  if ( v3 >= v2 + 1 )
  {
    v9 = (_DWORD *)*a1;
  }
  else
  {
    v4 = qvector_reserve((int)a1, nullptr, v2 + 1, 0x10u);
    v11 = a1[2];
    a1[2] = v3;
    v5 = (_DWORD *)*a1;
    v6 = a1[1] - 1;
    v12 = v4;
    if ( v6 >= 0 )
    {
      v7 = v4;
      do
      {
        *v7 = *v5;
        v7[1] = v5[1];
        v5[1] = 0;
        v7[2] = v5[2];
        v5[2] = 0;
        v7[3] = v5[3];
        v5[3] = 0;
        v8 = (void *)v5[1];
        if ( v8 )
        {
          v5[2] = 0;
          qfree(v8);
          v5[3] = 0;
          v5[1] = 0;
        }
        v7 += 4;
        --v6;
        v5 += 4;
      }
      while ( v6 >= 0 );
      v5 = (_DWORD *)*a1;
    }
    qfree(v5);
    a1[2] = v11;
    v9 = v12;
    *a1 = v12;
    v2 = a1[1];
  }
  result = &v9[4 * v2];
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  ++a1[1];
  return result;
}
