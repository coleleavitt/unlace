__int64 __fastcall sub_461E0(__int64 a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v8; // rsi
  __m128i si128; // xmm0
  __int64 v10; // rax

  if ( *a3 > 0 && (v5 = a3[2]) != 0 )
  {
    v6 = a4 + *a3;
    if ( a4 < v5 )
    {
      return sub_45FA0(a1, a2, v6);
    }
    else
    {
      sub_2B240(a2, (__int64)"bad offset %08x", v6);
      return 0;
    }
  }
  else
  {
    v8 = *a2;
    if ( (unsigned __int64)a2[2] <= 0x11 )
    {
      v10 = qvector_reserve(a2, v8, 18, 1);
      *a2 = v10;
      v8 = v10;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_6BFF0);
    a2[1] = 18;
    *(_BYTE *)(v8 + 16) = 125;
    *(__m128i *)v8 = si128;
    *(_BYTE *)(*a2 + 17) = 0;
    return 0;
  }
}

