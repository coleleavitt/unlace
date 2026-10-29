unsigned __int64 __fastcall sub_FE490(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 (**v4)(); // [rsp+0h] [rbp-68h] BYREF
  int v5; // [rsp+8h] [rbp-60h]
  __m128i v6; // [rsp+10h] [rbp-58h]
  __int64 (**v7)(); // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+28h] [rbp-40h]
  __m128i v9; // [rsp+30h] [rbp-38h]
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v1 = getinf();
  v4 = off_231218;
  v5 = 0;
  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v1, (__m128i)(unsigned __int64)v1);
  v2 = getinf();
  v8 = 0x7FFFFFFF;
  v7 = off_231218;
  v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)(unsigned __int64)v2);
  ((void (__fastcall *)(__int64, __int64 (***)(), __int64 (***)()))sub_15E330)(a1, &v4, &v7);
  return v10 - __readfsqword(0x28u);
}

