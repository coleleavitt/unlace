/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4592C0
// Address: 0x004592C0

//----- (004592C0) --------------------------------------------------------
int __cdecl sub_4592C0(int a1, unsigned __int8 *a2, int a3, _WORD *a4, _DWORD *a5)
{
  int v5; // edi
  __int16 v7; // cx
  __int16 v8; // ax
  int v9; // eax
  int v10; // eax
  __int16 v11; // cx
  __int16 v12; // ax

  v5 = *(_DWORD *)a1 ^ 1;
  if ( (*(_BYTE *)(a1 + 24) & 2) == 0 )
    v5 = *(_DWORD *)a1;
  if ( a3 < 2 )
    goto LABEL_4;
  if ( v5 == 1200 )
  {
    v7 = a2[1];
    v8 = *a2;
LABEL_9:
    *a4 = v8 | (v7 << 8);
    goto LABEL_10;
  }
  if ( v5 == 1201 )
  {
    v7 = *a2;
    v8 = a2[1];
    goto LABEL_9;
  }
LABEL_10:
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 24);
    if ( (v9 & 1) == 0 )
    {
      v10 = v9 | 1;
      *(_DWORD *)(a1 + 24) = v10;
      if ( *a4 == 0xFFFE )
      {
        *(_DWORD *)(a1 + 24) = v10 | 2;
LABEL_14:
        *a5 = 0;
        return 2;
      }
      if ( *a4 == 0xFEFF )
        goto LABEL_14;
    }
  }
  if ( (unsigned __int16)(*a4 + 9216) <= 0x3FFu )
  {
LABEL_26:
    *sub_46B984() = 42;
    return -1;
  }
  if ( (unsigned __int16)(*a4 + 10240) <= 0x3FFu )
  {
    if ( a3 < 4 )
    {
LABEL_4:
      *sub_46B984() = 22;
      return -1;
    }
    if ( v5 == 1200 )
    {
      v11 = a2[3];
      v12 = a2[2];
    }
    else
    {
      if ( v5 != 1201 )
        goto LABEL_24;
      v11 = a2[2];
      v12 = a2[3];
    }
    a4[1] = v12 | (v11 << 8);
LABEL_24:
    if ( (unsigned __int16)(a4[1] + 9216) <= 0x3FFu )
    {
      *a5 = 2;
      return 4;
    }
    goto LABEL_26;
  }
  *a5 = 1;
  return 2;
}
