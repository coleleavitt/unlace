/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001881C
// Address: 0x000000010001881C

//----- (000000010001881C) ----------------------------------------------------
bool __fastcall sub_10001881C(__int64 a1, __int64 a2)
{
  unsigned int v4; // w8
  int v5; // w9
  int v7; // w8
  int v8; // w9
  unsigned int v9; // w21
  unsigned int v10; // w22
  unsigned __int16 v11; // [xsp+4h] [xbp-3Ch] BYREF
  unsigned __int8 v12; // [xsp+7h] [xbp-39h] BYREF

  if ( qlread(a2, &v11, 2u) != 2 )
    return 0;
  v4 = v11;
  v5 = v11 & 0x1F;
  *(_BYTE *)a1 = v11 & 0x1F;
  if ( v5 == 31 )
    return 0;
  *(_BYTE *)(a1 + 1) = (v4 & 0x20) != 0;
  *(_BYTE *)(a1 + 2) = (unsigned __int8)v4 >> 6;
  if ( (v4 & 0x8000) != 0 )
  {
    v9 = (v4 >> 8) & 0x7F;
    if ( v9 - 5 < 0xFFFFFFFC )
      return 0;
    *(_DWORD *)(a1 + 4) = 0;
    if ( qlread(a2, &v12, 1u) != 1 )
      return 0;
    v10 = 0;
    while ( 1 )
    {
      v7 = *(_DWORD *)(a1 + 4) | v12;
      *(_DWORD *)(a1 + 4) = v7;
      if ( v9 - 1 == v10 )
        break;
      *(_DWORD *)(a1 + 4) = v7 << 8;
      ++v10;
      if ( qlread(a2, &v12, 1u) != 1 )
      {
        if ( v10 < v9 )
          return 0;
        v7 = *(_DWORD *)(a1 + 4);
        break;
      }
    }
    if ( __CFADD__(v7, v9 + 2) )
      return 0;
    v8 = v7 + v9 + 2;
  }
  else
  {
    v7 = v4 >> 8;
    *(_DWORD *)(a1 + 4) = v7;
    v8 = v7 + 2;
    LOBYTE(v9) = 1;
  }
  *(_DWORD *)(a1 + 8) = v8;
  *(_BYTE *)(a1 + 12) = v9;
  return v7 != 0;
}
