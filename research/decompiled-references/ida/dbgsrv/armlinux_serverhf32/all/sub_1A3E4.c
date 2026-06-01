/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A3E4
// Address: 0x0001A3E4

//----- (0001A3E4) --------------------------------------------------------
int __fastcall sub_1A3E4(int a1, _DWORD *a2, int *a3)
{
  _DWORD *v6; // r0
  int v7; // r2
  _DWORD *v8; // r6
  __int64 v9; // r0
  void *v10; // r9
  int v11; // r2
  int v12; // r3
  int v13; // r2
  int v14; // r3
  _DWORD *v15; // r4
  int v16; // r3
  int v17; // r5
  int v18; // r1
  _DWORD *v19; // r3
  int v20; // r2
  _DWORD *v21; // r2
  _BOOL4 v23; // r0
  int v24; // r3
  int v25; // r0

  v6 = sub_805CC(0x40u);
  v7 = a3[1];
  v8 = v6;
  v9 = *((_QWORD *)a3 + 5);
  a3[10] = 0;
  a3[11] = 0;
  v10 = (void *)a3[9];
  v8[5] = v7;
  a3[9] = 0;
  v11 = a3[2];
  v12 = a3[3];
  *((_QWORD *)v8 + 7) = v9;
  v8[6] = v11;
  BYTE4(v9) = *((_BYTE *)a3 + 20);
  v13 = a3[4];
  v8[7] = v12;
  v14 = a3[6];
  v15 = (_DWORD *)a2[2];
  v8[8] = v13;
  *((_BYTE *)v8 + 36) = BYTE4(v9);
  LOBYTE(v13) = *((_BYTE *)a3 + 29);
  BYTE4(v9) = *((_BYTE *)a3 + 28);
  v8[10] = v14;
  v16 = a3[8];
  v17 = *a3;
  *((_BYTE *)v8 + 44) = BYTE4(v9);
  *((_BYTE *)v8 + 45) = v13;
  v8[12] = v16;
  v8[13] = v10;
  v8[4] = v17;
  if ( v15 )
  {
    while ( 1 )
    {
      v18 = v15[4];
      if ( v18 <= v17 )
      {
        v19 = (_DWORD *)v15[3];
        v20 = 0;
      }
      else
      {
        v19 = (_DWORD *)v15[2];
        v20 = 1;
      }
      if ( !v19 )
        break;
      v15 = v19;
    }
    if ( !v20 )
    {
      v21 = v15;
      goto LABEL_10;
    }
  }
  else
  {
    v15 = a2 + 1;
  }
  v21 = (_DWORD *)a2[3];
  if ( v21 == v15 )
    goto LABEL_15;
  v25 = sub_812CC(v15);
  v21 = v15;
  v18 = *(_DWORD *)(v25 + 16);
  v15 = (_DWORD *)v25;
LABEL_10:
  if ( v18 >= v17 )
  {
    if ( !v10 )
    {
LABEL_13:
      sub_80648(v8);
      *(_DWORD *)a1 = v15;
      *(_BYTE *)(a1 + 4) = 0;
      return a1;
    }
LABEL_12:
    v8[14] = 0;
    sub_77E08(v10);
    goto LABEL_13;
  }
LABEL_15:
  if ( !v21 )
  {
    v15 = nullptr;
    if ( !v10 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v23 = a2 + 1 == v21 || v17 < v21[4];
  sub_8132C((_DWORD *)v23, v8, v21, a2 + 1);
  v24 = a2[5];
  *(_DWORD *)a1 = v8;
  *(_BYTE *)(a1 + 4) = 1;
  a2[5] = v24 + 1;
  return a1;
}
// 812CC: using guessed type int __fastcall sub_812CC(_DWORD);
