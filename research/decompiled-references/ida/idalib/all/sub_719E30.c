__int64 __fastcall sub_719E30(
        __int64 *a1,
        const __m128i *a2,
        __int64 a3,
        double a4,
        double a5,
        __m128i a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v12; // r8
  __int64 v13; // r9
  double v14; // xmm4_8
  double v15; // xmm5_8
  unsigned int v16; // r13d
  __int64 v18; // rcx
  __int64 *v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // r8
  double v22; // xmm4_8
  double v23; // xmm5_8
  __int8 v24; // al
  double v25; // xmm4_8
  double v26; // xmm5_8
  __m128i v27; // xmm0
  __int64 v28; // rbx
  __int64 v29; // r15
  __m128i v30; // rax
  __int64 v31; // rax
  unsigned int *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r15
  int *v35; // rbx
  int *v36; // r15
  __m128 v37; // [rsp+20h] [rbp-C8h]
  __m128i v38; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-A8h]
  __m128i v40; // [rsp+50h] [rbp-98h] BYREF
  __int64 *v41; // [rsp+60h] [rbp-88h]
  __m128i v42; // [rsp+70h] [rbp-78h] BYREF
  __int64 v43; // [rsp+80h] [rbp-68h]
  __int64 v44; // [rsp+88h] [rbp-60h]
  __int64 v45; // [rsp+90h] [rbp-58h]
  unsigned __int64 v46; // [rsp+A8h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v37 = 0;
  if ( (a2->m128i_i8[2] & 0x10) != 0 )
  {
    a6 = _mm_loadu_si128(a2 + 3);
    v37 = (__m128)a6;
  }
  if ( (unsigned __int8)sub_718340(
                          a1,
                          v37.m128_i64[0],
                          v37.m128_i64[1],
                          a4,
                          (__m128i)0LL,
                          *(double *)a6.m128i_i64,
                          a7,
                          a8,
                          a9,
                          a10,
                          a11) )
  {
    v18 = *(_QWORD *)(a2[1].m128i_i64[1] + 40);
    v19 = (__int64 *)a2[2].m128i_i64[0];
    v40.m128i_i32[2] = a2[2].m128i_i32[2];
    v40.m128i_i64[0] = v18;
    v41 = v19;
    v20 = _mm_load_si128(&v40);
    v16 = sub_719170(
            a1,
            *(double *)v20.m128i_i64,
            (__m128i)0LL,
            *(double *)a6.m128i_i64,
            a7,
            v14,
            v15,
            a10,
            a11,
            v37.m128_i64[0],
            v40.m128i_u32[2],
            v18,
            v12,
            v13,
            v20.m128i_i64[0],
            v20.m128i_i32[2],
            v19);
    if ( (_BYTE)v16 )
    {
      v24 = a2->m128i_i8[2];
      if ( (v24 & 0x40) != 0
        && (v31 = 16LL * ((v24 & 0x10) != 0) + 8LL * ((v24 & 0x20) != 0),
            v32 = (unsigned __int32 *)((char *)a2[3].m128i_u32 + v31),
            v33 = *v32,
            (_DWORD)v33)
        && (v34 = *(unsigned int *)((char *)&a2[3].m128i_u32[3] + v31),
            v35 = (__int32 *)((char *)a2[4].m128i_i32 + v31),
            (_DWORD)v34) )
      {
        v36 = &v35[8 * v34];
        while ( (unsigned __int8)sub_718840(
                                   a1,
                                   v35,
                                   (__int64)v32,
                                   v33,
                                   v21,
                                   *(double *)v20.m128i_i64,
                                   (__m128i)0LL,
                                   *(double *)a6.m128i_i64,
                                   a7,
                                   v22,
                                   v23,
                                   a10,
                                   a11) )
        {
          v35 += 8;
          if ( v36 == v35 )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        sub_EE9E50(&v42, a2);
        v27 = _mm_load_si128(&v42);
        v28 = v44;
        v29 = v45;
        v38 = v27;
        v39 = v43;
        v30 = v27;
LABEL_9:
        if ( v28 == v30.m128i_i64[0] )
        {
LABEL_15:
          if ( v29 == v30.m128i_i64[1] )
            return v16;
        }
        if ( (v30.m128i_i8[8] & 3) != 0 )
          v30.m128i_i64[0] = sub_EF2B30(&v38);
        while ( (unsigned __int8)sub_70DBE0(
                                   a1,
                                   *(_QWORD *)v30.m128i_i64[0],
                                   a3,
                                   *(double *)v27.m128i_i64,
                                   (__m128i)0LL,
                                   *(double *)a6.m128i_i64,
                                   a7,
                                   v25,
                                   v26,
                                   a10,
                                   a11) )
        {
          v30.m128i_i64[1] = v38.m128i_i64[1];
          if ( (v38.m128i_i8[8] & 3) != 0 )
          {
            if ( v38.m128i_i64[1] <= 3uLL )
              sub_EF2750(&v38, 1);
            else
              sub_EF2960(&v38);
            v30 = v38;
            goto LABEL_9;
          }
          v30.m128i_i64[0] = v38.m128i_i64[0] + 8;
          v38.m128i_i64[0] = v30.m128i_i64[0];
          if ( v28 == v30.m128i_i64[0] )
            goto LABEL_15;
        }
      }
    }
  }
  return 0;
}
