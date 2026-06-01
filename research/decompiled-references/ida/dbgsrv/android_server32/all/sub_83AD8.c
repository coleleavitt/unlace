/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83AD8
// Address: 0x00083AD8

//----- (00083AD8) --------------------------------------------------------
int __fastcall sub_83AD8(_DWORD *a1, _DWORD *a2)
{
  unsigned int v4; // r7
  _DWORD *v5; // r5
  unsigned int v6; // r0
  _DWORD *v7; // r6
  int v8; // r0
  int v9; // r6
  _DWORD *v10; // r0
  int v11; // r1
  _DWORD *v12; // r2
  char *v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  int v16; // r1
  _DWORD *v17; // r2
  char *v18; // r0
  int v20; // [sp+8h] [bp-20h]
  int v21; // [sp+18h] [bp-10h]
  int v22; // [sp+1Ch] [bp-Ch]
  int v23; // [sp+20h] [bp-8h]
  int v24; // [sp+24h] [bp-4h]

  v4 = a1[2];
  v5 = (_DWORD *)*a1;
  v6 = *a1 + 12 * v4;
  if ( v5 > a2 || v6 <= (unsigned int)a2 )
  {
    v14 = a1[1];
    if ( v4 < v14 + 1 )
    {
      v5 = qvector_reserve((int)a1, nullptr, v14 + 1, 0xCu);
      v20 = a1[2];
      a1[2] = v4;
      v15 = (_DWORD *)*a1;
      v16 = a1[1] - 1;
      if ( v16 >= 0 )
      {
        v17 = v5;
        do
        {
          v17[2] = v15[2];
          v17[1] = v15[1];
          *v17 = *v15;
          --v16;
          v17 += 3;
          v15 += 3;
        }
        while ( v16 >= 0 );
        v15 = (_DWORD *)*a1;
      }
      qfree(v15);
      a1[2] = v20;
      *a1 = v5;
      v14 = a1[1];
    }
    v5[3 * v14] = *a2;
    v18 = (char *)&v5[3 * v14];
    *((_DWORD *)v18 + 2) = a2[2];
    *((_DWORD *)v18 + 1) = a2[1];
    v7 = a1 + 1;
  }
  else
  {
    v21 = *a2;
    v22 = a2[1];
    v23 = a2[2];
    v7 = a1 + 1;
    v8 = a1[1];
    if ( v4 < v8 + 1 )
    {
      v5 = qvector_reserve((int)a1, nullptr, v8 + 1, 0xCu);
      v9 = a1[2];
      a1[2] = v4;
      v10 = (_DWORD *)*a1;
      v11 = a1[1] - 1;
      if ( v11 >= 0 )
      {
        v12 = v5;
        do
        {
          v12[2] = v10[2];
          v12[1] = v10[1];
          *v12 = *v10;
          --v11;
          v12 += 3;
          v10 += 3;
        }
        while ( v11 >= 0 );
        v10 = (_DWORD *)*a1;
      }
      qfree(v10);
      a1[2] = v9;
      *a1 = v5;
      v8 = a1[1];
      v7 = a1 + 1;
    }
    v5[3 * v8] = v21;
    v13 = (char *)&v5[3 * v8];
    *((_DWORD *)v13 + 2) = v23;
    *((_DWORD *)v13 + 1) = v22;
  }
  ++*v7;
  return _stack_chk_guard - v24;
}
// 83BE0: variable 'v24' is possibly undefined
