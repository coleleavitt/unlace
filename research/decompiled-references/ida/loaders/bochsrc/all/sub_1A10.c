__int64 __fastcall sub_1A10(__int64 *a1, __int64 *a2, __int64 a3)
{
  char v4; // dl
  __int64 result; // rax
  __m128i *v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = sub_1440(a3, byte_4140, 0x1000u);
  result = 0;
  if ( v4 )
  {
    v6 = (__m128i *)*a1;
    if ( (unsigned __int64)a1[2] <= 0x18 )
    {
      v9 = qvector_reserve(a1, v6, 25, 1);
      *a1 = v9;
      v6 = (__m128i *)v9;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_20A0);
    a1[1] = 25;
    v6[1].m128i_i64[0] = 0x656C6966206E6F69LL;
    *v6 = si128;
    *(_BYTE *)(*a1 + 24) = 0;
    v8 = *a2;
    if ( (unsigned __int64)a2[2] <= 6 )
    {
      v10 = qvector_reserve(a2, v8, 7, 1);
      *a2 = v10;
      v8 = v10;
    }
    a2[1] = 7;
    *(_DWORD *)v8 = 1635018093;
    *(_WORD *)(v8 + 4) = 25456;
    *(_BYTE *)(*a2 + 6) = 0;
    return 1;
  }
  return result;
}

