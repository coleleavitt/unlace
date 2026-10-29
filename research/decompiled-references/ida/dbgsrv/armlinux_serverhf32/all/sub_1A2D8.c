/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A2D8
// Address: 0x0001A2D8

//----- (0001A2D8) --------------------------------------------------------
int __fastcall sub_1A2D8(int a1, _DWORD *a2, unsigned int *a3)
{
  _DWORD *v4; // r0
  _DWORD *v7; // r9
  unsigned int v8; // r6
  unsigned int v9; // r4
  int v10; // r5
  _DWORD *v11; // r1
  _DWORD *v12; // r5
  _BOOL4 v14; // r4
  _DWORD *v15; // r6
  int v16; // r3

  v4 = (_DWORD *)a2[2];
  v7 = a2 + 1;
  if ( v4 )
  {
    v8 = *a3;
    while ( 1 )
    {
      v9 = v4[4];
      v10 = 1;
      if ( v8 >= v9 )
      {
        v10 = 0;
        v11 = (_DWORD *)v4[3];
      }
      else
      {
        v11 = (_DWORD *)v4[2];
      }
      if ( !v11 )
        break;
      v4 = v11;
    }
    if ( !v10 )
    {
      v12 = v4;
      goto LABEL_10;
    }
  }
  else
  {
    v4 = a2 + 1;
  }
  v12 = (_DWORD *)a2[3];
  if ( v12 == v4 )
    goto LABEL_14;
  v12 = v4;
  v4 = (_DWORD *)sub_812CC(v4);
  v8 = *a3;
  v9 = v4[4];
LABEL_10:
  if ( v9 >= v8 )
  {
LABEL_11:
    *(_DWORD *)a1 = v4;
    *(_BYTE *)(a1 + 4) = 0;
    return a1;
  }
LABEL_14:
  if ( !v12 )
  {
    v4 = nullptr;
    goto LABEL_11;
  }
  v14 = v7 == v12 || *a3 < v12[4];
  v15 = sub_805CC(0x14u);
  v15[4] = *a3;
  sub_8132C((_DWORD *)v14, v15, v12, v7);
  v16 = a2[5];
  *(_DWORD *)a1 = v15;
  *(_BYTE *)(a1 + 4) = 1;
  a2[5] = v16 + 1;
  return a1;
}
// 812CC: using guessed type int __fastcall sub_812CC(_DWORD);
