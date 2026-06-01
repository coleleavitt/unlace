/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40800
// Address: 0x00040800

//----- (00040800) --------------------------------------------------------
int __fastcall sub_40800(int **a1, int *a2)
{
  int *v4; // r5
  unsigned int v5; // r7
  unsigned int v6; // r0
  int v7; // r1
  int v8; // r6
  int *v9; // r3
  int *v10; // r0
  int *v11; // r0
  int v12; // r1
  int *v13; // r2
  int v14; // r3
  int v15; // r7
  int v16; // r0
  int *v17; // r0
  int *v18; // r0
  int v19; // r1
  int *v20; // r2
  int v21; // r3
  int v22; // r7
  int v23; // r2
  int v24; // r0
  int result; // r0
  int *v26; // [sp+4h] [bp-Ch]
  int v27; // [sp+8h] [bp-8h]
  int *v28; // [sp+8h] [bp-8h]

  v4 = *a1;
  v5 = (unsigned int)a1[2];
  v6 = (unsigned int)&(*a1)[2 * v5];
  if ( v4 > a2 || v6 <= (unsigned int)a2 )
  {
    v9 = (int *)(a1 + 1);
    v17 = a1[1];
    if ( v5 < (unsigned int)v17 + 1 )
    {
      v4 = (int *)qvector_reserve((int)a1, nullptr, (unsigned int)v17 + 1, 8u);
      v28 = a1[2];
      a1[2] = (int *)v5;
      v18 = *a1;
      v19 = (int)a1[1] - 1;
      if ( v19 >= 0 )
      {
        v20 = v4;
        do
        {
          v21 = *v18;
          v22 = v18[1];
          v18 += 2;
          *v20 = v21;
          v20[1] = v22;
          v20 += 2;
          --v19;
        }
        while ( v19 >= 0 );
        v18 = *a1;
      }
      qfree(v18);
      a1[2] = v28;
      *a1 = v4;
      v17 = a1[1];
      v9 = (int *)(a1 + 1);
    }
    v23 = a2[1];
    v24 = 2 * (_DWORD)v17;
    v4[v24] = *a2;
    v4[v24 + 1] = v23;
  }
  else
  {
    v7 = *a2;
    v8 = a2[1];
    v9 = (int *)(a1 + 1);
    v10 = a1[1];
    if ( v5 < (unsigned int)v10 + 1 )
    {
      v27 = v7;
      v4 = (int *)qvector_reserve((int)a1, nullptr, (unsigned int)v10 + 1, 8u);
      v26 = a1[2];
      a1[2] = (int *)v5;
      v11 = *a1;
      v12 = (int)a1[1] - 1;
      if ( v12 >= 0 )
      {
        v13 = v4;
        do
        {
          v14 = *v11;
          v15 = v11[1];
          v11 += 2;
          *v13 = v14;
          v13[1] = v15;
          v13 += 2;
          --v12;
        }
        while ( v12 >= 0 );
        v11 = *a1;
      }
      qfree(v11);
      a1[2] = v26;
      *a1 = v4;
      v10 = a1[1];
      v9 = (int *)(a1 + 1);
      v7 = v27;
    }
    v16 = 2 * (_DWORD)v10;
    v4[v16] = v7;
    v4[v16 + 1] = v8;
  }
  result = *v9 + 1;
  *v9 = result;
  return result;
}
