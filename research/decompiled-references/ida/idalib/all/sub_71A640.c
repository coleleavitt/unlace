__int64 __fastcall sub_71A640(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v12; // rsi
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  double v17; // xmm4_8
  double v18; // xmm5_8
  unsigned int v19; // ebp
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rax
  double v23; // xmm4_8
  double v24; // xmm5_8
  __m128i v25; // xmm0
  __int64 v26; // r13
  __int64 v27; // r15
  __m128i v28; // rax
  __m128i v30; // [rsp+0h] [rbp-98h] BYREF
  __int64 v31; // [rsp+10h] [rbp-88h]
  __m128i v32; // [rsp+20h] [rbp-78h] BYREF
  __int64 v33; // [rsp+30h] [rbp-68h]
  __int64 v34; // [rsp+38h] [rbp-60h]
  __int64 v35; // [rsp+40h] [rbp-58h]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v12 = a2[4];
  v36 = __readfsqword(0x28u);
  v14 = sub_718340(a1, v12, a2[5], a4, a5, a6, a7, a8, a9, a10, a11);
  if ( !(_BYTE)v14 )
    return 0;
  v19 = v14;
  v20 = (__int64 *)a2[6];
  if ( v20 )
  {
    if ( !(unsigned __int8)sub_717AC0(a1, *v20, (__int64)(v20 + 1), v15, v16, a4, a5, a6, a7, v17, v18, a10, a11) )
      return 0;
  }
  v21 = a2[8];
  if ( v21 )
  {
    if ( (v21 & 4) == 0 )
    {
      v22 = (__int64 *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v22 )
      {
        if ( !(unsigned __int8)sub_717AC0(a1, *v22, (__int64)(v22 + 1), v15, v16, a4, a5, a6, a7, v17, v18, a10, a11) )
          return 0;
      }
    }
  }
  sub_EE9E50(&v32, a2);
  v25 = _mm_load_si128(&v32);
  v26 = v34;
  v27 = v35;
  v30 = v25;
  v31 = v33;
  v28 = v25;
LABEL_9:
  if ( v26 != v28.m128i_i64[0] )
  {
LABEL_10:
    if ( (v28.m128i_i8[8] & 3) != 0 )
      v28.m128i_i64[0] = sub_EF2B30(&v30);
    while ( (unsigned __int8)sub_70DBE0(
                               a1,
                               *(_QWORD *)v28.m128i_i64[0],
                               a3,
                               *(double *)v25.m128i_i64,
                               a5,
                               a6,
                               a7,
                               v23,
                               v24,
                               a10,
                               a11) )
    {
      v28.m128i_i64[1] = v30.m128i_i64[1];
      if ( (v30.m128i_i8[8] & 3) != 0 )
      {
        if ( v30.m128i_i64[1] <= 3uLL )
          sub_EF2750(&v30, 1);
        else
          sub_EF2960(&v30);
        v28 = v30;
        goto LABEL_9;
      }
      v28.m128i_i64[0] = v30.m128i_i64[0] + 8;
      v30.m128i_i64[0] = v28.m128i_i64[0];
      if ( v28.m128i_i64[0] == v26 )
        goto LABEL_15;
    }
    return 0;
  }
LABEL_15:
  if ( v27 != v28.m128i_i64[1] )
    goto LABEL_10;
  return v19;
}
