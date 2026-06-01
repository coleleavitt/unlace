__int64 __fastcall sub_B8EA00(__m128i *a1, __int64 a2)
{
  __int64 result; // rax
  __m128i *v3; // rdi
  unsigned __int64 v4; // rax
  __m128i v5; // xmm0
  __m128i v6; // [rsp+8h] [rbp-10h] BYREF

  if ( a1[1].m128i_i64[0] )
  {
    *(_QWORD *)(a1[1].m128i_i64[1] + 8) = a2 | *(_QWORD *)(a1[1].m128i_i64[1] + 8) & 7LL;
    a1[1].m128i_i64[1] = a2;
  }
  else
  {
    v6.m128i_i64[0] = a2;
    v5 = _mm_loadl_epi64(&v6);
    a1[1] = _mm_unpacklo_epi64(v5, v5);
  }
  result = (a1->m128i_i8[8] & 0x7Fu) - 59;
  if ( (unsigned int)result <= 2 )
  {
    v3 = a1 - 4;
    if ( v3 )
      result = sub_BA1B60(v3, a2);
  }
  if ( *(char *)(a2 + 29) >= 0 )
  {
    result = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (_BYTE)result == 83 )
    {
      v4 = sub_B8C2C0(a2);
      return sub_A62CD0(*(_QWORD *)(v4 + 88), a2);
    }
  }
  return result;
}
