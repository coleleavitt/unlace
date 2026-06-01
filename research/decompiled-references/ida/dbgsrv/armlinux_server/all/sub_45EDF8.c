/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45EDF8
// Address: 0x000000000045EDF8

//----- (000000000045EDF8) ----------------------------------------------------
__int64 __fastcall sub_45EDF8(__int64 *a1)
{
  __int64 v2; // x23
  __int64 v3; // x22
  __int64 i; // x21
  _QWORD *v5; // x20
  void *v6; // x0
  void *v7; // x0
  __int64 v8; // x23
  __int64 v9; // x22
  __int64 j; // x21
  _QWORD *v11; // x20
  void *v12; // x0
  void *v13; // x0
  __int64 v14; // x0
  void *v15; // x0
  __int64 v16; // x0
  __int64 (__fastcall *v17)(__int64 *); // x2
  __int64 v18; // x0
  void *v19; // x0
  char *v20; // x1
  __int64 v21; // x22
  __int64 v22; // x20
  __int64 k; // x21
  void *v24; // x0
  char *v25; // x1
  void *v26; // x0
  char *v27; // x1
  __int64 v28; // x22
  __int64 v29; // x20
  __int64 m; // x21
  void *v31; // x0
  char *v32; // x1

  a1[74] = 0;
  v2 = a1[58];
  if ( v2 )
  {
    v3 = 0;
    for ( i = 0; i != v2; ++i )
    {
      v5 = (_QWORD *)(a1[57] + v3);
      v6 = (void *)v5[5];
      if ( v6 )
      {
        v5[6] = 0;
        j__free(v6);
      }
      v7 = (void *)v5[2];
      if ( v7 )
      {
        v5[3] = 0;
        j__free(v7);
      }
      v3 += 80;
    }
  }
  v8 = a1[7];
  a1[58] = 0;
  if ( v8 )
  {
    v9 = 0;
    for ( j = 0; j != v8; ++j )
    {
      v11 = (_QWORD *)(a1[6] + v9);
      v12 = (void *)v11[4];
      if ( v12 )
      {
        v11[5] = 0;
        j__free(v12);
      }
      v13 = (void *)v11[1];
      if ( v13 )
      {
        v11[2] = 0;
        j__free(v13);
      }
      v9 += 56;
    }
  }
  v14 = a1[10];
  a1[7] = 0;
  if ( v14 )
    sub_45B818(a1);
  v15 = (void *)a1[54];
  if ( v15 )
  {
    a1[55] = 0;
    j__free(v15);
    a1[54] = 0;
    a1[56] = 0;
  }
  sub_40D318((__int64)(a1 + 48), (_QWORD *)a1[50]);
  a1[50] = 0;
  a1[53] = 0;
  a1[51] = (__int64)(a1 + 49);
  a1[52] = (__int64)(a1 + 49);
  sub_40D3C8((__int64)(a1 + 76), (_QWORD *)a1[78]);
  a1[78] = 0;
  a1[81] = 0;
  a1[79] = (__int64)(a1 + 77);
  a1[80] = (__int64)(a1 + 77);
  *((_DWORD *)a1 + 164) = 0;
  v16 = *a1;
  *((_BYTE *)a1 + 861) = 0;
  v17 = *(__int64 (__fastcall **)(__int64 *))(v16 + 600);
  if ( v17 != sub_407408 )
    return v17(a1);
  v18 = a1[83];
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v19 = (void *)a1[84];
    if ( v19 )
    {
      a1[85] = 0;
      j__free(v19);
      a1[84] = 0;
      a1[86] = 0;
    }
    v20 = (char *)a1[87];
    if ( v20 )
    {
      v21 = a1[88];
      if ( v21 )
      {
        v22 = 0;
        for ( k = 0; k != v21; ++k )
        {
          v24 = *(void **)&v20[v22];
          v25 = &v20[v22];
          if ( v24 )
          {
            *((_QWORD *)v25 + 1) = 0;
            j__free(v24);
          }
          v22 += 24;
          v20 = (char *)a1[87];
        }
      }
      a1[88] = 0;
      j__free(v20);
      a1[87] = 0;
      a1[89] = 0;
    }
    v26 = (void *)a1[90];
    if ( v26 )
    {
      a1[91] = 0;
      j__free(v26);
      a1[90] = 0;
      a1[92] = 0;
    }
    v27 = (char *)a1[93];
    if ( v27 )
    {
      v28 = a1[94];
      if ( v28 )
      {
        v29 = 0;
        for ( m = 0; m != v28; ++m )
        {
          v31 = *(void **)&v27[v29];
          v32 = &v27[v29];
          if ( v31 )
          {
            *((_QWORD *)v32 + 1) = 0;
            j__free(v31);
          }
          v29 += 24;
          v27 = (char *)a1[93];
        }
      }
      a1[94] = 0;
      j__free(v27);
      a1[93] = 0;
      a1[95] = 0;
    }
  }
  a1[83] = 0;
  return nullsub_9(0);
}
// 461A18: using guessed type __int64 __fastcall nullsub_9(_QWORD);
