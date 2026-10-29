__int64 __fastcall sub_69B620(__m128i *a1, __m128i *a2, __int64 a3, __m128i *a4)
{
  __m128i *v4; // rbp
  unsigned __int8 *v6; // rax
  unsigned int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // rax

  v4 = a2;
  v6 = (unsigned __int8 *)a4->m128i_i64[0];
  if ( a4->m128i_i64[0] >= (unsigned __int64)a4->m128i_i64[1] )
  {
    sub_69B280(a1, a2, 0, a3, a4);
    return 0;
  }
  else
  {
    v7 = *v6;
    a4->m128i_i64[0] = (__int64)(v6 + 1);
    sub_69B280(a1, a2, v7, a3, a4);
    if ( (v7 & 4) != 0 )
    {
      a2 = (__m128i *)a4->m128i_i64[1];
      a1 = a4;
      v4[2].m128i_i32[0] = (unsigned __int16)unpack_dw(a4, a2);
    }
    if ( (v7 & 8) != 0 )
    {
      if ( (unsigned __int8)is_cvt64(a1, a2, v8) )
        v9 = (int)unpack_dd(a4);
      else
        v9 = unpack_dq(a4);
      v4[1].m128i_i64[1] = v9;
    }
    return v7;
  }
}
