__int64 __fastcall sub_2AD970(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v5; // [rsp+8h] [rbp-80h] BYREF
  int v6; // [rsp+18h] [rbp-70h]
  __m128i v7; // [rsp+20h] [rbp-68h]
  int v8; // [rsp+30h] [rbp-58h]
  __int64 (__fastcall **v9)(); // [rsp+40h] [rbp-48h]
  __m128i v10; // [rsp+48h] [rbp-40h] BYREF
  int v11; // [rsp+58h] [rbp-30h]
  __m128i v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+70h] [rbp-18h]
  unsigned __int64 v14; // [rsp+78h] [rbp-10h]

  v2 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v14 = __readfsqword(0x28u);
  v11 = 0;
  v10 = v2;
  v12 = v2;
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v13 = -2;
  v6 = 0;
  v8 = -2;
  v9 = off_4DB9B8;
  v5 = v3;
  v7 = v3;
  return sub_258030((__int64)&v5, (__int64)&v10);
}
