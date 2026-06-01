__int64 __fastcall sub_6B8770(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __m128i v6[2]; // [rsp+0h] [rbp-28h] BYREF

  v6[0].m128i_i64[0] = a2;
  v6[0].m128i_i64[1] = a4;
  if ( a3 )
    sub_686B20(a1 + 56, v6);
  else
    sub_686B20(a1 + 80, v6);
  v6[0].m128i_i64[0] = a4;
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  return sub_6ACBA0((_QWORD *)(a1 + 112), v6);
}

