__int64 __fastcall sub_73CA30(
        __int64 a1,
        _QWORD *a2,
        const __m128i *a3,
        const void *a4,
        __int64 a5,
        __int64 a6,
        void *src,
        __int64 a8)
{
  __int64 v11; // rsi
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 result; // rax
  unsigned __int64 v23; // rdx

  v11 = (unsigned int)a5;
  v13 = _mm_loadu_si128(a3);
  *(_WORD *)(a1 + 32) = 221;
  *(__m128i *)a1 = v13;
  v14 = _mm_loadu_si128(a3 + 1);
  *(_BYTE *)(a1 + 34) &= 0xE0u;
  *(__m128i *)(a1 + 16) = v14;
  v15 = a2[284];
  v16 = a2[274];
  *(_DWORD *)(a1 + 36) = a5;
  v17 = a2[275];
  v18 = (__int64)(a2 + 274);
  v19 = v11 + v15;
  v20 = v16 + v11;
  a2[284] = v19;
  if ( v16 && v17 >= v20 )
  {
    a2[274] = v20;
    v21 = v16 + v11;
  }
  else
  {
    v16 = sub_722150(v18, v11, 0);
    v21 = a2[274];
    v18 = (__int64)(a2 + 274);
    v19 = a2[284];
    v17 = a2[275];
    v20 = v21;
  }
  *(_QWORD *)(a1 + 40) = v16;
  result = (unsigned int)a8;
  *(_DWORD *)(a1 + 48) = a8;
  v23 = (unsigned int)a8 + v20;
  a2[284] = (unsigned int)a8 + v19;
  if ( v21 && v17 >= v23 )
  {
    a2[274] = v23;
  }
  else
  {
    result = sub_722150(v18, (unsigned int)a8, 0);
    v21 = result;
  }
  *(_QWORD *)(a1 + 56) = v21;
  if ( !a5 )
  {
    if ( !a8 )
      return result;
    return (__int64)memcpy(*(void **)(a1 + 56), src, *(unsigned int *)(a1 + 48));
  }
  result = (__int64)memcpy(*(void **)(a1 + 40), a4, *(unsigned int *)(a1 + 36));
  if ( a8 )
    return (__int64)memcpy(*(void **)(a1 + 56), src, *(unsigned int *)(a1 + 48));
  return result;
}

