__int64 __fastcall sub_F01D20(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __m128i v6; // xmm7
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi

  switch ( a3 )
  {
    case 2:
      v4 = *a2;
      v5 = operator new(0xA8u);
      *(_QWORD *)v5 = *(_QWORD *)v4;
      *(__m128i *)(v5 + 8) = _mm_loadu_si128((const __m128i *)(v4 + 8));
      *(__m128i *)(v5 + 24) = _mm_loadu_si128((const __m128i *)(v4 + 24));
      *(__m128i *)(v5 + 40) = _mm_loadu_si128((const __m128i *)(v4 + 40));
      *(__m128i *)(v5 + 56) = _mm_loadu_si128((const __m128i *)(v4 + 56));
      *(__m128i *)(v5 + 72) = _mm_loadu_si128((const __m128i *)(v4 + 72));
      *(__m128i *)(v5 + 88) = _mm_loadu_si128((const __m128i *)(v4 + 88));
      *(__m128i *)(v5 + 104) = _mm_loadu_si128((const __m128i *)(v4 + 104));
      v6 = _mm_loadu_si128((const __m128i *)(v4 + 120));
      *(_QWORD *)(v5 + 136) = v5 + 152;
      *(__m128i *)(v5 + 120) = v6;
      sub_F00A90((_QWORD *)(v5 + 136), *(_BYTE **)(v4 + 136), *(_QWORD *)(v4 + 136) + *(_QWORD *)(v4 + 144));
      *a1 = v5;
      return 0;
    case 3:
      v7 = (_QWORD *)*a1;
      if ( !*a1 )
        return 0;
      v8 = (_QWORD *)v7[17];
      if ( v8 != v7 + 19 )
        operator delete(v8);
      operator delete(v7, 0xA8u);
      return 0;
    case 1:
      *a1 = *a2;
      return 0;
    default:
      return 0;
  }
}

