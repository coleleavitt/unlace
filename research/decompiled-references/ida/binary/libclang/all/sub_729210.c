_QWORD *__fastcall sub_729210(
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
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v20; // r9
  __int64 v21; // rsi
  _QWORD *v22; // rdi
  _QWORD *result; // rax
  size_t v24; // rdx
  bool v25; // zf

  v11 = (unsigned int)a5;
  v12 = (__int64)(a2 + 274);
  v14 = _mm_loadu_si128(a3);
  *(_BYTE *)(a1 + 34) &= 0xE0u;
  *(_WORD *)(a1 + 32) = 2;
  *(__m128i *)a1 = v14;
  v15 = _mm_loadu_si128(a3 + 1);
  *(_DWORD *)(a1 + 36) = a5;
  *(__m128i *)(a1 + 16) = v15;
  v16 = a2[274];
  v17 = a2[275];
  v18 = v11 + a2[284];
  v19 = v16 + v11;
  a2[284] = v18;
  if ( v16 && v17 >= v19 )
  {
    a2[274] = v19;
    v20 = v16 + v11;
  }
  else
  {
    v16 = sub_722150(v12, v11, 0);
    v20 = a2[274];
    v12 = (__int64)(a2 + 274);
    v18 = a2[284];
    v17 = a2[275];
    v19 = v20;
  }
  *(_QWORD *)(a1 + 40) = v16;
  v21 = 8LL * a7;
  v22 = (_QWORD *)((v19 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  *(_DWORD *)(a1 + 48) = a7;
  result = &v22[(unsigned __int64)v21 / 8];
  a2[284] = v21 + v18;
  if ( v20 && v17 >= (unsigned __int64)result )
  {
    a2[274] = result;
  }
  else
  {
    result = (_QWORD *)sub_722150(v12, v21, 4);
    v22 = result;
  }
  *(_QWORD *)(a1 + 56) = v22;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  if ( a5 )
  {
    result = memcpy(*(void **)(a1 + 40), a4, *(unsigned int *)(a1 + 36));
    v22 = *(_QWORD **)(a1 + 56);
    v24 = 8LL * *(unsigned int *)(a1 + 48);
    v25 = v24 == 8;
    if ( v24 > 8 )
      return memmove(v22, a6, v24);
  }
  else
  {
    v24 = 8LL * *(unsigned int *)(a1 + 48);
    v25 = v24 == 8;
    if ( v24 > 8 )
      return memmove(v22, a6, v24);
  }
  if ( v25 )
  {
    result = (_QWORD *)*a6;
    *v22 = *a6;
  }
  return result;
}

