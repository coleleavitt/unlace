/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_655A0
// Address: 0x00000000000655A0

//----- (00000000000655A0) ----------------------------------------------------
void __fastcall sub_655A0(_QWORD *a1)
{
  char *v2; // x0
  unsigned __int64 v3; // x20
  __int64 v4; // x21
  unsigned __int64 i; // x22
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0
  void *v10; // x0
  void *v11; // x0
  void *v12; // x0
  void *v13; // x0
  void *v14; // x0

  sub_5E994((__int64)a1);
  v2 = (char *)a1[53];
  a1[23] = 0;
  if ( v2 )
  {
    v3 = a1[54];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 1; ; ++i )
      {
        free_idcv((__int64 *)&v2[v4]);
        if ( i >= v3 )
          break;
        v2 = (char *)a1[53];
        v4 += 32;
      }
      v2 = (char *)a1[53];
    }
    a1[54] = 0;
    qfree(v2);
    a1[53] = 0;
    a1[55] = 0;
  }
  v6 = (void *)a1[49];
  if ( v6 )
  {
    a1[50] = 0;
    qfree(v6);
    a1[49] = 0;
    a1[51] = 0;
  }
  v7 = (void *)a1[46];
  if ( v7 )
  {
    a1[47] = 0;
    qfree(v7);
    a1[46] = 0;
    a1[48] = 0;
  }
  v8 = (void *)a1[43];
  if ( v8 )
  {
    a1[44] = 0;
    qfree(v8);
    a1[43] = 0;
    a1[45] = 0;
  }
  v9 = (void *)a1[40];
  if ( v9 )
  {
    a1[41] = 0;
    qfree(v9);
    a1[40] = 0;
    a1[42] = 0;
  }
  v10 = (void *)a1[37];
  if ( v10 )
  {
    a1[38] = 0;
    qfree(v10);
    a1[37] = 0;
    a1[39] = 0;
  }
  v11 = (void *)a1[34];
  if ( v11 )
  {
    a1[35] = 0;
    qfree(v11);
    a1[34] = 0;
    a1[36] = 0;
  }
  v12 = (void *)a1[31];
  if ( v12 )
  {
    a1[32] = 0;
    qfree(v12);
    a1[31] = 0;
    a1[33] = 0;
  }
  v13 = (void *)a1[28];
  if ( v13 )
  {
    a1[29] = 0;
    qfree(v13);
    a1[28] = 0;
    a1[30] = 0;
  }
  sub_39570((__int64)(a1 + 20));
  sub_39570((__int64)(a1 + 17));
  sub_39570((__int64)(a1 + 14));
  v14 = (void *)a1[5];
  if ( v14 )
  {
    a1[6] = 0;
    qfree(v14);
    a1[5] = 0;
    a1[7] = 0;
  }
}
