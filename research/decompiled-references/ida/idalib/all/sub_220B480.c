__int64 __fastcall sub_220B480(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // esi
  int v6; // edx
  unsigned int v7; // r12d
  unsigned int v9; // r13d
  unsigned int v10; // edi
  void *v11; // rax
  unsigned int v12; // r8d
  _QWORD *v13; // rsi
  char *v14; // rax
  unsigned __int64 v15; // rax
  bool v16; // cc
  unsigned __int64 v17; // r10
  const __m128i *v18; // rdx
  unsigned __int64 v19; // rcx
  signed __int64 v20; // r9
  const __m128i *v21; // rdi
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  const void *v24; // rax
  char *v25; // rcx
  signed __int64 v26; // rsi
  void *src; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+8h] [rbp-40h]
  void *v29; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+18h] [rbp-30h]

  v5 = *(_DWORD *)(a2 + 8);
  if ( !v5 )
  {
    v24 = *(const void **)a2;
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = v24;
    return a1;
  }
  v6 = a3 % v5;
  v7 = v6;
  if ( v6 )
  {
    v30 = v5;
    v9 = v5 - v6;
    if ( v5 > 0x40 )
    {
      sub_2205510((__int64)&v29, (const void **)a2);
      v10 = v30;
      if ( v30 > 0x40 )
      {
        sub_220A970(v29, ((unsigned __int64)v30 + 63) >> 6, v9);
        v5 = *(_DWORD *)(a2 + 8);
        goto LABEL_10;
      }
      v5 = *(_DWORD *)(a2 + 8);
    }
    else
    {
      v10 = v5;
      v29 = *(void **)a2;
    }
    if ( v9 == v10 )
      v29 = nullptr;
    else
      v29 = (void *)((unsigned __int64)v29 >> v9);
LABEL_10:
    v28 = v5;
    if ( v5 > 0x40 )
    {
      sub_2205510((__int64)&src, (const void **)a2);
      v5 = v28;
      if ( v28 > 0x40 )
      {
        sub_220A060(src, ((unsigned __int64)v28 + 63) >> 6, v7);
        sub_CF8100((unsigned __int64 *)&src);
LABEL_15:
        v12 = v30;
        v13 = src;
        v14 = (char *)v29;
        if ( v30 > 0x40 )
        {
          v17 = ((unsigned __int64)v30 + 63) >> 6;
          if ( (v29 >= (char *)src + 16 || src >= (char *)v29 + 16) && v17 - 1 > 2 )
          {
            v18 = (const __m128i *)v29;
            v19 = ((unsigned __int64)v30 + 63) >> 7;
            v20 = (_BYTE *)src - (_BYTE *)v29;
            v21 = (const __m128i *)((char *)v29 + 16 * v19);
            do
            {
              v22 = _mm_loadu_si128((const __m128i *)((char *)v18 + v20));
              v23 = _mm_loadu_si128(v18++);
              v18[-1] = _mm_or_si128(v22, v23);
            }
            while ( v18 != v21 );
            if ( v17 != 2 * v19 )
              *(_QWORD *)&v14[16 * v19] |= v13[2 * v19];
          }
          else
          {
            v25 = (char *)v29 + 8 * v17;
            v26 = (_BYTE *)src - (_BYTE *)v29;
            do
            {
              *(_QWORD *)v14 |= *(_QWORD *)&v14[v26];
              v14 += 8;
            }
            while ( v14 != v25 );
          }
          v15 = (unsigned __int64)v29;
        }
        else
        {
          v15 = (unsigned __int64)src | (unsigned __int64)v29;
          v29 = (void *)((unsigned __int64)src | (unsigned __int64)v29);
        }
        v16 = v28 <= 0x40;
        *(_DWORD *)(a1 + 8) = v12;
        *(_QWORD *)a1 = v15;
        v30 = 0;
        if ( !v16 )
        {
          if ( src )
          {
            operator delete[](src);
            if ( v30 > 0x40 )
            {
              if ( v29 )
                operator delete[](v29);
            }
          }
        }
        return a1;
      }
    }
    else
    {
      src = *(void **)a2;
    }
    v11 = nullptr;
    if ( v7 != v5 )
      v11 = (void *)((_QWORD)src << v7);
    src = v11;
    sub_CF8100((unsigned __int64 *)&src);
    goto LABEL_15;
  }
  *(_DWORD *)(a1 + 8) = v5;
  if ( v5 <= 0x40 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    return a1;
  }
  sub_2205510(a1, (const void **)a2);
  return a1;
}
