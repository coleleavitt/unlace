__int64 __fastcall sub_6FC140(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
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
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 *v16; // rax
  double v18; // xmm4_8
  double v19; // xmm5_8
  __m128i v20; // xmm0
  __int64 v21; // rbp
  __int64 v22; // r13
  __m128i v23; // rax
  __m128i v25; // [rsp+10h] [rbp-98h] BYREF
  __int64 v26; // [rsp+20h] [rbp-88h]
  __m128i v27; // [rsp+30h] [rbp-78h] BYREF
  __int64 v28; // [rsp+40h] [rbp-68h]
  __int64 v29; // [rsp+48h] [rbp-60h]
  __int64 v30; // [rsp+50h] [rbp-58h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v13 = 0;
  v31 = __readfsqword(0x28u);
  v14 = *(unsigned int *)(a2 + 4);
  v15 = 8 * v14;
  if ( (_DWORD)v14 )
  {
    do
    {
      v16 = *(__int64 **)(((*(_BYTE *)(a2 + 3) & 8) == 0 ? 0x38 : 0) + a2 + v13 + 24);
      if ( !(unsigned __int8)sub_6F74E0(a1, *v16, (__int64)(v16 + 1), a4, a5, a6, a7, a8, a9, a10, a11, a12, a13) )
        return 0;
      v13 += 8;
    }
    while ( v13 != v15 );
  }
  sub_EC6110(&v27, a2);
  v20 = _mm_load_si128(&v27);
  v21 = v29;
  v22 = v30;
  v26 = v28;
  v23 = v20;
  v25 = v20;
LABEL_7:
  if ( v21 != v23.m128i_i64[0] )
  {
LABEL_8:
    if ( (v23.m128i_i8[8] & 3) != 0 )
      v23.m128i_i64[0] = sub_ECEDF0(&v25);
    while ( (unsigned __int8)sub_6ED600(
                               a1,
                               *(_QWORD *)v23.m128i_i64[0],
                               a3,
                               *(double *)v20.m128i_i64,
                               a7,
                               a8,
                               a9,
                               v18,
                               v19,
                               a12,
                               a13) )
    {
      v23.m128i_i64[1] = v25.m128i_i64[1];
      if ( (v25.m128i_i8[8] & 3) != 0 )
      {
        if ( v25.m128i_i64[1] <= 3uLL )
          sub_ECEA10(&v25, 1);
        else
          sub_ECEC20(&v25);
        v23 = v25;
        goto LABEL_7;
      }
      v23.m128i_i64[0] = v25.m128i_i64[0] + 8;
      v25.m128i_i64[0] = v23.m128i_i64[0];
      if ( v21 == v23.m128i_i64[0] )
        goto LABEL_13;
    }
    return 0;
  }
LABEL_13:
  if ( v22 != v23.m128i_i64[1] )
    goto LABEL_8;
  return 1;
}

