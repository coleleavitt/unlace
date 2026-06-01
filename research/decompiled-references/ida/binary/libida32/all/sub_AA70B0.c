__int64 __fastcall sub_AA70B0(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v4; // r12
  __int64 v5; // rbp
  __m128i v6; // xmm0
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi

  switch ( a3 )
  {
    case 2:
      v4 = *a2;
      v5 = operator new(0x38u);
      *(_QWORD *)v5 = *(_QWORD *)v4;
      v6 = _mm_loadu_si128((const __m128i *)(v4 + 8));
      *(_QWORD *)(v5 + 24) = v5 + 40;
      *(__m128i *)(v5 + 8) = v6;
      sub_AA6DA0((_QWORD *)(v5 + 24), *(_BYTE **)(v4 + 24), *(_QWORD *)(v4 + 24) + *(_QWORD *)(v4 + 32));
      *a1 = v5;
      return 0;
    case 3:
      v7 = (_QWORD *)*a1;
      if ( !*a1 )
        return 0;
      v8 = (_QWORD *)v7[3];
      if ( v8 != v7 + 5 )
        operator delete(v8);
      operator delete(v7, 0x38u);
      return 0;
    case 1:
      *a1 = *a2;
      return 0;
    default:
      return 0;
  }
}

