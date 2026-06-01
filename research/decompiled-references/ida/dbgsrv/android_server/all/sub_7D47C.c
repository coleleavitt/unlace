/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7D47C
// Address: 0x000000000007D47C

//----- (000000000007D47C) ----------------------------------------------------
void __fastcall sub_7D47C(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // w1
  int v10; // w2
  int v11; // w3
  int v12; // w4
  int v13; // w5
  int v14; // w6
  int v15; // w7
  void **v16; // x20
  void **v17; // x21
  void *v18; // x0
  void *v19; // x0
  void *v20; // x0
  void **v21; // x20
  void **v22; // x21
  void *v23; // x0
  void *v24; // x0
  __int64 v25; // x20
  __int64 v26; // x20
  __int64 v27; // x21
  void *v28; // x0

  sub_7D614((__int64)a1, 1, a3, a4, a5, a6, a7, a8);
  sub_7D730((__int64)a1, v9, v10, v11, v12, v13, v14, v15);
  v16 = (void **)a1[81];
  if ( v16 )
  {
    do
    {
      v17 = (void **)*v16;
      sub_865B4((__int64)(v16 + 5));
      if ( ((_BYTE)v16[2] & 1) != 0 )
        operator delete(v16[4]);
      operator delete(v16);
      v16 = v17;
    }
    while ( v17 );
  }
  v18 = (void *)a1[79];
  a1[79] = 0;
  if ( v18 )
    operator delete(v18);
  v19 = (void *)a1[37];
  if ( v19 )
  {
    a1[38] = 0;
    qfree(v19);
    a1[37] = 0;
    a1[39] = 0;
  }
  v20 = (void *)a1[31];
  if ( v20 )
  {
    a1[32] = 0;
    qfree(v20);
    a1[31] = 0;
    a1[33] = 0;
  }
  sub_39570((__int64)(a1 + 28));
  v21 = (void **)a1[13];
  if ( v21 )
  {
    do
    {
      v22 = (void **)*v21;
      if ( ((_BYTE)v21[2] & 1) != 0 )
        operator delete(v21[4]);
      operator delete(v21);
      v21 = v22;
    }
    while ( v22 );
  }
  v23 = (void *)a1[11];
  a1[11] = 0;
  if ( v23 )
    operator delete(v23);
  v24 = (void *)a1[7];
  if ( v24 )
  {
    v25 = a1[8];
    if ( v25 )
    {
      sub_39570((__int64)v24);
      v26 = v25 - 1;
      if ( v26 )
      {
        v27 = 56;
        do
        {
          sub_39570(a1[7] + v27);
          --v26;
          v27 += 56;
        }
        while ( v26 );
      }
      v24 = (void *)a1[7];
    }
    a1[8] = 0;
    qfree(v24);
    a1[7] = 0;
    a1[9] = 0;
  }
  v28 = (void *)a1[4];
  if ( v28 )
  {
    a1[5] = 0;
    qfree(v28);
    a1[4] = 0;
    a1[6] = 0;
  }
}
// 7D494: variable 'v9' is possibly undefined
// 7D494: variable 'v10' is possibly undefined
// 7D494: variable 'v11' is possibly undefined
// 7D494: variable 'v12' is possibly undefined
// 7D494: variable 'v13' is possibly undefined
// 7D494: variable 'v14' is possibly undefined
// 7D494: variable 'v15' is possibly undefined
