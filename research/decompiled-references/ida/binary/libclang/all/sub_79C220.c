__int64 __fastcall sub_79C220(__m128i *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax

  if ( a1[1].m128i_i64[0] )
  {
    *(_QWORD *)(a1[1].m128i_i64[1] + 8) = a2 | *(_QWORD *)(a1[1].m128i_i64[1] + 8) & 7LL;
    a1[1].m128i_i64[1] = a2;
  }
  else
  {
    a1[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  }
  result = (a1->m128i_i8[8] & 0x7Fu) - 57;
  if ( (unsigned int)result <= 2 )
    result = sub_7AF7A0(&a1[-4], a2);
  if ( *(char *)(a2 + 29) >= 0 )
  {
    result = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (_BYTE)result == 80 )
    {
      v3 = sub_793320(a2);
      return sub_6BF020(*(_QWORD *)(v3 + 88), a2);
    }
  }
  return result;
}

