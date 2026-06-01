__int64 *__fastcall sub_592C00(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __m128i i; // xmm1

  v2 = sub_186B270(0x50u);
  v3 = *(unsigned int *)(a2 + 48);
  v4 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)v2 = off_1C51B98;
  *(_QWORD *)(v2 + 16) = a2;
  v5 = v4 + 16 * v3;
  for ( i = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5); v5 != v4; v4 += 16LL )
  {
    if ( *(_DWORD *)(v4 + 4) == 2 )
      break;
  }
  *(_QWORD *)(v2 + 64) = a2;
  *(_QWORD *)(v2 + 56) = off_1C67FA8;
  *(_QWORD *)(v2 + 72) = v2;
  *a1 = v2;
  *(_DWORD *)(v2 + 8) = 1;
  *(__m128i *)(v2 + 24) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v5);
  *(__m128i *)(v2 + 40) = i;
  return a1;
}

