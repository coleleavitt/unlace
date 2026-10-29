/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BF9C
// Address: 0x0008BF9C

//----- (0008BF9C) --------------------------------------------------------
void __fastcall sub_8BF9C(int a1, int a2, int a3, int a4)
{
  _BYTE *v4; // r7
  int v5; // r8
  size_t v8; // r6
  size_t v9; // r2
  _BYTE *v10; // r1
  size_t v11; // r3
  size_t v12; // [sp+4h] [bp-1Ch] BYREF

  if ( a1 != a2 )
  {
    v5 = a1 + 8;
    v4 = *(_BYTE **)a1;
    v8 = *(_DWORD *)(a2 + 4);
    if ( a1 + 8 == *(_DWORD *)a1 )
      v9 = 15;
    else
      v9 = *(_DWORD *)(a1 + 8);
    if ( v9 < v8 )
    {
      v12 = *(_DWORD *)(a2 + 4);
      v4 = sub_8BDDC(a1, &v12, v9, a4);
      if ( v5 != *(_DWORD *)a1 )
        sub_809EC(*(void **)a1);
      v11 = v12;
      *(_DWORD *)a1 = v4;
      *(_DWORD *)(a1 + 8) = v11;
      if ( !v8 )
        goto LABEL_10;
    }
    else if ( !v8 )
    {
LABEL_10:
      *(_DWORD *)(a1 + 4) = v8;
      v4[v8] = 0;
      return;
    }
    v10 = *(_BYTE **)a2;
    if ( v8 == 1 )
      *v4 = *v10;
    else
      memcpy(v4, v10, v8);
    v4 = *(_BYTE **)a1;
    goto LABEL_10;
  }
}
