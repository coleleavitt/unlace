__int64 __fastcall sub_9367A0(unsigned __int8 *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // edx
  unsigned int v8; // esi
  char v9; // cl
  unsigned int v10; // esi

  result = 2048;
  if ( *(_DWORD *)(a2 + 96) != 2 )
  {
    result = 1536;
    if ( *(_DWORD *)(a2 + 80) != 1 )
    {
      v5 = *(_DWORD *)(a2 + 64);
      v6 = v5 - 256;
      v7 = *(_DWORD *)(*(_QWORD *)a2 + 4LL * *a1) + 1;
      _BitScanReverse(&v8, v7);
      v9 = 31 - (v8 ^ 0x1F);
      v10 = (31 - (v8 ^ 0x1F)) << 8;
      if ( a3 )
        v10 += v7 << 8 >> v9;
      if ( v6 > v10 )
        v6 = v10;
      return v5 - v6;
    }
  }
  return result;
}

