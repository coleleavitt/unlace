unsigned __int64 __fastcall sub_62DF70(__m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 result; // rax

  a1[11].m128i_i64[0] = 0;
  a1[10] = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a2 + 1672) + 40LL));
  v2 = sub_7AFEE0(a2);
  result = node2ea(v2);
  if ( a1[10].m128i_i64[0] < result )
  {
    result = (result + 0x7FFFFF) & 0xFFFFFFFFFF800000LL;
    a1[10].m128i_i64[1] = result;
  }
  return result;
}
