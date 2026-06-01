__int64 __fastcall sub_48F40(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rsi
  __m128i si128; // xmm0
  __int64 v12; // rax

  if ( a3 == 1 )
  {
    v5 = (__int64 *)(a1 + 320);
    goto LABEL_4;
  }
  if ( a3 == 2 )
  {
    v5 = (__int64 *)(a1 + 352);
LABEL_4:
    v6 = *v5;
    if ( *v5 > 0 && (v7 = v5[2]) != 0 )
    {
      v8 = a4 + v6;
      if ( a4 < v7 )
      {
        return sub_45FA0(a1, a2, v8);
      }
      else
      {
        sub_2B240(a2, (__int64)"bad offset %08x", v8);
        return 0;
      }
    }
    else
    {
      v10 = *a2;
      if ( (unsigned __int64)a2[2] <= 0x11 )
      {
        v12 = qvector_reserve(a2, v10, 18, 1);
        *a2 = v12;
        v10 = v12;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_6BFF0);
      a2[1] = 18;
      *(_BYTE *)(v10 + 16) = 125;
      *(__m128i *)v10 = si128;
      *(_BYTE *)(*a2 + 17) = 0;
      return 0;
    }
  }
  if ( under_debugger )
    BUG();
  interr(20086);
  return sub_49020(20086, a2);
}

