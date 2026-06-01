__int64 __fastcall sub_46BAA0(__m128i **a1, const __m128i **a2, int a3)
{
  __m128i *v4; // rdi
  const __m128i *v5; // rbp
  __m128i *v6; // rax
  __int64 v7; // rdx

  switch ( a3 )
  {
    case 1:
      *a1 = (__m128i *)*a2;
      break;
    case 2:
      v5 = *a2;
      v6 = (__m128i *)operator new(0x18u);
      *v6 = _mm_loadu_si128(v5);
      v7 = v5[1].m128i_i64[0];
      *a1 = v6;
      v6[1].m128i_i64[0] = v7;
      break;
    case 3:
      v4 = *a1;
      if ( v4 )
        operator delete(v4, 0x18u);
      break;
    case 0:
      *a1 = nullptr;
      break;
  }
  return 0;
}

