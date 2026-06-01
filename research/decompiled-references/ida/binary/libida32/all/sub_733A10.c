__int64 __fastcall sub_733A10(__m128i *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 result; // rax

  if ( !a1 )
    return 4294967194LL;
  if ( !a1[9].m128i_i64[0] )
    return 4294967196LL;
  v1 = a1[6].m128i_i64[1];
  v2 = a1[8].m128i_i64[0] + 1;
  if ( v1 != 0xFFFF && v1 == v2 )
    return 4294967196LL;
  v3 = a1[15].m128i_i64[1];
  v4 = a1[8].m128i_i64[1] + a1[15].m128i_i64[0];
  a1[8].m128i_i64[0] = v2;
  a1[8].m128i_i64[1] = a1[16].m128i_i64[0] + v4 + v3 + 46;
  result = sub_7327A0((__int64)a1, a1 + 11, &a1[19].m128i_i64[1], 0, 0, 0, 0, 0, 0);
  a1[9].m128i_i64[0] = (_DWORD)result == 0;
  return result;
}

