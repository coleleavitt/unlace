__int64 __fastcall sub_220B740(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // esi
  const void *v6; // rax
  int v8; // edx
  unsigned int v9; // r12d
  unsigned int v10; // r13d
  void *v11; // rax
  unsigned int v12; // eax
  unsigned __int64 v13; // rsi
  unsigned int v14; // r8d
  char *v15; // rax
  unsigned __int64 v16; // rax
  bool v17; // cc
  unsigned __int64 v18; // r10
  const __m128i *v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r9
  const __m128i *v22; // rdi
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  char *v25; // rcx
  unsigned __int64 v26; // rsi
  void *v27; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+8h] [rbp-40h]
  void *src; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+18h] [rbp-30h]

  v5 = *(_DWORD *)(a2 + 8);
  if ( !v5 )
  {
    v6 = *(const void **)a2;
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = v6;
    return a1;
  }
  v8 = a3 % v5;
  v9 = v8;
  if ( v8 )
  {
    v30 = v5;
    v10 = v5 - v8;
    if ( v5 > 0x40 )
    {
      sub_2205510((__int64)&src, (const void **)a2);
      v5 = v30;
      if ( v30 > 0x40 )
      {
        sub_220A060(src, ((unsigned __int64)v30 + 63) >> 6, v10);
        sub_CF8100((unsigned __int64 *)&src);
        goto LABEL_13;
      }
    }
    else
    {
      src = *(void **)a2;
    }
    v11 = nullptr;
    if ( v10 != v5 )
      v11 = (void *)((_QWORD)src << v10);
    src = v11;
    sub_CF8100((unsigned __int64 *)&src);
LABEL_13:
    v12 = *(_DWORD *)(a2 + 8);
    v28 = v12;
    if ( v12 > 0x40 )
    {
      sub_2205510((__int64)&v27, (const void **)a2);
      v12 = v28;
      if ( v28 > 0x40 )
      {
        sub_220A970(v27, ((unsigned __int64)v28 + 63) >> 6, v9);
        v13 = (unsigned __int64)v27;
LABEL_17:
        v14 = v30;
        v15 = (char *)src;
        if ( v30 > 0x40 )
        {
          v18 = ((unsigned __int64)v30 + 63) >> 6;
          if ( ((unsigned __int64)src >= v13 + 16 || v13 >= (unsigned __int64)src + 16) && v18 - 1 > 2 )
          {
            v19 = (const __m128i *)src;
            v20 = ((unsigned __int64)v30 + 63) >> 7;
            v21 = v13 - (_QWORD)src;
            v22 = (const __m128i *)((char *)src + 16 * v20);
            do
            {
              v23 = _mm_loadu_si128((const __m128i *)((char *)v19 + v21));
              v24 = _mm_loadu_si128(v19++);
              v19[-1] = _mm_or_si128(v23, v24);
            }
            while ( v19 != v22 );
            if ( v18 != 2 * v20 )
              *(_QWORD *)&v15[16 * v20] |= *(_QWORD *)(v13 + 16 * v20);
          }
          else
          {
            v25 = (char *)src + 8 * v18;
            v26 = v13 - (_QWORD)src;
            do
            {
              *(_QWORD *)v15 |= *(_QWORD *)&v15[v26];
              v15 += 8;
            }
            while ( v15 != v25 );
          }
          v16 = (unsigned __int64)src;
        }
        else
        {
          v16 = v13 | (unsigned __int64)src;
          src = (void *)(v13 | (unsigned __int64)src);
        }
        v17 = v28 <= 0x40;
        *(_DWORD *)(a1 + 8) = v14;
        *(_QWORD *)a1 = v16;
        v30 = 0;
        if ( !v17 )
        {
          if ( v27 )
          {
            operator delete[](v27);
            if ( v30 > 0x40 )
            {
              if ( src )
                operator delete[](src);
            }
          }
        }
        return a1;
      }
    }
    else
    {
      v27 = *(void **)a2;
    }
    if ( v9 == v12 )
    {
      v27 = nullptr;
      v13 = 0;
    }
    else
    {
      v13 = (unsigned __int64)v27 >> v9;
      v27 = (void *)((unsigned __int64)v27 >> v9);
    }
    goto LABEL_17;
  }
  *(_DWORD *)(a1 + 8) = v5;
  if ( v5 > 0x40 )
    sub_2205510(a1, (const void **)a2);
  else
    *(_QWORD *)a1 = *(_QWORD *)a2;
  return a1;
}
