/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A6C
// Address: 0x00042A6C

//----- (00042A6C) --------------------------------------------------------
_DWORD *__fastcall sub_42A6C(_DWORD *a1)
{
  int v2; // r0
  unsigned int v3; // r5
  _DWORD *v4; // r0
  _DWORD *v5; // r6
  int v6; // r7
  _DWORD *v7; // r5
  void *v8; // r0
  _DWORD *v9; // r2
  int v10; // r0
  _DWORD *result; // r0
  int v12; // [sp+4h] [bp-8h]
  _DWORD *v13; // [sp+8h] [bp-4h]

  v2 = a1[1];
  v3 = a1[2];
  if ( v3 >= v2 + 1 )
  {
    v9 = (_DWORD *)*a1;
  }
  else
  {
    v4 = qvector_reserve((int)a1, nullptr, v2 + 1, 0x10u);
    v12 = a1[2];
    a1[2] = v3;
    v5 = (_DWORD *)*a1;
    v6 = a1[1] - 1;
    v13 = v4;
    if ( v6 >= 0 )
    {
      v7 = v4;
      do
      {
        *v7 = *v5;
        *v5 = 0;
        v7[1] = v5[1];
        v5[1] = 0;
        v7[2] = v5[2];
        v5[2] = 0;
        v7[3] = v5[3];
        v8 = (void *)*v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v8);
          v5[2] = 0;
          *v5 = 0;
        }
        v7 += 4;
        --v6;
        v5 += 4;
      }
      while ( v6 >= 0 );
      v5 = (_DWORD *)*a1;
    }
    qfree(v5);
    a1[2] = v12;
    v9 = v13;
    *a1 = v13;
    v2 = a1[1];
  }
  v10 = 4 * v2;
  v9[v10] = 0;
  result = &v9[v10];
  result[1] = 0;
  result[2] = 0;
  ++a1[1];
  return result;
}
