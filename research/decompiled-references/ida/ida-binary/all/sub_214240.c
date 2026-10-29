__int64 __fastcall sub_214240(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  unsigned int v17; // ebx
  __m128i si128; // [rsp+0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+10h] [rbp-68h]
  __int64 v21; // [rsp+18h] [rbp-60h]
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+28h] [rbp-50h] BYREF
  __int128 v24; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+40h] [rbp-38h]
  __int64 v26; // [rsp+48h] [rbp-30h]
  __m128i *p_si128; // [rsp+50h] [rbp-28h]
  __int64 v28; // [rsp+58h] [rbp-20h]
  unsigned __int64 v29; // [rsp+68h] [rbp-10h]

  v29 = __readfsqword(0x28u);
  v22 = a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC720);
  v20 = 0;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  v26 = a1;
  p_si128 = &si128;
  v28 = a3;
  v24 = 0;
  sub_214080(a1, &v23);
  v17 = 1;
  if ( (unsigned int)zip_deflate(&v22, sub_2160B0, sub_20A950) )
  {
    sub_169630(
      (int)"Error compressing the trace file with zip_deflate!",
      (__int64)sub_2160B0,
      v11,
      v12,
      v13,
      v14,
      (__m128)0LL,
      a5,
      a6,
      a7,
      v15,
      v16,
      a10,
      a11,
      si128.m128i_i8[0]);
    v17 = 0;
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23, (const char *)sub_2160B0);
  }
  return v17;
}
