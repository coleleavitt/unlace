/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A328
// Address: 0x0001A328

//----- (0001A328) --------------------------------------------------------
int __fastcall sub_1A328(int a1, _DWORD *a2, int *a3)
{
  _DWORD *v6; // r5
  int v7; // r7
  int v8; // r0
  int v9; // r2
  int v10; // r7
  int v11; // r2
  int v12; // r7
  int v13; // r2
  int v14; // r7
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r7
  void *v19; // r10
  int v20; // r0
  int v21; // r1
  _DWORD *v22; // r4
  unsigned int v23; // r0
  unsigned int v24; // r1
  _DWORD *v25; // r3
  int v26; // r2
  _DWORD *v27; // r2
  void *v28; // r0
  void *v29; // r0
  void *v30; // r0
  _BOOL4 v32; // r0
  int v33; // r3
  int v34; // r0

  v6 = sub_808A4(0x68u);
  v7 = a3[1];
  v8 = *a3;
  v6[6] = a3[2];
  v9 = a3[4];
  v6[5] = v7;
  v10 = a3[3];
  v6[8] = v9;
  v11 = a3[6];
  v6[7] = v10;
  v12 = a3[5];
  v6[10] = v11;
  v13 = a3[8];
  v6[9] = v12;
  v14 = a3[7];
  a3[3] = 0;
  a3[4] = 0;
  a3[5] = 0;
  a3[6] = 0;
  a3[7] = 0;
  a3[8] = 0;
  v6[4] = v8;
  v6[11] = v14;
  v6[12] = v13;
  sub_17114(v6 + 14, a3 + 10);
  v15 = a3[15];
  v16 = a3[16];
  v17 = a3[17];
  v18 = a3[19];
  v19 = (void *)a3[18];
  a3[15] = 0;
  a3[16] = 0;
  a3[17] = 0;
  a3[19] = 0;
  v6[19] = v15;
  v6[20] = v16;
  v20 = a3[20];
  v21 = a3[21];
  a3[20] = 0;
  a3[18] = 0;
  v22 = (_DWORD *)a2[2];
  v6[23] = v18;
  v6[21] = v17;
  v6[24] = v20;
  v6[22] = v19;
  v6[25] = v21;
  if ( v22 )
  {
    v23 = v6[4];
    while ( 1 )
    {
      v24 = v22[4];
      if ( v23 >= v24 )
      {
        v25 = (_DWORD *)v22[3];
        v26 = 0;
      }
      else
      {
        v25 = (_DWORD *)v22[2];
        v26 = 1;
      }
      if ( !v25 )
        break;
      v22 = v25;
    }
    if ( !v26 )
    {
      v27 = v22;
      goto LABEL_10;
    }
  }
  else
  {
    v22 = a2 + 1;
  }
  v27 = (_DWORD *)a2[3];
  if ( v27 == v22 )
  {
LABEL_22:
    if ( v27 )
    {
      v32 = a2 + 1 == v27 || v6[4] < v27[4];
      sub_814DC((_DWORD *)v32, v6, v27, a2 + 1);
      v33 = a2[5];
      *(_DWORD *)a1 = v6;
      *(_BYTE *)(a1 + 4) = 1;
      a2[5] = v33 + 1;
      return a1;
    }
    v22 = nullptr;
    if ( v19 )
      goto LABEL_12;
    goto LABEL_13;
  }
  v34 = sub_8147C(v22);
  v27 = v22;
  v24 = *(_DWORD *)(v34 + 16);
  v22 = (_DWORD *)v34;
  v23 = v6[4];
LABEL_10:
  if ( v24 < v23 )
    goto LABEL_22;
  if ( v19 )
  {
LABEL_12:
    v6[23] = 0;
    sub_77F70(v19);
  }
LABEL_13:
  v28 = (void *)v6[19];
  if ( v28 )
  {
    v6[20] = 0;
    sub_77F70(v28);
  }
  sub_18D00((int)(v6 + 13), (_DWORD *)v6[15]);
  v29 = (void *)v6[10];
  if ( v29 )
  {
    v6[11] = 0;
    sub_77F70(v29);
  }
  v30 = (void *)v6[7];
  if ( v30 )
  {
    v6[8] = 0;
    sub_77F70(v30);
  }
  sub_809EC(v6);
  *(_DWORD *)a1 = v22;
  *(_BYTE *)(a1 + 4) = 0;
  return a1;
}
// 8147C: using guessed type int __fastcall sub_8147C(_DWORD);
