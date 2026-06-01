__int64 __fastcall sub_69B6D0(__m128i *a1, __m128i *a2, __int64 a3, __m128i *a4)
{
  unsigned __int8 v7; // al
  __m128i *v8; // rsi
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rax

  v7 = sub_69B620(a1, a2, a3, a4);
  v8 = (__m128i *)((char *)a2 + 40);
  sub_69B280(a1, v8, v7 >> 4, a3, a4);
  result = 0;
  if ( a2[3].m128i_i64[0] )
  {
    a2[4].m128i_i64[0] = 0;
  }
  else
  {
    if ( (unsigned __int8)is_cvt64(a1, v8, v9) )
    {
      v11 = (unsigned int)a3 + (unsigned int)unpack_dd(a4);
      if ( v11 == 0xFFFFFFFFLL )
        v11 = -1;
    }
    else
    {
      v11 = a3 + unpack_dq(a4);
    }
    result = *(_QWORD *)(a1->m128i_i64[0] + 1504) & v11;
    a2[4].m128i_i64[0] = result;
  }
  return result;
}
