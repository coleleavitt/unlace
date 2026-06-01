__int64 __fastcall sub_59F4F0(
        __int64 *a1,
        unsigned __int64 *a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __m128i *a7)
{
  int *v9; // rax
  __int64 v10; // rbp
  unsigned int v11; // eax
  __int64 v12; // rbx
  int v13; // r12d
  unsigned __int64 v14; // r14
  int tinfo_udt_member; // eax
  unsigned __int64 v16; // rcx
  __m128i v17; // xmm7
  __m128i v18; // xmm6
  __m128i v19; // xmm5
  __m128i v20; // xmm4
  __m128i v21; // xmm3
  __m128i si128; // xmm8
  __m128i v23; // xmm2
  __m128i v24; // xmm1
  __m128i v25; // xmm0
  __m128i v26; // xmm8
  __m128i v27; // xmm8
  __m128i v28; // xmm8
  __m128i v29; // xmm8
  __m128i v30; // xmm8
  __m128i v31; // xmm8
  __int64 v35; // [rsp+10h] [rbp-168h]
  int v36; // [rsp+1Ch] [rbp-15Ch]
  unsigned __int64 v37; // [rsp+20h] [rbp-158h] BYREF
  __int64 v38; // [rsp+28h] [rbp-150h] BYREF
  __m128i v39; // [rsp+30h] [rbp-148h] BYREF
  __m128i v40[2]; // [rsp+40h] [rbp-138h] BYREF
  __m128i v41; // [rsp+60h] [rbp-118h] BYREF
  __m128i v42; // [rsp+70h] [rbp-108h] BYREF
  __m128i v43; // [rsp+80h] [rbp-F8h] BYREF
  __m128i v44; // [rsp+90h] [rbp-E8h] BYREF
  __m128i v45[9]; // [rsp+A0h] [rbp-D8h] BYREF
  unsigned __int64 v46; // [rsp+138h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v9 = (int *)sub_5AFCE0(a1);
  v37 = 0;
  if ( !v9
    || (v10 = (__int64)v9, v11 = sub_3B90A0(a1, *v9), v11 == -1)
    || !(unsigned __int8)sub_532DA0(a1, &v37, v11)
    || !(unsigned int)get_tinfo_property(v37, 16) )
  {
LABEL_3:
    v12 = -1;
    goto LABEL_20;
  }
  v13 = sub_59F150(a1, v10, a4, a5, a6);
  v14 = 8LL * v13;
  memset(v40, 0, sizeof(v40));
  v44.m128i_i64[0] = 1;
  v44.m128i_i32[2] = -1;
  v45[0].m128i_i64[0] = 0;
  v45[0].m128i_i8[8] = 0;
  v39 = (__m128i)v14;
  v41 = 0;
  v42 = 0;
  tinfo_udt_member = find_tinfo_udt_member((int)&v39);
  if ( tinfo_udt_member == -1
    || v14 < v39.m128i_i64[0]
    || v14 >= v39.m128i_i64[0] + v39.m128i_i64[1]
    || *(_WORD *)(v10 + 24)
    && (v36 = tinfo_udt_member,
        v35 = v39.m128i_i64[0],
        v38 = 0,
        get_frame_part(&v38, v10, 2),
        tinfo_udt_member = v36,
        v35 == 8LL * (unsigned int)v38)
    && (v45[0].m128i_i8[5] & 0x30) != 0 )
  {
    clear_tinfo_t(&v42);
    if ( v40[1].m128i_i64[1] )
    {
      v41.m128i_i64[0] = 0;
      qfree((void *)v40[1].m128i_i64[1]);
    }
    if ( v40[0].m128i_i64[0] )
    {
      v40[0].m128i_i64[1] = 0;
      qfree((void *)v40[0].m128i_i64[0]);
    }
    goto LABEL_3;
  }
  if ( a2 )
  {
    v16 = v37;
    v37 = *a2;
    *a2 = v16;
  }
  if ( a3 )
    *a3 = v13;
  if ( a7 )
  {
    v17 = _mm_loadu_si128(a7);
    v18 = _mm_loadu_si128(a7 + 1);
    v19 = _mm_loadu_si128(a7 + 2);
    *a7 = _mm_load_si128(&v39);
    v20 = _mm_loadu_si128(a7 + 3);
    v21 = _mm_loadu_si128(a7 + 4);
    si128 = _mm_load_si128(v40);
    v23 = _mm_loadu_si128(a7 + 5);
    v45[1] = v17;
    v24 = _mm_loadu_si128(a7 + 6);
    v25 = _mm_loadu_si128(a7 + 7);
    v45[2] = v18;
    a7[1] = si128;
    v26 = _mm_load_si128(&v40[1]);
    v45[3] = v19;
    a7[2] = v26;
    v27 = _mm_load_si128(&v41);
    v45[4] = v20;
    a7[3] = v27;
    v28 = _mm_load_si128(&v42);
    v45[5] = v21;
    a7[4] = v28;
    v29 = _mm_load_si128(&v43);
    v45[6] = v23;
    a7[5] = v29;
    v30 = _mm_load_si128(&v44);
    v45[7] = v24;
    a7[6] = v30;
    v31 = _mm_load_si128(v45);
    v45[8] = v25;
    a7[7] = v31;
    v39 = v17;
    v40[0] = v18;
    v40[1] = v19;
    v41 = v20;
    v42 = v21;
    v43 = v23;
    v44 = v24;
    v45[0] = v25;
  }
  v12 = tinfo_udt_member;
  clear_tinfo_t(&v42);
  if ( v40[1].m128i_i64[1] )
  {
    v41.m128i_i64[0] = 0;
    qfree((void *)v40[1].m128i_i64[1]);
  }
  if ( v40[0].m128i_i64[0] )
  {
    v40[0].m128i_i64[1] = 0;
    qfree((void *)v40[0].m128i_i64[0]);
  }
LABEL_20:
  clear_tinfo_t(&v37);
  return v12;
}

