__int64 __fastcall sub_542AD0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __m128i v3; // xmm0
  __int64 result; // rax
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 i; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // rbx
  __int64 v13; // rbp
  __m128i v14; // xmm0
  void *v15; // rax
  void *v16; // rax
  size_t na; // [rsp+0h] [rbp-40h]
  size_t n; // [rsp+0h] [rbp-40h]

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v5 = 0;
    v6 = qalloc_or_throw(144 * v2);
    *(_QWORD *)(a1 + 16) = v2;
    *(_QWORD *)a1 = v6;
    for ( i = v6; ; i = *(_QWORD *)a1 )
    {
      v12 = 144 * v5 + i;
      v13 = *(_QWORD *)a2 + 144 * v5;
      v14 = _mm_loadu_si128((const __m128i *)v13);
      *(_QWORD *)(v12 + 16) = 0;
      *(_OWORD *)(v12 + 24) = 0;
      *(__m128i *)v12 = v14;
      if ( *(_QWORD *)(v13 + 24) )
      {
        na = *(_QWORD *)(v13 + 24);
        v15 = (void *)qalloc_or_throw(na);
        *(_QWORD *)(v12 + 16) = v15;
        *(_QWORD *)(v12 + 32) = na;
        memcpy(v15, *(const void **)(v13 + 16), na);
        *(_QWORD *)(v12 + 24) = na;
      }
      *(_QWORD *)(v12 + 40) = 0;
      *(_OWORD *)(v12 + 48) = 0;
      if ( *(_QWORD *)(v13 + 48) )
      {
        n = *(_QWORD *)(v13 + 48);
        v16 = (void *)qalloc_or_throw(n);
        *(_QWORD *)(v12 + 40) = v16;
        *(_QWORD *)(v12 + 56) = n;
        memcpy(v16, *(const void **)(v13 + 40), n);
        *(_QWORD *)(v12 + 48) = n;
      }
      *(_QWORD *)(v12 + 64) = 0;
      copy_tinfo_t(v12 + 64);
      v8 = *(_QWORD *)(v13 + 120);
      ++v5;
      v9 = *(_QWORD *)(v13 + 128);
      *(__m128i *)(v12 + 72) = _mm_loadu_si128((const __m128i *)(v13 + 72));
      v10 = _mm_loadu_si128((const __m128i *)(v13 + 88));
      *(_QWORD *)(v12 + 120) = v8;
      LOBYTE(v8) = *(_BYTE *)(v13 + 136);
      *(__m128i *)(v12 + 88) = v10;
      v11 = _mm_loadu_si128((const __m128i *)(v13 + 104));
      *(_QWORD *)(v12 + 128) = v9;
      *(_BYTE *)(v12 + 136) = v8;
      *(__m128i *)(v12 + 104) = v11;
      if ( v2 == v5 )
        break;
    }
    *(_QWORD *)(a1 + 8) = v2;
  }
  v3 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  result = *(unsigned int *)(a2 + 48);
  *(__m128i *)(a1 + 24) = v3;
  *(_DWORD *)(a1 + 48) = result;
  return result;
}
