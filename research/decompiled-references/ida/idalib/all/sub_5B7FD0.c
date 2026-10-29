__int64 __fastcall sub_5B7FD0(__int64 *a1, __m128i *a2, __int64 *a3, const char *a4)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // ebp
  size_t v8; // rax
  size_t v9; // r14
  __m128i v10; // xmm8
  __m128i v11; // xmm7
  __m128i v12; // xmm6
  __m128i v13; // xmm5
  __m128i v14; // xmm4
  __m128i si128; // xmm9
  __m128i v16; // xmm3
  __m128i v17; // xmm2
  __m128i v18; // xmm1
  __m128i v19; // xmm9
  __m128i v20; // xmm0
  __m128i v21; // xmm9
  __m128i v22; // xmm9
  __m128i v23; // xmm9
  __m128i v24; // xmm9
  __m128i v25; // xmm9
  __m128i v26; // xmm9
  __int64 v27; // [rsp+8h] [rbp-180h]
  unsigned __int64 v28; // [rsp+18h] [rbp-170h] BYREF
  __m128i v29; // [rsp+20h] [rbp-168h] BYREF
  __m128i v30[2]; // [rsp+30h] [rbp-158h] BYREF
  __m128i v31; // [rsp+50h] [rbp-138h] BYREF
  __m128i v32; // [rsp+60h] [rbp-128h] BYREF
  __m128i v33; // [rsp+70h] [rbp-118h] BYREF
  __m128i v34; // [rsp+80h] [rbp-108h] BYREF
  __m128i v35; // [rsp+90h] [rbp-F8h] BYREF
  __m128i v36[10]; // [rsp+A0h] [rbp-E8h] BYREF
  unsigned __int64 v37; // [rsp+148h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v28 = 0;
  if ( !a3 )
  {
    v6 = 0;
    goto LABEL_4;
  }
  v5 = sub_3BDD60(a1, *a3);
  if ( v5 == -1 )
    goto LABEL_3;
  v6 = sub_54BE00(a1, &v28, v5);
  if ( !(_BYTE)v6 )
    goto LABEL_3;
  memset(v30, 0, sizeof(v30));
  v35.m128i_i64[0] = 1;
  v35.m128i_i32[2] = -1;
  v36[0].m128i_i64[0] = 0;
  v36[0].m128i_i8[8] = 0;
  v29 = 0;
  v31 = 0;
  v32 = 0;
  if ( a4 )
  {
    v8 = strlen(a4);
    v9 = v8;
    if ( v8 )
    {
      v27 = v8 + 1;
      v30[0].m128i_i64[0] = qvector_reserve(v30, 0, v8 + 1, 1);
      v30[0].m128i_i64[1] = v27;
      memmove((void *)v30[0].m128i_i64[0], a4, v9);
      *(_BYTE *)(v30[0].m128i_i64[0] + v9) = 0;
    }
  }
  if ( (unsigned int)find_tinfo_udt_member((int)&v29) == -1 )
  {
    clear_tinfo_t(&v32);
    if ( v30[1].m128i_i64[1] )
    {
      v31.m128i_i64[0] = 0;
      qfree((void *)v30[1].m128i_i64[1]);
    }
    if ( v30[0].m128i_i64[0] )
    {
      v30[0].m128i_i64[1] = 0;
      v6 = 0;
      qfree((void *)v30[0].m128i_i64[0]);
      goto LABEL_4;
    }
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  if ( a2 )
  {
    v10 = _mm_loadu_si128(a2);
    v11 = _mm_loadu_si128(a2 + 1);
    v12 = _mm_loadu_si128(a2 + 2);
    *a2 = _mm_load_si128(&v29);
    v13 = _mm_loadu_si128(a2 + 3);
    v14 = _mm_loadu_si128(a2 + 4);
    si128 = _mm_load_si128(v30);
    v16 = _mm_loadu_si128(a2 + 5);
    v36[1] = v10;
    v17 = _mm_loadu_si128(a2 + 6);
    v18 = _mm_loadu_si128(a2 + 7);
    v36[2] = v11;
    a2[1] = si128;
    v19 = _mm_load_si128(&v30[1]);
    v20 = _mm_loadu_si128(a2 + 8);
    v36[3] = v12;
    a2[2] = v19;
    v21 = _mm_load_si128(&v31);
    v36[4] = v13;
    a2[3] = v21;
    v22 = _mm_load_si128(&v32);
    v36[5] = v14;
    a2[4] = v22;
    v23 = _mm_load_si128(&v33);
    v36[6] = v16;
    a2[5] = v23;
    v24 = _mm_load_si128(&v34);
    v36[7] = v17;
    v36[8] = v18;
    v36[9] = v20;
    a2[6] = v24;
    v25 = _mm_load_si128(&v35);
    v29 = v10;
    a2[7] = v25;
    v26 = _mm_load_si128(v36);
    v30[0] = v11;
    a2[8] = v26;
    v30[1] = v12;
    v31 = v13;
    v32 = v14;
    v33 = v16;
    v34 = v17;
    v35 = v18;
    v36[0] = v20;
  }
  clear_tinfo_t(&v32);
  if ( v30[1].m128i_i64[1] )
  {
    v31.m128i_i64[0] = 0;
    qfree((void *)v30[1].m128i_i64[1]);
  }
  if ( v30[0].m128i_i64[0] )
  {
    v30[0].m128i_i64[1] = 0;
    qfree((void *)v30[0].m128i_i64[0]);
  }
LABEL_4:
  clear_tinfo_t(&v28);
  return v6;
}
