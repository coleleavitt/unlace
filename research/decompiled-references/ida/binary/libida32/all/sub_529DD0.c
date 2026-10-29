__int64 __fastcall sub_529DD0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __m128i v4; // xmm0
  __int64 result; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 i; // rbx
  __m128i v9; // xmm0
  __int64 v10; // rdx
  char v11; // al
  __m128i v12; // xmm0
  __int64 v13; // rbx
  __int64 v14; // rbp
  __m128i v15; // xmm0
  void *v16; // rax
  void *v17; // rax
  size_t na; // [rsp+0h] [rbp-40h]
  size_t n; // [rsp+0h] [rbp-40h]

  v2 = a2;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v6 = 0;
    v7 = qalloc_or_throw(v3 << 7, (const char *)a2);
    *(_QWORD *)(a1 + 16) = v3;
    *(_QWORD *)a1 = v7;
    for ( i = v7; ; i = *(_QWORD *)a1 )
    {
      v13 = (v6 << 7) + i;
      v14 = *(_QWORD *)v2 + (v6 << 7);
      v15 = _mm_loadu_si128((const __m128i *)v14);
      *(_QWORD *)(v13 + 16) = 0;
      *(_OWORD *)(v13 + 24) = 0;
      *(__m128i *)v13 = v15;
      if ( *(_QWORD *)(v14 + 24) )
      {
        na = *(_QWORD *)(v14 + 24);
        v16 = (void *)qalloc_or_throw(na, (const char *)a2);
        *(_QWORD *)(v13 + 16) = v16;
        *(_QWORD *)(v13 + 32) = na;
        a2 = *(_QWORD *)(v14 + 16);
        memcpy(v16, (const void *)a2, na);
        *(_QWORD *)(v13 + 24) = na;
      }
      *(_QWORD *)(v13 + 40) = 0;
      *(_OWORD *)(v13 + 48) = 0;
      if ( *(_QWORD *)(v14 + 48) )
      {
        n = *(_QWORD *)(v14 + 48);
        v17 = (void *)qalloc_or_throw(n, (const char *)a2);
        *(_QWORD *)(v13 + 40) = v17;
        *(_QWORD *)(v13 + 56) = n;
        memcpy(v17, *(const void **)(v14 + 40), n);
        *(_QWORD *)(v13 + 48) = n;
      }
      *(_QWORD *)(v13 + 64) = 0;
      a2 = v14 + 64;
      copy_tinfo_t(v13 + 64);
      v9 = _mm_loadu_si128((const __m128i *)(v14 + 72));
      ++v6;
      v10 = *(_QWORD *)(v14 + 112);
      *(_QWORD *)(v13 + 104) = *(_QWORD *)(v14 + 104);
      v11 = *(_BYTE *)(v14 + 120);
      *(__m128i *)(v13 + 72) = v9;
      v12 = _mm_loadu_si128((const __m128i *)(v14 + 88));
      *(_QWORD *)(v13 + 112) = v10;
      *(_BYTE *)(v13 + 120) = v11;
      *(__m128i *)(v13 + 88) = v12;
      if ( v3 == v6 )
        break;
    }
    *(_QWORD *)(a1 + 8) = v3;
  }
  v4 = _mm_loadu_si128((const __m128i *)(v2 + 24));
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(v2 + 40);
  result = *(unsigned int *)(v2 + 48);
  *(__m128i *)(a1 + 24) = v4;
  *(_DWORD *)(a1 + 48) = result;
  return result;
}

