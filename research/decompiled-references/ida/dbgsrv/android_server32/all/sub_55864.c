/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55864
// Address: 0x00055864

//----- (00055864) --------------------------------------------------------
int __fastcall sub_55864(int a1, int a2, _DWORD *a3)
{
  _BYTE *v5; // r5
  int v6; // r7
  int v7; // r0
  int v8; // r7
  int v9; // r1
  int v10; // r0
  int v11; // r2
  int v12; // r0
  int v15; // [sp+10h] [bp-8h] BYREF

  v5 = (_BYTE *)(a1 + 164);
  if ( *(_BYTE *)(a1 + 164) )
    goto LABEL_10;
  while ( 1 )
  {
    v6 = sub_50294((_DWORD *)a1, &v15);
    v7 = v15;
    if ( v15 )
      break;
    while ( 1 )
    {
      v12 = *(_DWORD *)(a1 + 32);
      if ( !v12 )
        break;
      v9 = v12 - 1;
      v10 = *(_DWORD *)(a1 + 28) + 28 * (v12 - 1);
      *(_DWORD *)a1 = *(_DWORD *)(v10 + 12);
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(v10 + 16);
      v11 = *(_DWORD *)(v10 + 24);
      *(_DWORD *)(a1 + 32) = v9;
      *(_DWORD *)(a1 + 40) = v11;
      sub_1B3BC((char **)v10);
    }
    *(_DWORD *)a1 = v6;
    *(_DWORD *)(a1 + 4) = v6;
    *v5 = 1;
LABEL_10:
    v8 = 0;
    v7 = sub_51A0C(a1, a2, 0, a3);
    if ( !v7 && *(_DWORD *)(a1 + 32) )
      v7 = sub_52528((char **)a1, a2);
    v15 = v7;
    if ( v7 )
      return set_qerrno(v7);
    if ( *(_WORD *)(a2 + 12) == 1 )
    {
      *v5 = 0;
    }
    else if ( *v5 )
    {
      return v8;
    }
  }
  if ( v15 == 34 )
  {
LABEL_6:
    *(_WORD *)(a2 + 12) = 1;
    return 0;
  }
  if ( v15 == -1 )
  {
    v15 = 34;
    goto LABEL_6;
  }
  return set_qerrno(v7);
}
