__int64 __fastcall sub_7E58D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned int v7; // [rsp+Ch] [rbp-1Ch]
  __m128i v8; // [rsp+10h] [rbp-18h] BYREF

  sub_79AD00(&v8, *(_QWORD *)(a1 + 80), a2, a3);
  result = sub_79C480(*(_QWORD *)(a1 + 80), v8.m128i_i64[0]);
  v4 = v8.m128i_i64[0];
  if ( v8.m128i_i64[0] )
  {
    v5 = v8.m128i_i64[1];
    if ( (*(_DWORD *)(v8.m128i_i64[0] + 8))-- == 1 )
    {
      v7 = result;
      sub_15D7BC0(v5, v4);
      return v7;
    }
  }
  return result;
}

