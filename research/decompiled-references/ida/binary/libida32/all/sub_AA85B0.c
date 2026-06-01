__int64 __fastcall sub_AA85B0(__m128i **a1, __m128i **a2, int a3)
{
  __m128i *v4; // r12
  __m128i *v5; // rbx
  __int64 v6; // rax
  __m128i *v7; // rbx
  __m128i *v8; // rdi

  switch ( a3 )
  {
    case 2:
      v4 = *a2;
      v5 = (__m128i *)operator new(0x48u);
      v5->m128i_i8[0] = v4->m128i_i8[0];
      v5->m128i_i64[1] = v4->m128i_i64[1];
      v5[1].m128i_i64[0] = (__int64)v5[2].m128i_i64;
      sub_AA6DA0((__m128i *)v5[1].m128i_i64, (_BYTE *)v4[1].m128i_i64[0], v4[1].m128i_i64[0] + v4[1].m128i_i64[1]);
      v5[3] = _mm_loadu_si128(v4 + 3);
      v6 = v4[4].m128i_i64[0];
      *a1 = v5;
      v5[4].m128i_i64[0] = v6;
      return 0;
    case 3:
      v7 = *a1;
      if ( !*a1 )
        return 0;
      v8 = (__m128i *)v7[1].m128i_i64[0];
      if ( v8 != &v7[2] )
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

