/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3ED0C
// Address: 0x0003ED0C

//----- (0003ED0C) --------------------------------------------------------
void __fastcall sub_3ED0C(_DWORD *a1, int a2, int a3)
{
  int v5; // r12
  int *v7; // r4
  int v8; // r0
  unsigned int v9; // r10
  unsigned int v10; // r2
  int v11; // r1
  int *v12; // r4
  int *v13; // r0
  __int64 v14; // kr00_8
  char *v15; // r12
  int v16; // r2
  int v17; // r3
  char *v18; // r1
  int *v19; // r3
  int v20; // r0
  int v21; // r1
  int *v22; // r0
  __int64 v23; // kr08_8
  char *v24; // r12
  int v25; // r2
  int v26; // r3
  char *v27; // r1
  int *v28; // r3
  int v29; // r0
  int v30; // r1
  int v31; // [sp+4h] [bp-Ch] BYREF
  int v32; // [sp+8h] [bp-8h]

  v5 = a1[15];
  v7 = (int *)a1[14];
  if ( v5 && v7[2 * v5 + 1073741822] == a2 )
  {
    v7[2 * v5 + 1 - 2] = a3;
  }
  else
  {
    v31 = a2;
    v32 = a3;
    v8 = (int)(a1 + 14);
    v9 = a1[16];
    v10 = v5 + 1;
    if ( v7 <= &v31 && &v31 < &v7[2 * v9] )
    {
      if ( v9 < v10 )
      {
        v22 = (int *)sub_78018(v8, nullptr, v10, 8u);
        v23 = *(_QWORD *)(a1 + 15);
        v7 = v22;
        v24 = (char *)a1[14];
        a1[16] = v9;
        if ( (int)v23 - 1 >= 0 )
        {
          v25 = 0;
          do
          {
            v26 = 2 * v25++;
            v27 = &v24[v26 * 4];
            v28 = &v7[v26];
            v29 = *(_DWORD *)v27;
            v30 = *((_DWORD *)v27 + 1);
            *v28 = v29;
            v28[1] = v30;
          }
          while ( (_DWORD)v23 != v25 );
          v24 = (char *)a1[14];
        }
        sub_77F70(v24);
        v5 = a1[15];
        a1[14] = v7;
        a1[16] = HIDWORD(v23);
      }
      v7[2 * v5] = a2;
      v7[2 * v5 + 1] = a3;
    }
    else
    {
      if ( v9 < v10 )
      {
        v13 = (int *)sub_78018(v8, nullptr, v10, 8u);
        v14 = *(_QWORD *)(a1 + 15);
        v7 = v13;
        v15 = (char *)a1[14];
        a1[16] = v9;
        if ( (int)v14 - 1 >= 0 )
        {
          v16 = 0;
          do
          {
            v17 = 2 * v16++;
            v18 = &v15[v17 * 4];
            v19 = &v7[v17];
            v20 = *(_DWORD *)v18;
            v21 = *((_DWORD *)v18 + 1);
            *v19 = v20;
            v19[1] = v21;
          }
          while ( (_DWORD)v14 != v16 );
          v15 = (char *)a1[14];
        }
        sub_77F70(v15);
        v5 = a1[15];
        a1[14] = v7;
        a1[16] = HIDWORD(v14);
      }
      v11 = v32;
      v12 = &v7[2 * v5];
      *v12 = v31;
      v12[1] = v11;
    }
    ++a1[15];
  }
}
