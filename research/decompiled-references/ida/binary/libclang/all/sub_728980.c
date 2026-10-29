_QWORD *__fastcall sub_728980(
        __int64 a1,
        _QWORD *a2,
        const __m128i *a3,
        const void *a4,
        __int64 a5,
        _QWORD *a6,
        unsigned int a7)
{
  __int64 v11; // rsi
  __int64 v12; // rcx
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  __int64 v21; // r9
  __int64 v22; // rsi
  _QWORD *v23; // rdi
  _QWORD *result; // rax
  size_t v25; // rdx
  bool v26; // zf

  v11 = (unsigned int)a5;
  v12 = (__int64)(a2 + 274);
  v14 = _mm_loadu_si128(a3);
  *(_WORD *)(a1 + 32) = 86;
  *(__m128i *)a1 = v14;
  v15 = _mm_loadu_si128(a3 + 1);
  *(_BYTE *)(a1 + 34) &= 0xE0u;
  *(__m128i *)(a1 + 16) = v15;
  v16 = a2[284];
  v17 = a2[274];
  *(_DWORD *)(a1 + 36) = a5;
  v18 = a2[275];
  v19 = v11 + v16;
  v20 = v17 + v11;
  a2[284] = v19;
  if ( v17 && v18 >= v20 )
  {
    a2[274] = v20;
    v21 = v17 + v11;
  }
  else
  {
    v17 = sub_722150(v12, v11, 0);
    v21 = a2[274];
    v12 = (__int64)(a2 + 274);
    v19 = a2[284];
    v18 = a2[275];
    v20 = v21;
  }
  *(_QWORD *)(a1 + 40) = v17;
  v22 = 8LL * a7;
  v23 = (_QWORD *)((v20 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  *(_DWORD *)(a1 + 48) = a7;
  result = &v23[(unsigned __int64)v22 / 8];
  a2[284] = v22 + v19;
  if ( v21 && v18 >= (unsigned __int64)result )
  {
    a2[274] = result;
  }
  else
  {
    result = (_QWORD *)sub_722150(v12, v22, 4);
    v23 = result;
  }
  *(_QWORD *)(a1 + 56) = v23;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  if ( a5 )
  {
    result = memcpy(*(void **)(a1 + 40), a4, *(unsigned int *)(a1 + 36));
    v23 = *(_QWORD **)(a1 + 56);
    v25 = 8LL * *(unsigned int *)(a1 + 48);
    v26 = v25 == 8;
    if ( v25 > 8 )
      return memmove(v23, a6, v25);
  }
  else
  {
    v25 = 8LL * *(unsigned int *)(a1 + 48);
    v26 = v25 == 8;
    if ( v25 > 8 )
      return memmove(v23, a6, v25);
  }
  if ( v26 )
  {
    result = (_QWORD *)*a6;
    *v23 = *a6;
  }
  return result;
}

