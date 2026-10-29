__int64 __fastcall sub_F8370(unsigned int a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  int v4; // r8d
  int v5; // edi
  int v6; // eax
  int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // r8d
  char v10; // cl
  unsigned int v11; // r8d
  __int64 result; // rax
  unsigned int v13; // edi
  unsigned int v14; // eax
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // edi

  if ( *(_DWORD *)(a2 + 80) == 1 )
  {
    v13 = a1 + 1;
    _BitScanReverse(&v14, v13);
    v15 = 31 - (v14 ^ 0x1F);
    result = (31 - (v14 ^ 0x1F)) << 8;
    if ( a3 )
      return (v13 << 8 >> v15) + (unsigned int)result;
  }
  else
  {
    if ( a1 == (_DWORD)&loc_20000 )
    {
      v3 = 140;
      v4 = 4096;
      v5 = 256;
    }
    else
    {
      if ( a1 > 0x3F )
      {
        _BitScanReverse(&a1, a1);
        v17 = 50 - (a1 ^ 0x1F);
        v18 = *((unsigned __int8 *)qword_1361C0 + v17);
        v3 = 4 * v17;
        v4 = v18 << 8;
      }
      else
      {
        v16 = *((unsigned __int8 *)qword_136140 + a1);
        v3 = 4 * v16;
        v4 = *((unsigned __int8 *)qword_1361C0 + v16) << 8;
      }
      v5 = 0;
    }
    v6 = *(_DWORD *)(a2 + 68);
    v7 = v4 + v5;
    v8 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + v3) + 1;
    _BitScanReverse(&v9, v8);
    v10 = 31 - (v9 ^ 0x1F);
    v11 = (31 - (v9 ^ 0x1F)) << 8;
    if ( a3 )
      v11 += v8 << 8 >> v10;
    return v7 + v6 - v11;
  }
  return result;
}

