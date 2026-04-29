unsigned __int64 __fastcall sub_41590(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  bool v8; // zf
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  int v12; // [rsp+4h] [rbp-54h] BYREF
  int v13; // [rsp+8h] [rbp-50h] BYREF
  int v14; // [rsp+Ch] [rbp-4Ch] BYREF
  __m128i v15; // [rsp+10h] [rbp-48h] BYREF
  __m128i v16; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v8 = *(_QWORD *)(a1 + 616) == 0;
  v14 = a4;
  v13 = a5;
  v12 = a6;
  v17 = __readfsqword(0x28u);
  v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v13, (__m128i)(unsigned __int64)&a7);
  v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v14, (__m128i)(unsigned __int64)&v12);
  if ( !v8 )
  {
    v8 = *(_WORD *)(a2 + 26) == 4;
    v15 = v10;
    v16 = v9;
    if ( v8 )
      sub_407D0((__int64)&v15, (__int64)&v16, 2);
    sub_1B910(a1, a2, a3, v14, v13, v12, a7);
  }
  return v17 - __readfsqword(0x28u);
}
