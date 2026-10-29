unsigned __int64 __fastcall sub_900A50(
        unsigned __int8 *a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int *a5,
        unsigned __int8 *a6,
        unsigned __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v16; // r14
  __int64 v17; // rdi
  unsigned int v18; // ecx
  unsigned __int8 *v19; // rsi
  __int64 v20; // rsi
  unsigned __int8 *v21; // r9
  unsigned int v22; // edi
  unsigned int v23; // r8d
  unsigned int v24; // ecx
  unsigned int v25; // edi
  char v26; // cl
  unsigned int v27; // r10d
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // edx

  if ( (a10 & 1) != 0 )
    return sub_9001D0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  result = -72;
  if ( a7 )
  {
    v13 = *a6;
    if ( v13 > 0x7F )
    {
      result = v13 - 127;
      v16 = ((v13 - 126) >> 1) + 1;
      if ( a7 < v16 )
        return -72;
      v17 = 0;
      v18 = 0;
      if ( a2 <= result )
        return -20;
      do
      {
        v19 = &a6[(v18 >> 1) + 1];
        a1[v17] = *v19 >> 4;
        a1[v18 + 1] = *v19 & 0xF;
        v18 += 2;
        v17 = v18;
      }
      while ( result > v18 );
      *(_DWORD *)(a3 + 48) = 0;
      *(_OWORD *)a3 = 0;
      *(_OWORD *)(a3 + 16) = 0;
      *(_OWORD *)(a3 + 32) = 0;
LABEL_11:
      v20 = *a1;
      if ( (unsigned __int8)v20 <= 0xCu )
      {
        v21 = a1;
        v22 = 0;
        v23 = 0;
        while ( 1 )
        {
          ++*(_DWORD *)(a3 + 4 * v20);
          ++v22;
          v23 += 1 << *v21 >> 1;
          if ( result <= v22 )
            break;
          v21 = &a1[v22];
          v20 = *v21;
          if ( (unsigned __int8)v20 > 0xCu )
            return -20;
        }
        if ( v23 )
        {
          _BitScanReverse(&v24, v23);
          v25 = 32 - (v24 ^ 0x1F);
          v26 = 32 - (v24 ^ 0x1F);
          if ( v25 <= 0xC )
          {
            *a5 = v25;
            v27 = (1 << v26) - v23;
            _BitScanReverse(&v28, v27);
            v29 = v28 ^ 0x1F;
            if ( v27 == 0x80000000 >> v29 )
            {
              a1[result] = 32 - v29;
              ++*(_DWORD *)(a3 + 4LL * (32 - v29));
              v30 = *(_DWORD *)(a3 + 4);
              if ( v30 > 1 && (v30 & 1) == 0 )
              {
                *a4 = result + 1;
                return v16;
              }
            }
          }
        }
      }
      return -20;
    }
    v16 = v13 + 1;
    if ( a7 >= v13 + 1 )
    {
      result = sub_901F60((_DWORD)a1, (int)a2 - 1, (int)a6 + 1, v13, 6, a8, a9, 0);
      if ( result <= 0xFFFFFFFFFFFFFF88LL )
      {
        *(_DWORD *)(a3 + 48) = 0;
        *(_OWORD *)a3 = 0;
        *(_OWORD *)(a3 + 16) = 0;
        *(_OWORD *)(a3 + 32) = 0;
        if ( !result )
          return -20;
        goto LABEL_11;
      }
    }
  }
  return result;
}
