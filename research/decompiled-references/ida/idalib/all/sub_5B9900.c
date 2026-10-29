__int64 __fastcall sub_5B9900(
        __m128i *a1,
        unsigned __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i *a7)
{
  __int64 *v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  int tinfo_udt_member; // eax
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm8
  __m128i v17; // xmm7
  __m128i v18; // xmm6
  __m128i si128; // xmm9
  __m128i v20; // xmm5
  __m128i v21; // xmm4
  __m128i v22; // xmm3
  __m128i v23; // xmm9
  __m128i v24; // xmm2
  __m128i v25; // xmm1
  __m128i v26; // xmm0
  __m128i v27; // xmm9
  __m128i v28; // xmm9
  __m128i v29; // xmm9
  __m128i v30; // xmm9
  __m128i v31; // xmm9
  __m128i v32; // xmm9
  unsigned __int64 v35; // [rsp+10h] [rbp-198h]
  __int64 v36; // [rsp+10h] [rbp-198h]
  unsigned __int64 v38; // [rsp+28h] [rbp-180h] BYREF
  __int128 v39; // [rsp+30h] [rbp-178h] BYREF
  __m128i v40; // [rsp+40h] [rbp-168h] BYREF
  __m128i v41[2]; // [rsp+50h] [rbp-158h] BYREF
  __m128i v42; // [rsp+70h] [rbp-138h] BYREF
  __m128i v43; // [rsp+80h] [rbp-128h] BYREF
  __m128i v44; // [rsp+90h] [rbp-118h] BYREF
  __m128i v45; // [rsp+A0h] [rbp-108h] BYREF
  __m128i v46; // [rsp+B0h] [rbp-F8h] BYREF
  __m128i v47[10]; // [rsp+C0h] [rbp-E8h] BYREF
  unsigned __int64 v48; // [rsp+168h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v9 = (__int64 *)sub_5CAA10(a1);
  v38 = 0;
  if ( !v9
    || (v10 = (__int64)v9, v11 = sub_3BDD60(a1, *v9), v11 == -1)
    || !(unsigned __int8)sub_54BE00(a1->m128i_i64, &v38, v11)
    || !(unsigned int)get_tinfo_property(v38, 16) )
  {
LABEL_3:
    v12 = -1;
    goto LABEL_20;
  }
  v13 = sub_5B94E0(a1, v10, a4, a5, a6);
  memset(v41, 0, sizeof(v41));
  v46.m128i_i64[0] = 1;
  v46.m128i_i32[2] = -1;
  v47[0].m128i_i64[0] = 0;
  v47[0].m128i_i8[8] = 0;
  v40 = (__m128i)(unsigned __int64)(8 * v13);
  v35 = 8 * v13;
  v42 = 0;
  v43 = 0;
  tinfo_udt_member = find_tinfo_udt_member((int)&v40);
  v12 = tinfo_udt_member;
  if ( tinfo_udt_member == -1
    || v35 < v40.m128i_i64[0]
    || v35 >= v40.m128i_i64[0] + v40.m128i_i64[1]
    || *(_WORD *)(v10 + 40)
    && (v36 = v40.m128i_i64[0], v39 = 0, get_frame_part(&v39, v10, 2), v36 == 8LL * (_QWORD)v39)
    && (v47[0].m128i_i8[5] & 0x30) != 0 )
  {
    clear_tinfo_t(&v43);
    if ( v41[1].m128i_i64[1] )
    {
      v42.m128i_i64[0] = 0;
      qfree((void *)v41[1].m128i_i64[1]);
    }
    if ( v41[0].m128i_i64[0] )
    {
      v41[0].m128i_i64[1] = 0;
      qfree((void *)v41[0].m128i_i64[0]);
    }
    goto LABEL_3;
  }
  if ( a2 )
  {
    v15 = v38;
    v38 = *a2;
    *a2 = v15;
  }
  if ( a3 )
    *a3 = v13;
  if ( a7 )
  {
    v16 = _mm_loadu_si128(a7);
    v17 = _mm_loadu_si128(a7 + 1);
    v18 = _mm_loadu_si128(a7 + 2);
    *a7 = _mm_load_si128(&v40);
    si128 = _mm_load_si128(v41);
    v20 = _mm_loadu_si128(a7 + 3);
    v21 = _mm_loadu_si128(a7 + 4);
    v22 = _mm_loadu_si128(a7 + 5);
    v47[1] = v16;
    a7[1] = si128;
    v23 = _mm_load_si128(&v41[1]);
    v24 = _mm_loadu_si128(a7 + 6);
    v25 = _mm_loadu_si128(a7 + 7);
    v47[2] = v17;
    v26 = _mm_loadu_si128(a7 + 8);
    a7[2] = v23;
    v27 = _mm_load_si128(&v42);
    v47[3] = v18;
    a7[3] = v27;
    v28 = _mm_load_si128(&v43);
    v47[4] = v20;
    a7[4] = v28;
    v29 = _mm_load_si128(&v44);
    v47[5] = v21;
    a7[5] = v29;
    v30 = _mm_load_si128(&v45);
    v47[6] = v22;
    v47[7] = v24;
    v47[8] = v25;
    v47[9] = v26;
    a7[6] = v30;
    v31 = _mm_load_si128(&v46);
    v40 = v16;
    a7[7] = v31;
    v32 = _mm_load_si128(v47);
    v41[0] = v17;
    a7[8] = v32;
    v41[1] = v18;
    v42 = v20;
    v43 = v21;
    v44 = v22;
    v45 = v24;
    v46 = v25;
    v47[0] = v26;
  }
  clear_tinfo_t(&v43);
  if ( v41[1].m128i_i64[1] )
  {
    v42.m128i_i64[0] = 0;
    qfree((void *)v41[1].m128i_i64[1]);
  }
  if ( v41[0].m128i_i64[0] )
  {
    v41[0].m128i_i64[1] = 0;
    qfree((void *)v41[0].m128i_i64[0]);
  }
LABEL_20:
  clear_tinfo_t(&v38);
  return v12;
}
