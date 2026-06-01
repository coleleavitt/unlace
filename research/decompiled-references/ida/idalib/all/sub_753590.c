__int64 __fastcall sub_753590(__m128i *a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  if ( !a1 )
    return 4294967194LL;
  v1 = a1[10].m128i_i64[1];
  a1[8].m128i_i64[0] = 0;
  a1[8].m128i_i64[1] = v1;
  result = sub_752C70((__int64)a1, a1 + 11, &a1[19].m128i_i64[1], 0, 0, 0, 0, 0, 0);
  a1[9].m128i_i64[0] = (_DWORD)result == 0;
  return result;
}
