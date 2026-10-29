/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140060710
// Address: 0x0000000140060710

//----- (0000000140060710) ----------------------------------------------------
__int64 __fastcall sub_140060710(__int64 a1, unsigned __int8 *a2, int a3, _WORD *a4, _DWORD *a5)
{
  int v5; // r11d
  __int16 v8; // cx
  __int16 v9; // ax
  int v10; // eax
  int v11; // eax
  __int16 v12; // cx
  __int16 v13; // ax

  v5 = *(_DWORD *)a1 ^ 1;
  if ( (*(_BYTE *)(a1 + 40) & 2) == 0 )
    v5 = *(_DWORD *)a1;
  if ( a3 < 2 )
    goto LABEL_4;
  if ( v5 == 1200 )
  {
    v8 = a2[1];
    v9 = *a2;
LABEL_9:
    *a4 = v9 | (v8 << 8);
    goto LABEL_10;
  }
  if ( v5 == 1201 )
  {
    v8 = *a2;
    v9 = a2[1];
    goto LABEL_9;
  }
LABEL_10:
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 40);
    if ( (v10 & 1) == 0 )
    {
      v11 = v10 | 1;
      *(_DWORD *)(a1 + 40) = v11;
      if ( *a4 == 0xFFFE )
      {
        *(_DWORD *)(a1 + 40) = v11 | 2;
LABEL_14:
        *a5 = 0;
        return 2;
      }
      if ( *a4 == 0xFEFF )
        goto LABEL_14;
    }
  }
  if ( (unsigned __int16)(*a4 + 9216) <= 0x3FFu )
    goto LABEL_17;
  if ( (unsigned __int16)(*a4 + 10240) > 0x3FFu )
  {
    *a5 = 1;
    return 2;
  }
  if ( a3 < 4 )
  {
LABEL_4:
    *errno() = 22;
    return 0xFFFFFFFFLL;
  }
  if ( v5 == 1200 )
  {
    v12 = a2[3];
    v13 = a2[2];
LABEL_24:
    a4[1] = v13 | (v12 << 8);
    goto LABEL_25;
  }
  if ( v5 == 1201 )
  {
    v12 = a2[2];
    v13 = a2[3];
    goto LABEL_24;
  }
LABEL_25:
  if ( (unsigned __int16)(a4[1] + 9216) > 0x3FFu )
  {
LABEL_17:
    *errno() = 42;
    return 0xFFFFFFFFLL;
  }
  *a5 = 2;
  return 4;
}
