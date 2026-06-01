/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_35134
// Address: 0x00035134

//----- (00035134) --------------------------------------------------------
int __fastcall sub_35134(int a1, _DWORD *a2, __int64 *a3)
{
  int v4; // r0
  _DWORD *v7; // r10
  __int64 v8; // r2
  __int64 v9; // r4
  int v10; // r12
  int v11; // r1
  int v12; // r8
  _BOOL4 v14; // r4
  _QWORD *v15; // r5
  int v16; // r3

  v4 = a2[2];
  v7 = a2 + 1;
  if ( v4 )
  {
    v8 = *a3;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v4 + 16);
      v10 = 1;
      if ( v8 >= v9 )
      {
        v10 = 0;
        v11 = *(_DWORD *)(v4 + 12);
      }
      else
      {
        v11 = *(_DWORD *)(v4 + 8);
      }
      if ( !v11 )
        break;
      v4 = v11;
    }
    v12 = v4;
    if ( !v10 )
      goto LABEL_9;
  }
  else
  {
    v4 = (int)(a2 + 1);
  }
  v12 = a2[3];
  if ( v12 == v4 )
    goto LABEL_13;
  v12 = v4;
  v4 = sub_8147C(v4);
  v8 = *a3;
  v9 = *(_QWORD *)(v4 + 16);
LABEL_9:
  if ( v9 >= v8 )
  {
LABEL_10:
    *(_DWORD *)a1 = v4;
    *(_BYTE *)(a1 + 4) = 0;
    return a1;
  }
LABEL_13:
  if ( !v12 )
  {
    v4 = 0;
    goto LABEL_10;
  }
  v14 = v7 == (_DWORD *)v12 || *a3 < *(_QWORD *)(v12 + 16);
  v15 = sub_808A4(0x18u);
  v15[2] = *a3;
  sub_814DC((_DWORD *)v14, v15, (_DWORD *)v12, v7);
  v16 = a2[5];
  *(_DWORD *)a1 = v15;
  *(_BYTE *)(a1 + 4) = 1;
  a2[5] = v16 + 1;
  return a1;
}
// 8147C: using guessed type int __fastcall sub_8147C(_DWORD);
