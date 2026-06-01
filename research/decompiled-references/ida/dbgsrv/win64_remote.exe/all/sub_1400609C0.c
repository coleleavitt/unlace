/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400609C0
// Address: 0x00000001400609C0

//----- (00000001400609C0) ----------------------------------------------------
__int64 __fastcall sub_1400609C0(__int64 a1, unsigned __int8 *a2, int a3, _WORD *a4, _DWORD *a5)
{
  unsigned int v6; // ecx
  int v7; // r11d
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // r11d
  unsigned int v13; // ecx

  v6 = 55296;
  v7 = *(_DWORD *)(a1 + 40);
  v8 = *(_DWORD *)a1 ^ 1;
  if ( (v7 & 2) == 0 )
    v8 = *(_DWORD *)a1;
  if ( a3 < 4 )
  {
    *errno() = 22;
    return 0xFFFFFFFFLL;
  }
  if ( v8 == 12000 )
  {
    v9 = a2[1] | (*((unsigned __int16 *)a2 + 1) << 8);
    v10 = *a2;
LABEL_9:
    v6 = v10 | (v9 << 8);
    goto LABEL_10;
  }
  if ( v8 == 12001 )
  {
    v9 = a2[2] | ((a2[1] | (*a2 << 8)) << 8);
    v10 = a2[3];
    goto LABEL_9;
  }
LABEL_10:
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && (v7 & 1) == 0 )
  {
    v11 = v7 | 1;
    *(_DWORD *)(a1 + 40) = v11;
    if ( v6 == -131072 )
    {
      *(_DWORD *)(a1 + 40) = v11 | 2;
LABEL_14:
      *a5 = 0;
      return 4;
    }
    if ( v6 == 65279 )
      goto LABEL_14;
  }
  if ( v6 - 55296 <= 0x7FF || v6 >= 0x110000 )
  {
    *errno() = 42;
    return 0xFFFFFFFFLL;
  }
  if ( v6 >= 0x10000 )
  {
    v13 = v6 - 0x10000;
    a4[1] = v13 & 0x3FF | 0xDC00;
    *a4 = (v13 >> 10) & 0x3FF | 0xD800;
    *a5 = 2;
  }
  else
  {
    *a4 = v6;
    *a5 = 1;
  }
  return 4;
}
