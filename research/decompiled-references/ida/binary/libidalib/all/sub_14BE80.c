__int64 __fastcall sub_14BE80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __m128i v6; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v6.m128i_i64[0] = a2;
  v4 = qalloc_or_throw();
  v6.m128i_i64[1] = a3;
  sub_14BCB0(v4, &v6);
  return sub_14B6C0(v4, a1);
}

