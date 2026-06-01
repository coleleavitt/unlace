/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F188
// Address: 0x000000000040F188

//----- (000000000040F188) ----------------------------------------------------
_QWORD *__fastcall sub_40F188(_QWORD *a1, __int64 *a2)
{
  __int64 *v3; // x21
  _QWORD *v5; // x20
  __int64 v6; // t1
  __int64 v7; // x7
  __int64 v8; // x5
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x1
  __int64 v12; // x1
  void *v13; // x26
  __int64 v14; // x4
  void *v15; // x25
  __int64 v16; // x3
  __int64 v17; // x2
  _QWORD *v18; // x19
  int v19; // w0
  unsigned __int64 v20; // x2
  unsigned __int64 v21; // x1
  _QWORD *v22; // x0
  int v23; // w4
  void *v24; // x0
  void *v25; // x0
  __int64 v27; // x0
  char v28; // w0

  v3 = a2;
  v5 = sub_49E050(0xD0u);
  v6 = *v3++;
  v7 = a2[4];
  v8 = a2[5];
  v9 = a2[8];
  v5[7] = a2[3];
  v5[8] = v7;
  v5[9] = v8;
  v10 = a2[7];
  v5[10] = a2[6];
  v5[11] = v10;
  v11 = a2[1];
  v5[4] = v6;
  v5[5] = v11;
  v12 = v3[1];
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  a2[6] = 0;
  a2[7] = 0;
  a2[8] = 0;
  v5[6] = v12;
  v5[12] = v9;
  sub_40A520((__int64)(v5 + 14), (__int64)(a2 + 10));
  v13 = (void *)a2[18];
  v5[21] = a2[17];
  v5[22] = v13;
  v15 = (void *)a2[15];
  v14 = a2[16];
  a2[15] = 0;
  a2[16] = 0;
  v16 = a2[19];
  v17 = a2[20];
  a2[17] = 0;
  a2[18] = 0;
  a2[19] = 0;
  a2[20] = 0;
  v5[19] = v15;
  v5[20] = v14;
  v18 = (_QWORD *)a1[2];
  v19 = *((_DWORD *)v3 + 40);
  v5[23] = v16;
  v5[24] = v17;
  *((_DWORD *)v5 + 50) = v19;
  if ( v18 )
  {
    v20 = v5[4];
    v21 = v18[4];
    if ( v20 >= v21 )
      goto LABEL_5;
    while ( 1 )
    {
      v22 = (_QWORD *)v18[2];
      v23 = 1;
      if ( !v22 )
        break;
      while ( 1 )
      {
        v18 = v22;
        v21 = v22[4];
        if ( v20 < v21 )
          break;
LABEL_5:
        v22 = (_QWORD *)v18[3];
        v23 = 0;
        if ( !v22 )
          goto LABEL_6;
      }
    }
LABEL_6:
    if ( !v23 )
    {
      if ( v20 <= v21 )
        goto LABEL_8;
      goto LABEL_21;
    }
  }
  else
  {
    v18 = a1 + 1;
  }
  if ( (_QWORD *)a1[3] != v18 )
  {
    v27 = sub_49F750(v18);
    if ( *(_QWORD *)(v27 + 32) >= v5[4] )
    {
      v18 = (_QWORD *)v27;
      if ( !v13 )
        goto LABEL_10;
      goto LABEL_9;
    }
  }
  if ( !v18 )
  {
LABEL_8:
    if ( !v13 )
    {
LABEL_10:
      if ( v15 )
      {
        v5[20] = 0;
        j__free(v15);
      }
      sub_40D410((__int64)(v5 + 13), (_QWORD *)v5[15]);
      v24 = (void *)v5[10];
      if ( v24 )
      {
        v5[11] = 0;
        j__free(v24);
      }
      v25 = (void *)v5[7];
      if ( v25 )
      {
        v5[8] = 0;
        j__free(v25);
      }
      j__free_0(v5);
      return v18;
    }
LABEL_9:
    v5[23] = 0;
    j__free(v13);
    v15 = (void *)v5[19];
    goto LABEL_10;
  }
LABEL_21:
  v28 = 1;
  if ( a1 + 1 != v18 )
    v28 = v5[4] < v18[4];
  sub_49F830(v28, (__int64)v5, v18, a1 + 1);
  ++a1[5];
  return v5;
}
// 49F750: using guessed type __int64 __fastcall sub_49F750(_QWORD);
