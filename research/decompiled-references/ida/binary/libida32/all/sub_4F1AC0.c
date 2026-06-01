_QWORD *__fastcall sub_4F1AC0(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v4; // rdx
  __m128i v5; // xmm0
  __int64 v6; // rcx

  v2 = a2[1];
  v4 = *(_QWORD *)(*a2 + 16LL);
  v5 = _mm_loadu_si128((const __m128i *)(v2 + 8));
  *(_BYTE *)(v4 + 16) = *(_BYTE *)v2;
  *(_BYTE *)(v4 + 48) = 1;
  *(__m128i *)(v4 + 24) = v5;
  v6 = *(_QWORD *)(*a2 + 16LL);
  *(_QWORD *)(*a2 + 16LL) = 0;
  *a1 = v6;
  return a1;
}

