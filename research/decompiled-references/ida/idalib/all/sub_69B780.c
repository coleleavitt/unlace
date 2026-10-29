__int64 __fastcall sub_69B780(__m128i *a1, __m128i *a2, __int64 a3, __m128i *a4)
{
  __m128i *v4; // r12
  __int64 result; // rax
  __int64 v7; // rdx
  char v8; // bp
  char v9; // al

  v4 = a2;
  result = sub_69B620(a1, a2, a3, a4);
  v8 = result;
  if ( (result & 0x10) == 0 )
  {
    if ( (result & 0x20) == 0 )
      return result;
    goto LABEL_7;
  }
  v9 = is_cvt64(a1, a2, v7);
  a2 = (__m128i *)a4->m128i_i64[1];
  a1 = a4;
  if ( v9 )
    result = (int)unpack_dd(a4);
  else
    result = unpack_dq(a4);
  v4[3].m128i_i64[0] = result;
  if ( (v8 & 0x20) != 0 )
  {
LABEL_7:
    if ( (unsigned __int8)is_cvt64(a1, a2, v7) )
      result = (int)unpack_dd(a4);
    else
      result = unpack_dq(a4);
    v4[2].m128i_i64[1] = result;
  }
  return result;
}
