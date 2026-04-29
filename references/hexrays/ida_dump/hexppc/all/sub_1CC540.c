__int64 __fastcall sub_1CC540(__int64 *a1, __int64 a2, __m128i *a3, __int64 a4, _QWORD *a5, __int64 *a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 func; // rax
  int tinfo_udt_member; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __m128i v17; // xmm8
  __m128i v18; // xmm7
  __m128i v19; // xmm6
  __m128i v20; // xmm5
  __m128i v21; // xmm4
  __m128i si128; // xmm9
  __m128i v23; // xmm3
  __m128i v24; // xmm2
  __m128i v25; // xmm1
  __m128i v26; // xmm9
  __m128i v27; // xmm0
  __m128i v28; // xmm9
  __m128i v29; // xmm9
  __m128i v30; // xmm9
  __m128i v31; // xmm9
  __m128i v32; // xmm9
  __m128i v33; // xmm9
  __int64 v34; // [rsp+8h] [rbp-160h] BYREF
  __m128i v35; // [rsp+10h] [rbp-158h] BYREF
  __m128i v36[2]; // [rsp+20h] [rbp-148h] BYREF
  __m128i v37; // [rsp+40h] [rbp-128h] BYREF
  __m128i v38; // [rsp+50h] [rbp-118h] BYREF
  __m128i v39; // [rsp+60h] [rbp-108h] BYREF
  __m128i v40; // [rsp+70h] [rbp-F8h] BYREF
  __m128i v41; // [rsp+80h] [rbp-E8h] BYREF
  __m128i v42[10]; // [rsp+90h] [rbp-D8h] BYREF
  unsigned __int64 v43; // [rsp+138h] [rbp-30h]

  v7 = *(_QWORD *)(a2 + 24);
  v8 = a4 - a1[4];
  v43 = __readfsqword(0x28u);
  v10 = v8;
  if ( *(_DWORD *)(v7 + 24) != 8 )
    v10 = (int)v8;
  if ( a5 )
    *a5 = v10;
  v11 = *a1;
  v34 = 0;
  func = get_func(v11);
  if ( (unsigned __int8)get_func_frame(&v34, func) )
  {
    v35 = (__m128i)(unsigned __int64)(8 * v10);
    memset(v36, 0, sizeof(v36));
    v41.m128i_i64[0] = 1;
    v41.m128i_i32[2] = -1;
    v42[0].m128i_i64[0] = 0;
    v42[0].m128i_i8[8] = 0;
    v37 = 0;
    v38 = 0;
    tinfo_udt_member = find_tinfo_udt_member(&v35, v34, 0);
    if ( tinfo_udt_member != -1 && a3 )
    {
      v17 = _mm_loadu_si128(a3);
      v18 = _mm_loadu_si128(a3 + 1);
      v19 = _mm_loadu_si128(a3 + 2);
      *a3 = _mm_load_si128(&v35);
      v20 = _mm_loadu_si128(a3 + 3);
      v21 = _mm_loadu_si128(a3 + 4);
      si128 = _mm_load_si128(v36);
      v23 = _mm_loadu_si128(a3 + 5);
      v42[1] = v17;
      v24 = _mm_loadu_si128(a3 + 6);
      v25 = _mm_loadu_si128(a3 + 7);
      v42[2] = v18;
      a3[1] = si128;
      v26 = _mm_load_si128(&v36[1]);
      v27 = _mm_loadu_si128(a3 + 8);
      v42[3] = v19;
      a3[2] = v26;
      v28 = _mm_load_si128(&v37);
      v42[4] = v20;
      a3[3] = v28;
      v29 = _mm_load_si128(&v38);
      v42[5] = v21;
      a3[4] = v29;
      v30 = _mm_load_si128(&v39);
      v42[6] = v23;
      a3[5] = v30;
      v31 = _mm_load_si128(&v40);
      v42[7] = v24;
      v42[8] = v25;
      v42[9] = v27;
      a3[6] = v31;
      v32 = _mm_load_si128(&v41);
      v35 = v17;
      a3[7] = v32;
      v33 = _mm_load_si128(v42);
      v36[0] = v18;
      a3[8] = v33;
      v36[1] = v19;
      v37 = v20;
      v38 = v21;
      v39 = v23;
      v40 = v24;
      v41 = v25;
      v42[0] = v27;
    }
    if ( a6 )
    {
      v14 = v34;
      v34 = *a6;
      *a6 = v14;
    }
    v15 = tinfo_udt_member;
    clear_tinfo_t(&v38);
    if ( v36[1].m128i_i64[1] )
    {
      v37.m128i_i64[0] = 0;
      qfree(v36[1].m128i_i64[1]);
    }
    if ( v36[0].m128i_i64[0] )
    {
      v36[0].m128i_i64[1] = 0;
      qfree(v36[0].m128i_i64[0]);
    }
  }
  else
  {
    v15 = -1;
  }
  clear_tinfo_t(&v34);
  return v15;
}
