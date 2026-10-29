/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F548
// Address: 0x000000000040F548

//----- (000000000040F548) ----------------------------------------------------
_QWORD *__fastcall sub_40F548(_QWORD *a1, int *a2)
{
  _QWORD *v4; // x0
  int v5; // w3
  void *v6; // x23
  _QWORD *v7; // x20
  int v8; // w21
  int v9; // w10
  int v10; // w11
  char v11; // w9
  char v12; // w7
  char v13; // w6
  int v14; // w8
  int v15; // w5
  __int64 v16; // x2
  __int64 v17; // x3
  _QWORD *v18; // x19
  int v19; // w4
  __int64 v20; // x1
  int v21; // w0
  _QWORD *v22; // x2
  char v24; // w0
  __int64 v25; // x0

  v4 = sub_49E050(0x60u);
  v5 = a2[2];
  v6 = *((void **)a2 + 5);
  v4[9] = v6;
  v7 = v4;
  v8 = *a2;
  *((_DWORD *)v4 + 8) = *a2;
  v10 = a2[3];
  v9 = a2[4];
  *((_DWORD *)v4 + 10) = v5;
  *((_DWORD *)v4 + 11) = v10;
  v11 = *((_BYTE *)a2 + 24);
  v12 = *((_BYTE *)a2 + 32);
  v13 = *((_BYTE *)a2 + 33);
  v14 = a2[7];
  v15 = a2[9];
  *((_DWORD *)v4 + 13) = a2[5];
  v16 = *((_QWORD *)a2 + 7);
  v17 = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 5) = 0;
  *((_QWORD *)a2 + 6) = 0;
  *((_QWORD *)a2 + 7) = 0;
  *((_DWORD *)v4 + 12) = v9;
  v18 = (_QWORD *)a1[2];
  *((_BYTE *)v4 + 56) = v11;
  *((_DWORD *)v4 + 15) = v14;
  *((_BYTE *)v4 + 64) = v12;
  *((_BYTE *)v4 + 65) = v13;
  *((_DWORD *)v4 + 17) = v15;
  v4[10] = v17;
  v4[11] = v16;
  if ( v18 )
  {
    v19 = *((_DWORD *)v18 + 8);
    if ( v19 <= v8 )
      goto LABEL_5;
    while ( 1 )
    {
      v20 = v18[2];
      v21 = 1;
      if ( !v20 )
        break;
      while ( 1 )
      {
        v18 = (_QWORD *)v20;
        v19 = *(_DWORD *)(v20 + 32);
        if ( v19 > v8 )
          break;
LABEL_5:
        v20 = v18[3];
        v21 = 0;
        if ( !v20 )
          goto LABEL_6;
      }
    }
LABEL_6:
    v22 = v18;
    if ( !v21 )
      goto LABEL_7;
  }
  else
  {
    v18 = a1 + 1;
  }
  if ( (_QWORD *)a1[3] == v18 )
  {
    v22 = v18;
    goto LABEL_14;
  }
  v25 = sub_49F750(v18);
  v22 = v18;
  v19 = *(_DWORD *)(v25 + 32);
  v18 = (_QWORD *)v25;
LABEL_7:
  if ( v19 >= v8 )
  {
    if ( !v6 )
    {
LABEL_10:
      j__free_0(v7);
      return v18;
    }
LABEL_9:
    v7[10] = 0;
    j__free(v6);
    goto LABEL_10;
  }
LABEL_14:
  if ( !v22 )
  {
    v18 = nullptr;
    if ( !v6 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v24 = 1;
  if ( a1 + 1 != v22 )
    v24 = v8 < *((_DWORD *)v22 + 8);
  sub_49F830(v24, (__int64)v7, v22, a1 + 1);
  ++a1[5];
  return v7;
}
// 49F750: using guessed type __int64 __fastcall sub_49F750(_QWORD);
