__int64 __fastcall sub_71A060(
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
        __m128 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v14; // rsi
  __int64 *v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int **v19; // r15
  unsigned int **v20; // rbp
  char v21; // al
  unsigned int *v22; // rsi
  unsigned int v23; // eax
  double v25; // xmm4_8
  double v26; // xmm5_8
  __m128i v27; // xmm0
  __int64 v28; // rbp
  __int64 v29; // r13
  __m128i v30; // rax
  __m128i v32; // [rsp+10h] [rbp-98h] BYREF
  __int64 v33; // [rsp+20h] [rbp-88h]
  __m128i v34; // [rsp+30h] [rbp-78h] BYREF
  __int64 v35; // [rsp+40h] [rbp-68h]
  __int64 v36; // [rsp+48h] [rbp-60h]
  __int64 v37; // [rsp+50h] [rbp-58h]
  unsigned __int64 v38; // [rsp+68h] [rbp-40h]

  v14 = *(_QWORD *)(a2 + 24);
  v38 = __readfsqword(0x28u);
  if ( v14 && !(unsigned __int8)sub_709840(a1, v14, a4, a5, a6, a7, a8, a9, a10, a11) )
    return 0;
  v15 = (__int64 *)(a2 + 48);
  v16 = a2 + 48 + 8LL * *(unsigned int *)(a2 + 16);
  v17 = 0;
  if ( a2 + 48 != v16 )
  {
    do
    {
      if ( *v15 && !(unsigned __int8)sub_709840(a1, *v15, a4, a5, a6, a7, a8, a9, a10, a11) )
        return 0;
      ++v15;
    }
    while ( (__int64 *)v16 != v15 );
    v17 = 8LL * *(unsigned int *)(a2 + 16);
  }
  v18 = a2 + v17 + 48;
  v19 = (unsigned int **)v18;
  v20 = (unsigned int **)(v18 + 8LL * *(unsigned int *)(a2 + 20));
  if ( v20 != (unsigned int **)v18 )
  {
    do
    {
      v22 = *v19;
      v23 = **v19;
      if ( v23 <= 2 )
      {
        if ( v23 )
        {
          v21 = sub_7193F0(a1, (__int64)v22, a4, a5, a6, a7, a8, a9, a10, a11);
LABEL_13:
          if ( !v21 )
            return 0;
          goto LABEL_14;
        }
        if ( v22[4] != 1 )
        {
          v21 = sub_717AC0(
                  a1,
                  *(_QWORD *)(*((_QWORD *)v22 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                  (*((_QWORD *)v22 + 1) & 0xFFFFFFFFFFFFFFF8LL) + 8,
                  v18,
                  a13,
                  a4,
                  a5,
                  a6,
                  a7,
                  a8,
                  a9,
                  a10,
                  a11);
          goto LABEL_13;
        }
      }
      else if ( !*((_BYTE *)v22 + 24)
             && !(unsigned __int8)sub_70DBE0(a1, *((_QWORD *)v22 + 1), 0, a4, a5, a6, a7, a8, a9, a10, a11) )
      {
        return 0;
      }
LABEL_14:
      ++v19;
    }
    while ( v20 != v19 );
  }
  sub_EE9E50(&v34, a2);
  v27 = _mm_load_si128(&v34);
  v28 = v36;
  v29 = v37;
  v33 = v35;
  v30 = v27;
  v32 = v27;
LABEL_21:
  if ( v28 != v30.m128i_i64[0] )
  {
LABEL_22:
    if ( (v30.m128i_i8[8] & 3) != 0 )
      v30.m128i_i64[0] = sub_EF2B30(&v32);
    while ( (unsigned __int8)sub_70DBE0(
                               a1,
                               *(_QWORD *)v30.m128i_i64[0],
                               a3,
                               *(double *)v27.m128i_i64,
                               a5,
                               a6,
                               a7,
                               v25,
                               v26,
                               a10,
                               a11) )
    {
      v30.m128i_i64[1] = v32.m128i_i64[1];
      if ( (v32.m128i_i8[8] & 3) != 0 )
      {
        if ( v32.m128i_i64[1] <= 3uLL )
          sub_EF2750(&v32, 1);
        else
          sub_EF2960(&v32);
        v30 = v32;
        goto LABEL_21;
      }
      v30.m128i_i64[0] = v32.m128i_i64[0] + 8;
      v32.m128i_i64[0] = v30.m128i_i64[0];
      if ( v28 == v30.m128i_i64[0] )
        goto LABEL_27;
    }
    return 0;
  }
LABEL_27:
  if ( v29 != v30.m128i_i64[1] )
    goto LABEL_22;
  return 1;
}
