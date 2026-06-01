__int64 __fastcall sub_968A0(char a1)
{
  FILE *v1; // rax
  FILE *v2; // rbx
  void *v3; // rax
  __int64 v4; // r12
  void *v5; // rbp
  __int64 *v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rsi
  bool v10; // cf
  __int64 v11; // rdx
  void *v12; // r14
  __m128i *v13; // rbp
  unsigned __int64 v14; // rsi
  unsigned int v15; // ebx
  _BYTE *v17; // r15
  char *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rsi
  char v22; // dl
  const char *v23; // r15
  int v24; // eax
  int v25; // eax
  void *v26; // rax
  __int64 v27; // r15
  __int64 *v28; // rdi
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rbx
  __m128i *v33; // r12
  unsigned __int64 v34; // rdx
  const __m128i *v35; // rbx
  __m128i v36; // xmm0
  __int64 *v37; // rax
  int v38; // esi
  int v39; // edi
  __int64 *v40; // rcx
  bool v41; // sf
  bool v42; // of
  int v43; // eax
  __int64 i; // rdx
  _DWORD *v45; // rdx
  _DWORD *v46; // rcx
  __int64 v48; // [rsp+18h] [rbp-80h]
  void *src; // [rsp+20h] [rbp-78h] BYREF
  __int128 v50; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v52; // [rsp+48h] [rbp-50h]
  unsigned __int64 v53; // [rsp+58h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v1 = sub_93850("/proc/cpuinfo", (__int64)"r");
  if ( !v1 )
    return (unsigned int)-1;
  v2 = v1;
  src = nullptr;
  v50 = 0;
  v3 = sub_96080((__int64)&src, nullptr, 1u, 8u);
  v4 = *((_QWORD *)&v50 + 1);
  v5 = v3;
  *((_QWORD *)&v50 + 1) = 0;
  v6 = (__int64 *)src;
  v7 = v50 - 1;
  if ( (__int64)v50 - 1 >= 0 )
  {
    v8 = v3;
    do
    {
      v9 = *v6;
      ++v8;
      ++v6;
      *(v8 - 1) = v9;
      v10 = v7-- == 0;
    }
    while ( !v10 );
    v6 = (__int64 *)src;
  }
  j__free(v6);
  *((_QWORD *)&v50 + 1) = v4;
  src = v5;
  *((_QWORD *)v5 + v50) = -1;
  *(_QWORD *)&v50 = v50 + 1;
  ptr = nullptr;
  v52 = 0;
  while ( sub_95D00((__int64 *)&ptr, v2) >= 0 )
  {
    while ( 1 )
    {
      if ( (_QWORD)v52 )
      {
        v17 = ptr;
        v18 = strchr((const char *)ptr, 58);
        if ( v18 )
        {
          v19 = v18 - v17;
          v20 = v19;
          if ( v19 != -1 )
            break;
        }
      }
      v11 = v50;
      if ( *((_QWORD *)&v50 + 1) < (unsigned __int64)(v50 + 1) )
      {
        v48 = *((_QWORD *)&v50 + 1);
        v26 = sub_96080((__int64)&src, nullptr, v50 + 1, 8u);
        v12 = v26;
        v27 = *((_QWORD *)&v50 + 1);
        v28 = (__int64 *)src;
        *((_QWORD *)&v50 + 1) = v48;
        v29 = v50 - 1;
        if ( (__int64)v50 - 1 >= 0 )
        {
          v30 = v26;
          do
          {
            v31 = *v28;
            ++v30;
            ++v28;
            *(v30 - 1) = v31;
            v10 = v29-- == 0;
          }
          while ( !v10 );
          v28 = (__int64 *)src;
        }
        j__free(v28);
        src = v12;
        v11 = v50;
        *((_QWORD *)&v50 + 1) = v27;
      }
      else
      {
        v12 = src;
      }
      *((_QWORD *)v12 + v11) = -1;
      *(_QWORD *)&v50 = v50 + 1;
      if ( sub_95D00((__int64 *)&ptr, v2) < 0 )
        goto LABEL_12;
    }
    v21 = v19;
    if ( v19 > 0 )
    {
      while ( 1 )
      {
        v21 = v19--;
        v22 = v17[v19];
        if ( v22 != 32 && v22 != 9 )
          break;
        if ( !v19 )
        {
          v21 = 0;
          break;
        }
      }
    }
    v17[v21] = 0;
    if ( (_QWORD)v52 )
    {
      v23 = (const char *)ptr;
      if ( !strcmp((const char *)ptr, "processor") )
      {
        v24 = strtol(&v23[v20 + 1], nullptr, 10);
        *((_DWORD *)src + 2 * v50 - 2) = v24;
      }
      else if ( !strcmp(v23, "core id") )
      {
        v25 = strtol(&v23[v20 + 1], nullptr, 10);
        *((_DWORD *)src + 2 * v50 - 1) = v25;
      }
    }
  }
LABEL_12:
  sub_959E0(v2);
  v13 = (__m128i *)src;
  v14 = v50;
  if ( *((_DWORD *)src + 2 * v50 - 2) == -1 && (_QWORD)v50 )
  {
    v14 = v50 - 1;
    *(_QWORD *)&v50 = v50 - 1;
  }
  v15 = v14;
  if ( !a1 )
  {
    v32 = 8 * v14;
    v33 = (__m128i *)((char *)src + 8 * v14);
    if ( src == v33 )
      goto LABEL_49;
    if ( v32 >> 3 )
    {
      _BitScanReverse64(&v34, v32 >> 3);
      sub_96540((__int64)src, (unsigned __int64 *)src + v14, 2LL * (int)v34);
      if ( v32 > 128 )
      {
        v35 = v13 + 8;
        sub_967C0(v13, v13 + 8);
        do
        {
          v36 = _mm_loadl_epi64(v35);
          v37 = (__int64 *)v35;
          v38 = _mm_cvtsi128_si32(v36);
          v39 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v36, 229));
          while ( 1 )
          {
            v40 = v37;
            v42 = __OFSUB__(v38, *((_DWORD *)v37 - 2));
            v41 = v38 - *((_DWORD *)v37 - 2) < 0;
            if ( v38 == *((_DWORD *)v37 - 2) )
            {
              v42 = __OFSUB__(v39, *((_DWORD *)v37 - 1));
              v41 = v39 - *((_DWORD *)v37 - 1) < 0;
            }
            --v37;
            if ( v41 == v42 )
              break;
            v37[1] = *v37;
          }
          v35 = (const __m128i *)((char *)v35 + 8);
          *v40 = v36.m128i_i64[0];
        }
        while ( v33 != v35 );
        goto LABEL_48;
      }
    }
    else
    {
      sub_96540((__int64)src, (unsigned __int64 *)src + v14, -2);
    }
    sub_967C0(v13, v33);
LABEL_48:
    v14 = v50;
LABEL_49:
    if ( v14 )
    {
      v43 = 0;
      v15 = 0;
LABEL_51:
      ++v15;
      for ( i = v43; ++v43 < v14; i = v43 )
      {
        v45 = (char *)src + 8 * i;
        v46 = (char *)src + 8 * v43;
        if ( *v46 != *v45 || v46[1] != v45[1] )
          goto LABEL_51;
      }
    }
    else
    {
      v15 = 0;
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v52 = 0;
    j__free(ptr);
  }
  if ( src )
  {
    *(_QWORD *)&v50 = 0;
    j__free(src);
  }
  return v15;
}

