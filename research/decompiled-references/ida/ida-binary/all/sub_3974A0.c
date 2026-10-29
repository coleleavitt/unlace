__int64 __fastcall sub_3974A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __m128i v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v8.m128i_i64[0] = a2;
  v4 = qalloc_or_throw(232);
  v8.m128i_i64[1] = a3;
  sub_3970E0(v4, &v8);
  return sub_396C70(v4, a1, v5, v6);
}
