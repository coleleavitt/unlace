__int64 __fastcall sub_ACC0A0(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi

  switch ( a3 )
  {
    case 2:
      v4 = *a2;
      v5 = operator new(0x60u);
      *(_QWORD *)v5 = *(_QWORD *)v4;
      *(__m128i *)(v5 + 8) = _mm_loadu_si128((const __m128i *)(v4 + 8));
      *(__m128i *)(v5 + 24) = _mm_loadu_si128((const __m128i *)(v4 + 24));
      *(__m128i *)(v5 + 40) = _mm_loadu_si128((const __m128i *)(v4 + 40));
      *(_QWORD *)(v5 + 56) = *(_QWORD *)(v4 + 56);
      *(_QWORD *)(v5 + 64) = v5 + 80;
      sub_ACAAE0((_QWORD *)(v5 + 64), *(_BYTE **)(v4 + 64), *(_QWORD *)(v4 + 64) + *(_QWORD *)(v4 + 72));
      *a1 = v5;
      return 0;
    case 3:
      v6 = (_QWORD *)*a1;
      if ( !*a1 )
        return 0;
      v7 = (_QWORD *)v6[8];
      if ( v7 != v6 + 10 )
        operator delete(v7);
      operator delete(v6, 0x60u);
      return 0;
    case 1:
      *a1 = *a2;
      return 0;
    default:
      return 0;
  }
}
