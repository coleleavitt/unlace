__int64 __fastcall sub_1497CE0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // r13d
  void *v9; // rax
  __int64 result; // rax
  size_t v11; // rdx
  unsigned __int64 v12; // rbp

  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = v3 + 1;
  v6 = *(_QWORD *)a1 + 144 * v3;
  if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    if ( v4 > a2 || v6 <= a2 )
    {
      sub_1497B50(a1, v5);
      v6 = *(_QWORD *)a1 + 144LL * *(unsigned int *)(a1 + 8);
    }
    else
    {
      v12 = a2 - v4;
      sub_1497B50(a1, v5);
      a2 = *(_QWORD *)a1 + v12;
      v6 = *(_QWORD *)a1 + 144LL * *(unsigned int *)(a1 + 8);
    }
  }
  *(_DWORD *)v6 = *(_DWORD *)a2;
  *(_DWORD *)(v6 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(v6 + 8) = *(_DWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v6 + 32) = 0x200000000LL;
  *(_QWORD *)(v6 + 16) = v7;
  v8 = *(_DWORD *)(a2 + 32);
  v9 = (void *)(v6 + 40);
  *(_QWORD *)(v6 + 24) = v6 + 40;
  if ( v8 && v6 + 24 != a2 + 24 )
  {
    v11 = 8LL * v8;
    if ( v8 <= 2uLL
      || (sub_2237220(v6 + 24, v6 + 40, v8, 8), v9 = *(void **)(v6 + 24), (v11 = 8LL * *(unsigned int *)(a2 + 32)) != 0) )
    {
      memcpy(v9, *(const void **)(a2 + 24), v11);
    }
    *(_DWORD *)(v6 + 32) = v8;
  }
  *(__m128i *)(v6 + 56) = _mm_loadu_si128((const __m128i *)(a2 + 56));
  *(__m128i *)(v6 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 72));
  *(__m128i *)(v6 + 88) = _mm_loadu_si128((const __m128i *)(a2 + 88));
  *(__m128i *)(v6 + 104) = _mm_loadu_si128((const __m128i *)(a2 + 104));
  *(__m128i *)(v6 + 120) = _mm_loadu_si128((const __m128i *)(a2 + 120));
  result = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(v6 + 136) = result;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
