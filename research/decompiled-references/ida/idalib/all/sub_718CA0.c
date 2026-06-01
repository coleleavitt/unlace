__int64 __fastcall sub_718CA0(
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
  __int64 v12; // rsi
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  double v17; // xmm4_8
  double v18; // xmm5_8
  unsigned int v19; // r12d
  double v20; // xmm4_8
  double v21; // xmm5_8
  __m128i v22; // xmm0
  __int64 v23; // r13
  __int64 v24; // r15
  __m128i v25; // rax
  __int64 v27; // rax
  _DWORD *v28; // rdx
  __int64 v29; // r15
  int *v30; // r13
  int *v31; // r15
  __m128i v32; // [rsp+0h] [rbp-98h] BYREF
  __int64 v33; // [rsp+10h] [rbp-88h]
  __m128i v34; // [rsp+20h] [rbp-78h] BYREF
  __int64 v35; // [rsp+30h] [rbp-68h]
  __int64 v36; // [rsp+38h] [rbp-60h]
  __int64 v37; // [rsp+40h] [rbp-58h]
  unsigned __int64 v38; // [rsp+58h] [rbp-40h]

  v12 = *(_QWORD *)(a2 + 40);
  v38 = __readfsqword(0x28u);
  v14 = sub_718340(a1, v12, *(_QWORD *)(a2 + 48), a4, a5, a6, a7, a8, a9, a10, a11);
  if ( !(_BYTE)v14 )
    return 0;
  v19 = v14;
  if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
  {
    v27 = 8LL * *(unsigned int *)(a2 + 4);
    if ( (*(_WORD *)a2 & 0x1FF) == 0x18 && a2 )
    {
      v28 = (_DWORD *)(a2 + v27 + 64);
      if ( !*v28 )
        goto LABEL_3;
      v29 = *(unsigned int *)(a2 + v27 + 76);
      v30 = (int *)(a2 + v27 + 80);
    }
    else
    {
      v28 = (_DWORD *)(a2 + v27 + 80);
      v15 = (unsigned int)*v28;
      if ( !(_DWORD)v15 )
        goto LABEL_3;
      v29 = *(unsigned int *)(a2 + v27 + 92);
      v30 = (int *)(a2 + v27 + 96);
    }
    if ( (_DWORD)v29 )
    {
      v31 = &v30[8 * v29];
      while ( (unsigned __int8)sub_718840(a1, v30, (__int64)v28, v15, v16, a4, a5, a6, a7, v17, v18, a10, a11) )
      {
        v30 += 8;
        if ( v31 == v30 )
          goto LABEL_3;
      }
      return 0;
    }
  }
LABEL_3:
  sub_EE9E50(&v34, a2);
  v22 = _mm_load_si128(&v34);
  v23 = v36;
  v24 = v37;
  v32 = v22;
  v33 = v35;
  v25 = v22;
LABEL_4:
  if ( v23 != v25.m128i_i64[0] )
  {
LABEL_5:
    if ( (v25.m128i_i8[8] & 3) != 0 )
      v25.m128i_i64[0] = sub_EF2B30(&v32);
    while ( (unsigned __int8)sub_70DBE0(
                               a1,
                               *(_QWORD *)v25.m128i_i64[0],
                               a3,
                               *(double *)v22.m128i_i64,
                               a5,
                               a6,
                               a7,
                               v20,
                               v21,
                               a10,
                               a11) )
    {
      v25.m128i_i64[1] = v32.m128i_i64[1];
      if ( (v32.m128i_i8[8] & 3) != 0 )
      {
        if ( v32.m128i_i64[1] <= 3uLL )
          sub_EF2750(&v32, 1);
        else
          sub_EF2960(&v32);
        v25 = v32;
        goto LABEL_4;
      }
      v25.m128i_i64[0] = v32.m128i_i64[0] + 8;
      v32.m128i_i64[0] = v25.m128i_i64[0];
      if ( v23 == v25.m128i_i64[0] )
        goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  if ( v24 != v25.m128i_i64[1] )
    goto LABEL_5;
  return v19;
}
