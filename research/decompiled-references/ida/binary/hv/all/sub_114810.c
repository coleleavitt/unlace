unsigned __int64 __fastcall sub_114810(
        unsigned __int8 *a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int *a5,
        unsigned __int8 *a6,
        unsigned __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v15; // r14
  __int64 v16; // rdi
  unsigned int v17; // ecx
  unsigned __int8 *v18; // rdx
  __int64 v19; // rsi
  unsigned __int8 *v20; // rdx
  unsigned int v21; // ecx
  unsigned int v22; // edi
  unsigned int v23; // esi
  unsigned int v24; // r8d
  unsigned int v25; // esi
  unsigned int v26; // edx

  result = -72;
  if ( a7 )
  {
    v11 = *a6;
    if ( v11 > 0x7F )
    {
      result = v11 - 127;
      v15 = ((v11 - 126) >> 1) + 1;
      if ( a7 < v15 )
        return -72;
      v16 = 0;
      v17 = 0;
      if ( a2 <= result )
        return -20;
      do
      {
        v18 = &a6[(v17 >> 1) + 1];
        a1[v16] = *v18 >> 4;
        a1[v17 + 1] = *v18 & 0xF;
        v17 += 2;
        v16 = v17;
      }
      while ( result > v17 );
      *(_DWORD *)(a3 + 48) = 0;
      *(_OWORD *)a3 = 0;
      *(_OWORD *)(a3 + 16) = 0;
      *(_OWORD *)(a3 + 32) = 0;
LABEL_7:
      v19 = *a1;
      if ( (unsigned __int8)v19 <= 0xCu )
      {
        v20 = a1;
        v21 = 0;
        v22 = 0;
        while ( 1 )
        {
          ++*(_DWORD *)(a3 + 4 * v19);
          ++v21;
          v22 += 1 << *v20 >> 1;
          if ( result <= v21 )
            break;
          v20 = &a1[v21];
          v19 = *v20;
          if ( (unsigned __int8)v19 > 0xCu )
            return -20;
        }
        if ( v22 )
        {
          v23 = 32 - __lzcnt(v22);
          if ( v23 <= 0xC )
          {
            *a5 = v23;
            v24 = (1 << v23) - v22;
            v25 = __lzcnt(v24);
            if ( v24 == 0x80000000 >> v25 )
            {
              a1[result] = 32 - v25;
              ++*(_DWORD *)(a3 + 4LL * (32 - v25));
              v26 = *(_DWORD *)(a3 + 4);
              if ( v26 > 1 && (v26 & 1) == 0 )
              {
                *a4 = result + 1;
                return v15;
              }
            }
          }
        }
      }
      return -20;
    }
    v15 = v11 + 1;
    if ( a7 >= v11 + 1 )
    {
      result = sub_1165A0((_DWORD)a1, (int)a2 - 1, (int)a6 + 1, v11, 6, a8, a9, 1);
      if ( result <= 0xFFFFFFFFFFFFFF88LL )
      {
        *(_DWORD *)(a3 + 48) = 0;
        *(_OWORD *)a3 = 0;
        *(_OWORD *)(a3 + 16) = 0;
        *(_OWORD *)(a3 + 32) = 0;
        if ( !result )
          return -20;
        goto LABEL_7;
      }
    }
  }
  return result;
}

