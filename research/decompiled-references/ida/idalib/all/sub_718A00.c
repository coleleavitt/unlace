__int64 __fastcall sub_718A00(
        __int64 *a1,
        const __m128i *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        double a6,
        __m128i a7,
        double a8,
        __m128 a9,
        double a10,
        double a11,
        double a12,
        __m128 a13)
{
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  const __m128i *v16; // rbx
  __int64 v17; // r14
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h]
  __int64 v23; // [rsp+18h] [rbp-40h]
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v13 = *(_QWORD *)(a3 + 8);
  v24 = __readfsqword(0x28u);
  v14 = a3;
  if ( v13 )
  {
    a4 = a2[2].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2[2].m128i_i64[0] > 7uLL
      && !(unsigned __int8)sub_718340(
                             a1,
                             a2[2].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL,
                             v13,
                             a6,
                             a7,
                             a8,
                             a9,
                             a10,
                             a11,
                             a12,
                             a13) )
    {
      return 0;
    }
  }
  v15 = a2[1].m128i_u32[1];
  if ( (_DWORD)v15 )
  {
    v16 = a2 + 3;
    v17 = v14 + 8 * v15;
    while ( 1 )
    {
      v18 = _mm_loadu_si128(v16);
      v19 = v16[1].m128i_i64[0];
      v23 = *(_QWORD *)(v14 + 32);
      v22 = v19;
      v21 = v18;
      if ( !(unsigned __int8)sub_718840(
                               a1,
                               v21.m128i_i32,
                               v19,
                               a4,
                               a5,
                               *(double *)v18.m128i_i64,
                               a7,
                               a8,
                               a9,
                               a10,
                               a11,
                               a12,
                               a13) )
        break;
      v14 += 8;
      v16 = (const __m128i *)((char *)v16 + 24);
      if ( v17 == v14 )
        return 1;
    }
    return 0;
  }
  return 1;
}
