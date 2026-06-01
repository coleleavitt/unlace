__int64 __fastcall sub_719C70(
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  double v18; // xmm4_8
  double v19; // xmm5_8
  unsigned int v20; // r12d
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  double v26; // xmm4_8
  double v27; // xmm5_8
  double v28; // xmm4_8
  double v29; // xmm5_8
  __m128i v30; // xmm0
  __int64 v31; // r13
  __int64 v32; // r15
  __m128i v33; // rax
  __int64 v34; // rax
  int *v35; // r14
  __int64 v36; // r15
  __m128i v37; // [rsp+20h] [rbp-98h] BYREF
  __int64 v38; // [rsp+30h] [rbp-88h]
  __m128i v39; // [rsp+40h] [rbp-78h] BYREF
  __int64 v40; // [rsp+50h] [rbp-68h]
  __int64 v41; // [rsp+58h] [rbp-60h]
  __int64 v42; // [rsp+60h] [rbp-58h]
  unsigned __int64 v43; // [rsp+78h] [rbp-40h]

  v12 = *(_QWORD *)(a2 + 16);
  v43 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_718340(a1, v12, *(_QWORD *)(a2 + 24), a4, a5, a6, a7, a8, a9, a10, a11) )
  {
    v22 = _mm_loadu_si128((const __m128i *)(a2 + 32));
    v20 = sub_719170(
            a1,
            *(double *)v22.m128i_i64,
            a5,
            a6,
            a7,
            v18,
            v19,
            a10,
            a11,
            v12,
            v14,
            v15,
            v16,
            v17,
            v22.m128i_i64[0],
            v22.m128i_i32[2],
            *(__int64 **)(a2 + 48));
    if ( (_BYTE)v20 )
    {
      if ( (*(_BYTE *)(a2 + 2) & 8) != 0 && *(_DWORD *)(a2 + 56) && (v34 = *(unsigned int *)(a2 + 68), (_DWORD)v34) )
      {
        v35 = (int *)(a2 + 72);
        v36 = a2 + 72 + 32 * v34;
        while ( (unsigned __int8)sub_718840(
                                   a1,
                                   v35,
                                   v23,
                                   v24,
                                   v25,
                                   *(double *)v22.m128i_i64,
                                   a5,
                                   a6,
                                   a7,
                                   v26,
                                   v27,
                                   a10,
                                   a11) )
        {
          v35 += 8;
          if ( v35 == (int *)v36 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        sub_EE9E50(&v39, a2);
        v30 = _mm_load_si128(&v39);
        v31 = v41;
        v32 = v42;
        v38 = v40;
        v33 = v30;
        v37 = v30;
LABEL_7:
        if ( v31 == v33.m128i_i64[0] )
        {
LABEL_13:
          if ( v32 == v33.m128i_i64[1] )
            return v20;
        }
        if ( (v33.m128i_i8[8] & 3) != 0 )
          v33.m128i_i64[0] = sub_EF2B30(&v37);
        while ( (unsigned __int8)sub_70DBE0(
                                   a1,
                                   *(_QWORD *)v33.m128i_i64[0],
                                   a3,
                                   *(double *)v30.m128i_i64,
                                   a5,
                                   a6,
                                   a7,
                                   v28,
                                   v29,
                                   a10,
                                   a11) )
        {
          v33.m128i_i64[1] = v37.m128i_i64[1];
          if ( (v37.m128i_i8[8] & 3) != 0 )
          {
            if ( v37.m128i_i64[1] <= 3uLL )
              sub_EF2750(&v37, 1);
            else
              sub_EF2960(&v37);
            v33 = v37;
            goto LABEL_7;
          }
          v33.m128i_i64[0] = v37.m128i_i64[0] + 8;
          v37.m128i_i64[0] = v33.m128i_i64[0];
          if ( v31 == v33.m128i_i64[0] )
            goto LABEL_13;
        }
      }
    }
  }
  return 0;
}
