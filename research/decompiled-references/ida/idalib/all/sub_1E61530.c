__m128i *__fastcall sub_1E61530(_QWORD *a1, const __m128i *a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __m128i *v7; // rbx
  bool v8; // zf
  __int8 *v9; // rdx

  a2[3].m128i_i8[10] |= 2u;
  v6 = a1[294];
  a1[304] += 40LL;
  v7 = (__m128i *)((v6 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a3 == 1 )
  {
    if ( a1[295] >= (unsigned __int64)&v7[2].m128i_u64[1] && v6 )
      a1[294] = (char *)v7 + 40;
    else
      v7 = (__m128i *)sub_986170((__int64)(a1 + 294), 40, 40, 3, a5, a6);
    sub_B1A560(v7, (__int64)a1, a2);
    return v7;
  }
  else if ( a3 )
  {
    v8 = a3 == 2;
    v9 = &v7[2].m128i_i8[8];
    if ( v8 )
    {
      if ( a1[295] >= (unsigned __int64)v9 && v6 )
        a1[294] = v9;
      else
        v7 = (__m128i *)sub_986170((__int64)(a1 + 294), 40, 40, 3, a5, a6);
      sub_B1A530(v7, (__int64)a1, a2);
      return v7;
    }
    else
    {
      if ( a1[295] >= (unsigned __int64)v9 && v6 )
        a1[294] = v9;
      else
        v7 = (__m128i *)sub_986170((__int64)(a1 + 294), 40, 40, 3, a5, a6);
      sub_B1A590(v7, (__int64)a1, a2);
      return v7;
    }
  }
  else
  {
    if ( a1[295] >= (unsigned __int64)&v7[2].m128i_u64[1] && v6 )
      a1[294] = (char *)v7 + 40;
    else
      v7 = (__m128i *)sub_986170((__int64)(a1 + 294), 40, 40, 3, a5, a6);
    sub_B1A500(v7, (__int64)a1, a2);
    return v7;
  }
}
