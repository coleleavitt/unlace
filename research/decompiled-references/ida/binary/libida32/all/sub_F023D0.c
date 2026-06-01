__int64 __fastcall sub_F023D0(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __m128i v6; // xmm1
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi

  switch ( a3 )
  {
    case 2:
      v4 = *a2;
      v5 = operator new(0x48u);
      *(_QWORD *)v5 = *(_QWORD *)v4;
      *(__m128i *)(v5 + 8) = _mm_loadu_si128((const __m128i *)(v4 + 8));
      v6 = _mm_loadu_si128((const __m128i *)(v4 + 24));
      *(_QWORD *)(v5 + 40) = v5 + 56;
      *(__m128i *)(v5 + 24) = v6;
      sub_F00A90((_QWORD *)(v5 + 40), *(_BYTE **)(v4 + 40), *(_QWORD *)(v4 + 40) + *(_QWORD *)(v4 + 48));
      *a1 = v5;
      return 0;
    case 3:
      v7 = (_QWORD *)*a1;
      if ( !*a1 )
        return 0;
      v8 = (_QWORD *)v7[5];
      if ( v8 != v7 + 7 )
        operator delete(v8);
      operator delete(v7, 0x48u);
      return 0;
    case 1:
      *a1 = *a2;
      return 0;
    default:
      return 0;
  }
}

