/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001B3B0
// Address: 0x000000010001B3B0

//----- (000000010001B3B0) ----------------------------------------------------
bool __fastcall sub_10001B3B0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  char v3; // al
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned __int8 v7; // r12
  unsigned int v8; // r13d
  int v9; // ecx
  bool v10; // cf
  unsigned __int16 v11; // [rsp+Ch] [rbp-34h] BYREF
  unsigned __int8 v12; // [rsp+Fh] [rbp-31h] BYREF

  if ( qlread(a2, &v11, 2) == 2 )
  {
    v2 = v11;
    v3 = v11 & 0x1F;
    *(_BYTE *)a1 = v11 & 0x1F;
    if ( v3 != 31 )
    {
      v5 = v2 >> 8;
      *(_BYTE *)(a1 + 1) = (v2 & 0x20) != 0;
      *(_BYTE *)(a1 + 2) = (unsigned __int8)v2 >> 6;
      if ( (v2 & 0x8000u) != 0 )
      {
        v7 = BYTE1(v2) & 0x7F;
        if ( (unsigned __int8)((BYTE1(v2) & 0x7F) - 5) < 0xFCu )
          return 0;
        *(_DWORD *)(a1 + 4) = 0;
        if ( qlread(a2, &v12, 1) != 1 )
          return 0;
        v8 = 0;
        while ( 1 )
        {
          v5 = *(_DWORD *)(a1 + 4) | v12;
          *(_DWORD *)(a1 + 4) = v5;
          if ( v7 - 1 == v8 )
            break;
          *(_DWORD *)(a1 + 4) = v5 << 8;
          ++v8;
          if ( qlread(a2, &v12, 1) != 1 )
          {
            if ( v8 < v7 )
              return 0;
            v5 = *(_DWORD *)(a1 + 4);
            break;
          }
        }
        v9 = (unsigned __int8)(v7 + 2);
        v10 = __CFADD__(v5, v9);
        v6 = v5 + v9;
        if ( v10 )
          return 0;
      }
      else
      {
        *(_DWORD *)(a1 + 4) = v5;
        v6 = v5 + 2;
        v7 = 1;
      }
      *(_DWORD *)(a1 + 8) = v6;
      *(_BYTE *)(a1 + 12) = v7;
      return v5 != 0;
    }
  }
  return 0;
}
