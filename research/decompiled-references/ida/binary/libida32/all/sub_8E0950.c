__int64 __fastcall sub_8E0950(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4, unsigned int a5, int a6)
{
  unsigned __int64 v6; // r10
  __int64 result; // rax
  unsigned int v9; // edx
  int v10; // ecx
  unsigned int v11; // eax
  __int16 v12; // r12
  int v13; // ebp
  int v14; // r13d
  unsigned __int64 v15; // r14
  unsigned int v16; // eax
  __int64 v17; // rdx
  _WORD *v18; // r9
  unsigned __int64 v19; // rdx
  int v20; // ecx
  int v21; // r15d
  __int16 *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // r11
  int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // ebp
  unsigned __int64 v29; // rax
  __int64 i; // rdx
  unsigned int v31; // r8d
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rax
  __int64 j; // rdx
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // r8
  unsigned int v39; // ecx
  unsigned int v40; // edx
  __int16 *v41; // rcx
  char v42; // [rsp+8h] [rbp-40h]
  unsigned int v43; // [rsp+Ch] [rbp-3Ch]
  int v44; // [rsp+14h] [rbp-34h]

  v6 = a4;
  if ( a2 )
  {
    if ( a2 <= 4 )
      return -1;
    result = -44;
    if ( a2 > 0xC )
      return result;
  }
  else
  {
    a2 = 11;
  }
  _BitScanReverse(&v9, a4);
  _BitScanReverse((unsigned int *)&a4, a5);
  v11 = 32 - (v9 ^ 0x1F);
  if ( v11 > 33 - (v10 ^ 0x1Fu) )
    v11 = 33 - (a4 ^ 0x1F);
  if ( v11 > a2 )
    return -1;
  v43 = 0;
  v42 = 62 - a2;
  v12 = 0;
  v13 = a6 == 0 ? 1 : -1;
  v14 = 1 << a2;
  v44 = 1 << a2;
  v15 = v6 >> a2;
  v16 = 0;
  do
  {
    while ( 1 )
    {
      v17 = *(unsigned int *)(a3 + 4LL * v16);
      if ( v17 == v6 )
        return 0;
      v18 = (_WORD *)(a1 + 2LL * v16);
      if ( !(_DWORD)v17 )
      {
        *v18 = 0;
        goto LABEL_12;
      }
      if ( (unsigned int)v17 > (unsigned int)v15 )
        break;
      *v18 = v13;
      --v14;
LABEL_12:
      if ( a5 < ++v16 )
        goto LABEL_21;
    }
    v19 = 0x4000000000000000uLL / (unsigned int)v6 * v17;
    v20 = v19 >> v42;
    v21 = v20;
    if ( v19 >> v42 <= 7 )
    {
      LOWORD(v20) = (v19 >> v42)
                  + (v19 - (v19 >> v42 << v42) > (unsigned __int64)dword_23B25E0[(int)(v19 >> v42)] << (42 - (unsigned __int8)a2));
      v21 = (__int16)v20;
    }
    if ( (__int16)v20 > v12 )
    {
      v43 = v16;
      v12 = v20;
    }
    ++v16;
    *v18 = v20;
    v14 -= v21;
  }
  while ( a5 >= v16 );
LABEL_21:
  v22 = (__int16 *)(a1 + 2LL * v43);
  if ( -v14 < *v22 >> 1 )
  {
    *v22 += v14;
    return a2;
  }
  v23 = a5;
  v24 = 0;
  v25 = (3 * v6) >> ((unsigned __int8)a2 + 1);
  v26 = 0;
  while ( 1 )
  {
    v27 = *(_DWORD *)(a3 + 4 * v24);
    if ( v27 )
    {
      if ( (unsigned int)v15 >= v27 )
      {
        *(_WORD *)(a1 + 2 * v24) = v13;
        ++v26;
        v6 -= *(unsigned int *)(a3 + 4 * v24);
      }
      else if ( (unsigned int)v25 >= v27 )
      {
        ++v26;
        *(_WORD *)(a1 + 2 * v24) = 1;
        v6 -= *(unsigned int *)(a3 + 4 * v24);
      }
      else
      {
        *(_WORD *)(a1 + 2 * v24) = -2;
      }
    }
    else
    {
      *(_WORD *)(a1 + 2 * v24) = 0;
    }
    if ( a5 == v24 )
      break;
    ++v24;
  }
  v28 = v44 - v26;
  if ( v44 == v26 )
    return a2;
  if ( v6 / v28 > (unsigned int)v25 )
  {
    v29 = 3 * v6 / (2 * v28);
    for ( i = 0; ; ++i )
    {
      if ( *(_WORD *)(a1 + 2 * i) == 0xFFFE && (unsigned int)v29 >= *(_DWORD *)(a3 + 4 * i) )
      {
        ++v26;
        *(_WORD *)(a1 + 2 * i) = 1;
        v6 -= *(unsigned int *)(a3 + 4 * i);
      }
      if ( a5 == i )
        break;
    }
    v28 = v44 - v26;
  }
  v31 = a5 + 1;
  if ( v31 == v26 )
  {
    v37 = 0;
    v38 = 0;
    v39 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(a3 + 4 * v37) > v39 )
      {
        v39 = *(_DWORD *)(a3 + 4 * v37);
        v38 = (unsigned int)v37;
      }
      if ( v23 == v37 )
        break;
      ++v37;
    }
    *(_WORD *)(a1 + 2 * v38) += v28;
    return a2;
  }
  else
  {
    if ( v6 )
    {
      v32 = (1LL << (61 - (unsigned __int8)a2)) - 1;
      v33 = (v32 + ((unsigned __int64)v28 << v42)) / (unsigned int)v6;
      for ( j = 0; ; ++j )
      {
        if ( *(_WORD *)(a1 + 2 * j) == 0xFFFE )
        {
          v35 = v32 + v33 * *(unsigned int *)(a3 + 4 * j);
          v36 = v32 >> v42;
          if ( (unsigned int)(v35 >> v42) == (_DWORD)v36 )
            return -1;
          *(_WORD *)(a1 + 2 * j) = (v35 >> v42) - v36;
          v32 = v35;
        }
        if ( v23 == j )
          return a2;
      }
    }
    if ( !v28 )
      return a2;
    v40 = 0;
    do
    {
      while ( 1 )
      {
        v41 = (__int16 *)(a1 + 2LL * v40);
        if ( *v41 > 0 )
          break;
        v40 = (v40 + 1) % v31;
      }
      ++*v41;
      v40 = (v40 + 1) % v31;
      --v28;
    }
    while ( v28 );
    return a2;
  }
}

