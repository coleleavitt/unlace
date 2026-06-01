/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F1E4
// Address: 0x0006F1E4

//----- (0006F1E4) --------------------------------------------------------
int __fastcall sub_6F1E4(int a1, _DWORD *a2, __int64 *a3)
{
  _DWORD *v6; // r9
  _DWORD *v7; // r0
  _DWORD *v8; // r4
  _DWORD *v9; // r7
  __int64 v10; // kr00_8
  unsigned int v11; // r1
  int v12; // r0
  _DWORD *v13; // r2
  _DWORD *v14; // r2
  _BOOL4 v16; // r0
  int v17; // r3
  int v18; // r0

  v6 = a2 + 1;
  v7 = sub_808A4(0x18u);
  v8 = (_DWORD *)a2[2];
  v9 = v7;
  v10 = *a3;
  *((_QWORD *)v7 + 2) = *a3;
  if ( v8 )
  {
    while ( 1 )
    {
      v11 = v8[4];
      v12 = 1;
      if ( (unsigned int)v10 >= v11 )
      {
        v12 = 0;
        v13 = (_DWORD *)v8[3];
      }
      else
      {
        v13 = (_DWORD *)v8[2];
      }
      if ( !v13 )
        break;
      v8 = v13;
    }
    v14 = v8;
    if ( !v12 )
      goto LABEL_9;
  }
  else
  {
    v8 = v6;
  }
  v14 = (_DWORD *)a2[3];
  if ( v14 == v8 )
    goto LABEL_12;
  v18 = sub_8147C(v8);
  v14 = v8;
  v11 = *(_DWORD *)(v18 + 16);
  v8 = (_DWORD *)v18;
LABEL_9:
  if ( (unsigned int)v10 <= v11 )
  {
LABEL_10:
    sub_809EC(v9);
    *(_DWORD *)a1 = v8;
    *(_BYTE *)(a1 + 4) = 0;
    return a1;
  }
LABEL_12:
  if ( !v14 )
  {
    v8 = nullptr;
    goto LABEL_10;
  }
  v16 = v6 == v14 || (unsigned int)v10 < v14[4];
  sub_814DC((_DWORD *)v16, v9, v14, v6);
  v17 = a2[5];
  *(_DWORD *)a1 = v9;
  *(_BYTE *)(a1 + 4) = 1;
  a2[5] = v17 + 1;
  return a1;
}
// 8147C: using guessed type int __fastcall sub_8147C(_DWORD);
