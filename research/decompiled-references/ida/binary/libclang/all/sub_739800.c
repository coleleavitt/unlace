void *__fastcall sub_739800(
        __int64 a1,
        _QWORD *a2,
        const __m128i *a3,
        const void *a4,
        __int64 a5,
        char a6,
        const void *a7,
        __int64 a8,
        const void *a9,
        __int64 a10)
{
  __int64 v10; // r15
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  void *result; // rax

  v10 = (__int64)(a2 + 274);
  v13 = _mm_loadu_si128(a3);
  *(_WORD *)(a1 + 32) = 208;
  *(__m128i *)a1 = v13;
  v14 = _mm_loadu_si128(a3 + 1);
  *(_BYTE *)(a1 + 34) &= 0xE0u;
  *(__m128i *)(a1 + 16) = v14;
  v15 = a2[274];
  a2[284] += (unsigned int)a5;
  v16 = v15 + (unsigned int)a5;
  *(_DWORD *)(a1 + 36) = a5;
  if ( a2[275] >= v16 && v15 )
    a2[274] = v16;
  else
    v15 = sub_722150(v10, (unsigned int)a5, 0);
  *(_QWORD *)(a1 + 40) = v15;
  *(_DWORD *)(a1 + 48) = a8;
  v17 = sub_7222C0(v10, (unsigned int)a8, 0);
  *(_BYTE *)(a1 + 64) = a6;
  *(_QWORD *)(a1 + 56) = v17;
  *(_DWORD *)(a1 + 68) = a10;
  result = (void *)sub_7222C0(v10, (unsigned int)a10, 0);
  *(_QWORD *)(a1 + 72) = result;
  if ( a5 )
  {
    result = memcpy(*(void **)(a1 + 40), a4, *(unsigned int *)(a1 + 36));
    if ( !a8 )
    {
LABEL_6:
      if ( !a10 )
        return result;
      return memcpy(*(void **)(a1 + 72), a9, *(unsigned int *)(a1 + 68));
    }
  }
  else if ( !a8 )
  {
    goto LABEL_6;
  }
  result = memcpy(*(void **)(a1 + 56), a7, *(unsigned int *)(a1 + 48));
  if ( a10 )
    return memcpy(*(void **)(a1 + 72), a9, *(unsigned int *)(a1 + 68));
  return result;
}

