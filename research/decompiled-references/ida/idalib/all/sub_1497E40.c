__int64 __fastcall sub_1497E40(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // r15d
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 result; // rax
  size_t v18; // rdx
  __int64 v19; // rdi
  unsigned __int64 v20; // r14
  __int64 v21; // rax

  v8 = *(unsigned int *)(a1 + 136);
  v9 = *(_QWORD *)(a1 + 128);
  v10 = v8 + 1;
  v11 = v9 + 144 * v8;
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 140) )
  {
    v19 = a1 + 128;
    if ( v9 > a2 || v11 <= a2 )
    {
      sub_1497B50(v19, v10);
      v11 = *(_QWORD *)(a1 + 128) + 144LL * *(unsigned int *)(a1 + 136);
    }
    else
    {
      v20 = a2 - v9;
      sub_1497B50(v19, v10);
      v21 = *(_QWORD *)(a1 + 128);
      a2 = v21 + v20;
      v11 = v21 + 144LL * *(unsigned int *)(a1 + 136);
    }
  }
  *(_DWORD *)v11 = *(_DWORD *)a2;
  *(_DWORD *)(v11 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(v11 + 8) = *(_DWORD *)(a2 + 8);
  v12 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v11 + 32) = 0x200000000LL;
  *(_QWORD *)(v11 + 16) = v12;
  v13 = *(_DWORD *)(a2 + 32);
  v14 = (void *)(v11 + 40);
  *(_QWORD *)(v11 + 24) = v11 + 40;
  if ( v13 && v11 + 24 != a2 + 24 )
  {
    v18 = 8LL * v13;
    if ( v13 <= 2uLL
      || (sub_2237220(v11 + 24, v11 + 40, v13, 8),
          v14 = *(void **)(v11 + 24),
          (v18 = 8LL * *(unsigned int *)(a2 + 32)) != 0) )
    {
      memcpy(v14, *(const void **)(a2 + 24), v18);
    }
    *(_DWORD *)(v11 + 32) = v13;
  }
  *(__m128i *)(v11 + 56) = _mm_loadu_si128((const __m128i *)(a2 + 56));
  *(__m128i *)(v11 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 72));
  *(__m128i *)(v11 + 88) = _mm_loadu_si128((const __m128i *)(a2 + 88));
  *(__m128i *)(v11 + 104) = _mm_loadu_si128((const __m128i *)(a2 + 104));
  *(__m128i *)(v11 + 120) = _mm_loadu_si128((const __m128i *)(a2 + 120));
  *(_QWORD *)(v11 + 136) = *(_QWORD *)(a2 + 136);
  v15 = *(_QWORD *)(a1 + 128);
  v16 = (unsigned int)(*(_DWORD *)(a1 + 136) + 1);
  *(_DWORD *)(a1 + 136) = v16;
  sub_147F500(
    (__int64 *)(v15 + 144 * v16 - 144 + 24),
    *(char **)(v15 + 144 * v16 - 144 + 24),
    *(char **)(a3 + 8),
    (char *)(*(_QWORD *)(a3 + 8) + 8LL * *(unsigned int *)(a3 + 16)));
  result = sub_15D8C50(a1 + 768, a3 + 40);
  *(_DWORD *)(a3 + 56) = 0;
  if ( a4 )
    *(_DWORD *)(a1 + 92) = a4;
  return result;
}
