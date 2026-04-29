unsigned __int64 __fastcall sub_41470(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  bool v11; // zf
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  int v16; // [rsp+8h] [rbp-70h] BYREF
  int v17; // [rsp+Ch] [rbp-6Ch] BYREF
  __m128i v18; // [rsp+10h] [rbp-68h] BYREF
  int *v19; // [rsp+20h] [rbp-58h]
  __m128i v20; // [rsp+30h] [rbp-48h] BYREF
  int *v21; // [rsp+40h] [rbp-38h]
  unsigned __int64 v22; // [rsp+48h] [rbp-30h]

  v11 = *(_QWORD *)(a1 + 616) == 0;
  v17 = a5;
  v16 = a6;
  v22 = __readfsqword(0x28u);
  v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v16, (__m128i)(unsigned __int64)&a8);
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v17, (__m128i)(unsigned __int64)&a7);
  if ( !v11 )
  {
    v19 = &a9;
    v11 = *(_WORD *)(a2 + 26) == 4;
    v21 = &a10;
    v18 = v13;
    v20 = v12;
    if ( v11 )
      sub_407D0((__int64)&v18, (__int64)&v20, 3);
    sub_1B6E0(a1, a2, a3, a4, v17, v16, a7, a8, a9, a10);
  }
  return v22 - __readfsqword(0x28u);
}
