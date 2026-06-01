__int64 __fastcall sub_B3FAF0(__int64 a1)
{
  int v1; // ecx
  int v2; // edx
  __int64 result; // rax
  __int64 v4; // rbp
  unsigned int *v6; // rdi
  unsigned __int8 v7; // [rsp+1h] [rbp-29h]
  void *v8; // [rsp+2h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+Ah] [rbp-20h]
  char v10; // [rsp+Eh] [rbp-1Ch]

  v1 = **(_DWORD **)(a1 + 32) >> 14;
  v2 = (**(_DWORD **)(a1 + 24) >> 14) & 0x1E;
  result = v2 | v1 & 0x1F | 2u;
  if ( (v1 & 0xE) == 0 )
    result = v1 & 0x1F;
  if ( (*(_DWORD *)(a1 + 4) & 0x7FFFFFFF) == 0 || *(char *)(a1 + 7) >= 0 )
    return v2 | (unsigned int)result | 2;
  if ( (v1 & 2) == 0 )
  {
    v4 = 0x800000020LL;
    if ( (*(_DWORD *)a1 & 0x8000) == 0 )
    {
      v7 = result;
      sub_BD3D10(&v8);
      LODWORD(result) = v7;
      if ( v10 )
      {
        v6 = (unsigned int *)v8;
        if ( v9 <= 0x40 )
        {
          v4 = 8LL * (unsigned int)v8 + 40;
          return (**(_DWORD **)(a1 + v4) >> 14) & 0x1F | (unsigned int)result;
        }
      }
      else
      {
        v6 = (unsigned int *)v8;
        if ( v9 <= 0x40 )
        {
          v4 = 40;
          if ( v9 )
            v4 = 8LL * (unsigned int)((__int64)((_QWORD)v8 << (64 - (unsigned __int8)v9)) >> (64 - (unsigned __int8)v9))
               + 40;
          return (**(_DWORD **)(a1 + v4) >> 14) & 0x1F | (unsigned int)result;
        }
      }
      v4 = 8LL * *v6 + 40;
      operator delete[](v6);
      LODWORD(result) = v7;
    }
    return (**(_DWORD **)(a1 + v4) >> 14) & 0x1F | (unsigned int)result;
  }
  return result;
}

