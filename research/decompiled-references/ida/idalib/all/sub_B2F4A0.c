__int64 __fastcall sub_B2F4A0(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        const void *a6,
        unsigned int a7,
        void *src,
        unsigned int a9,
        void *a10,
        unsigned int a11,
        __int64 a12,
        unsigned int a13)
{
  __int32 v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  _BYTE *v19; // rsi
  _BYTE *v20; // rax
  _BYTE *v21; // rdx
  _BYTE *v22; // rcx
  __int64 v23; // rdx
  size_t v24; // rdx
  size_t v25; // rdx
  size_t v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rbp
  __int64 result; // rax
  __int64 v30; // r12
  const void *v31; // rax
  void *v32; // rdi
  __int64 v33; // r14
  const void *v34; // rsi
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // rdx
  int v38; // r13d

  *(__m128i *)a1 = _mm_loadu_si128(a3);
  *(__m128i *)(a1 + 16) = _mm_loadu_si128(a3 + 1);
  v14 = a3[2].m128i_i32[0];
  *(_QWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 32) = v14;
  *(_WORD *)(a1 + 36) = 296;
  LOBYTE(v14) = *(_BYTE *)(a1 + 38);
  *(_QWORD *)(a1 + 48) = a5;
  *(_DWORD *)(a1 + 56) = a7;
  *(_BYTE *)(a1 + 38) = v14 & 0xE0 | 0x10;
  v15 = sub_9C3B30((__int64 *)(a2 + 2352), 8LL * a7, 4u);
  *(_DWORD *)(a1 + 72) = a9;
  *(_QWORD *)(a1 + 64) = v15;
  v16 = sub_9C3B30((__int64 *)(a2 + 2352), 8LL * a9, 4u);
  *(_DWORD *)(a1 + 88) = a11;
  *(_QWORD *)(a1 + 80) = v16;
  v17 = sub_9C3B30((__int64 *)(a2 + 2352), 8LL * a11, 4u);
  *(_DWORD *)(a1 + 104) = a13;
  *(_QWORD *)(a1 + 96) = v17;
  v18 = (_QWORD *)sub_9C3B30((__int64 *)(a2 + 2352), 56LL * a13 + 8, 4u);
  v19 = v18 + 1;
  *v18 = a13;
  v20 = &v18[7 * a13 + 1];
  v21 = v19;
  if ( a13 )
  {
    do
    {
      v22 = v21 + 24;
      *v21 = 0;
      v21 += 56;
      *(v21 - 55) = 0;
      *((_QWORD *)v21 - 6) = v22;
      *((_DWORD *)v21 - 10) = 0;
      *((_DWORD *)v21 - 9) = 4;
    }
    while ( v20 != v21 );
  }
  v23 = *(unsigned int *)(a1 + 56);
  *(_QWORD *)(a1 + 112) = v19;
  v24 = 8 * v23;
  if ( v24 )
    memmove(*(void **)(a1 + 64), a6, v24);
  v25 = 8LL * *(unsigned int *)(a1 + 72);
  if ( v25 )
    memmove(*(void **)(a1 + 80), src, v25);
  v26 = 8LL * *(unsigned int *)(a1 + 88);
  if ( v26 )
    memmove(*(void **)(a1 + 96), a10, v26);
  v27 = *(_QWORD *)(a1 + 112) + 8LL;
  v28 = a12 + 8;
  result = 56LL * *(unsigned int *)(a1 + 104);
  v30 = v27 + result;
  if ( result )
  {
    do
    {
      *(_BYTE *)(v27 - 8) = *(_BYTE *)(v28 - 8);
      result = *(unsigned __int8 *)(v28 - 7);
      *(_BYTE *)(v27 - 7) = result;
      if ( v27 != v28 )
      {
        v36 = *(unsigned int *)(v28 + 8);
        v35 = *(unsigned int *)(v27 + 8);
        v38 = *(_DWORD *)(v28 + 8);
        if ( v36 > v35 )
        {
          if ( v36 > *(unsigned int *)(v27 + 12) )
          {
            *(_DWORD *)(v27 + 8) = 0;
            sub_2237220(v27, v27 + 16, v36, 8);
            v31 = *(const void **)v28;
            v36 = *(unsigned int *)(v28 + 8);
            v35 = 0;
            v32 = *(void **)v27;
            v34 = *(const void **)v28;
          }
          else
          {
            v31 = *(const void **)v28;
            v32 = *(void **)v27;
            v33 = 8 * v35;
            v34 = *(const void **)v28;
            if ( *(_DWORD *)(v27 + 8) )
            {
              memmove(v32, v34, 8 * v35);
              v31 = *(const void **)v28;
              v35 = v33;
              v36 = *(unsigned int *)(v28 + 8);
              v32 = (void *)(v33 + *(_QWORD *)v27);
              v34 = (const void *)(*(_QWORD *)v28 + v33);
            }
          }
          v37 = 8 * v36;
          result = (__int64)v31 + v37;
          if ( v34 != (const void *)result )
            result = (__int64)memcpy(v32, v34, v37 - v35);
        }
        else if ( *(_DWORD *)(v28 + 8) )
        {
          result = (__int64)memmove(*(void **)v27, *(const void **)v28, 8 * v36);
        }
        *(_DWORD *)(v27 + 8) = v38;
      }
      v27 += 56;
      v28 += 56;
    }
    while ( v30 != v27 );
  }
  return result;
}
