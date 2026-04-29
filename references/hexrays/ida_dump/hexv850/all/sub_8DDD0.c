unsigned __int64 __fastcall sub_8DDD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm1
  __m128i v4; // xmm0
  __int64 v6; // [rsp+0h] [rbp-58h] BYREF
  __m128i v7; // [rsp+8h] [rbp-50h] BYREF
  __int64 v8; // [rsp+18h] [rbp-40h]
  __m128i si128; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+30h] [rbp-28h]
  __int16 v11; // [rsp+34h] [rbp-24h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v7 = 0;
  v6 = 0;
  v8 = 0;
  v11 = 256;
  v10 = 4;
  si128 = _mm_load_si128((const __m128i *)&xmmword_400180);
  sub_8CA60(a1, (__int64)&v6);
  v2 = *(_QWORD *)a2;
  v3 = _mm_loadu_si128(&v7);
  v4 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)a2 = v6;
  *(__m128i *)(a2 + 8) = v3;
  v6 = v2;
  v7 = v4;
  sub_7BF90(&v6);
  return v12 - __readfsqword(0x28u);
}
