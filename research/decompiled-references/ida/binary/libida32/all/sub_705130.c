__int64 __fastcall sub_705130(
        __int64 *a1,
        __int64 a2,
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
  unsigned int *v11; // rax
  __int64 *v13; // rbx
  __int64 v14; // r12
  double v16; // xmm4_8
  double v17; // xmm5_8
  __m128i v18; // xmm0
  __int64 v19; // rbx
  __int64 v20; // r14
  __m128i v21; // rax
  __m128i v22; // [rsp+0h] [rbp-88h] BYREF
  __int64 v23; // [rsp+10h] [rbp-78h]
  __m128i v24; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-48h]
  unsigned __int64 v28; // [rsp+58h] [rbp-30h]

  v11 = *(unsigned int **)(a2 + 24);
  v28 = __readfsqword(0x28u);
  if ( v11 )
  {
    v13 = (__int64 *)(v11 + 4);
    v14 = (__int64)&v11[2 * *v11 + 4];
    if ( v11 + 4 != (unsigned int *)v14 )
    {
      while ( (unsigned __int8)sub_701B90(a1, *v13, a4, a5, a6, a7, a8, a9, a10, a11) )
      {
        if ( (__int64 *)v14 == ++v13 )
          goto LABEL_7;
      }
      return 0;
    }
  }
LABEL_7:
  sub_EC6110(&v24, a2);
  v18 = _mm_load_si128(&v24);
  v19 = v26;
  v20 = v27;
  v22 = v18;
  v23 = v25;
  v21 = v18;
LABEL_8:
  if ( v21.m128i_i64[0] != v19 )
  {
LABEL_9:
    if ( (v21.m128i_i8[8] & 3) != 0 )
      v21.m128i_i64[0] = sub_ECEDF0(&v22);
    while ( (unsigned __int8)sub_6ED600(
                               a1,
                               *(_QWORD *)v21.m128i_i64[0],
                               a3,
                               *(double *)v18.m128i_i64,
                               a5,
                               a6,
                               a7,
                               v16,
                               v17,
                               a10,
                               a11) )
    {
      v21.m128i_i64[1] = v22.m128i_i64[1];
      if ( (v22.m128i_i8[8] & 3) != 0 )
      {
        if ( v22.m128i_i64[1] <= 3uLL )
          sub_ECEA10(&v22, 1);
        else
          sub_ECEC20(&v22);
        v21 = v22;
        goto LABEL_8;
      }
      v21.m128i_i64[0] = v22.m128i_i64[0] + 8;
      v22.m128i_i64[0] = v21.m128i_i64[0];
      if ( v19 == v21.m128i_i64[0] )
        goto LABEL_14;
    }
    return 0;
  }
LABEL_14:
  if ( v20 != v21.m128i_i64[1] )
    goto LABEL_9;
  return 1;
}

