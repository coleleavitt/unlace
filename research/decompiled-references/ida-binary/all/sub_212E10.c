unsigned __int64 __fastcall sub_212E10(__int64 a1)
{
  __m128i v2; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v2 = _mm_unpacklo_epi64(
         (__m128i)(unsigned __int64)qword_8CBC10,
         (__m128i)(unsigned __int64)(qword_8CBC10 + qword_8CBC18));
  deserialize_dynamic_register_set(a1, &v2);
  return v3 - __readfsqword(0x28u);
}
