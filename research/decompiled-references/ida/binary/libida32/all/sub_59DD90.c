__int64 __fastcall sub_59DD90(__int64 *a1, __m128i *a2, int *a3, const char *a4)
{
  unsigned int v5; // eax
  unsigned int v6; // ebp
  size_t v8; // rax
  size_t v9; // r14
  __m128i v10; // xmm7
  __m128i v11; // xmm6
  __m128i v12; // xmm5
  __m128i v13; // xmm4
  __m128i v14; // xmm3
  __m128i si128; // xmm8
  __m128i v16; // xmm2
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  __m128i v19; // xmm8
  __m128i v20; // xmm8
  __m128i v21; // xmm8
  __m128i v22; // xmm8
  __m128i v23; // xmm8
  __m128i v24; // xmm8
  __int64 v25; // [rsp+8h] [rbp-160h]
  unsigned __int64 v26; // [rsp+18h] [rbp-150h] BYREF
  __m128i v27; // [rsp+20h] [rbp-148h] BYREF
  __m128i v28[2]; // [rsp+30h] [rbp-138h] BYREF
  __m128i v29; // [rsp+50h] [rbp-118h] BYREF
  __m128i v30; // [rsp+60h] [rbp-108h] BYREF
  __m128i v31; // [rsp+70h] [rbp-F8h] BYREF
  __m128i v32; // [rsp+80h] [rbp-E8h] BYREF
  __m128i v33[9]; // [rsp+90h] [rbp-D8h] BYREF
  unsigned __int64 v34; // [rsp+128h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v26 = 0;
  if ( !a3 )
  {
    v6 = 0;
    goto LABEL_4;
  }
  v5 = sub_3B90A0(a1, *a3);
  if ( v5 == -1 )
    goto LABEL_3;
  v6 = sub_532DA0(a1, &v26, v5);
  if ( !(_BYTE)v6 )
    goto LABEL_3;
  memset(v28, 0, sizeof(v28));
  v32.m128i_i64[0] = 1;
  v32.m128i_i32[2] = -1;
  v33[0].m128i_i64[0] = 0;
  v33[0].m128i_i8[8] = 0;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  if ( a4 )
  {
    v8 = strlen(a4);
    v9 = v8;
    if ( v8 )
    {
      v25 = v8 + 1;
      v28[0].m128i_i64[0] = qvector_reserve(v28, 0, v8 + 1, 1);
      v28[0].m128i_i64[1] = v25;
      memmove((void *)v28[0].m128i_i64[0], a4, v9);
      *(_BYTE *)(v28[0].m128i_i64[0] + v9) = 0;
    }
  }
  if ( (unsigned int)find_tinfo_udt_member((int)&v27) == -1 )
  {
    clear_tinfo_t(&v30);
    if ( v28[1].m128i_i64[1] )
    {
      v29.m128i_i64[0] = 0;
      qfree((void *)v28[1].m128i_i64[1]);
    }
    if ( v28[0].m128i_i64[0] )
    {
      v28[0].m128i_i64[1] = 0;
      v6 = 0;
      qfree((void *)v28[0].m128i_i64[0]);
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
    *a2 = _mm_load_si128(&v27);
    v13 = _mm_loadu_si128(a2 + 3);
    v14 = _mm_loadu_si128(a2 + 4);
    si128 = _mm_load_si128(v28);
    v16 = _mm_loadu_si128(a2 + 5);
    v33[1] = v10;
    v17 = _mm_loadu_si128(a2 + 6);
    v18 = _mm_loadu_si128(a2 + 7);
    v33[2] = v11;
    a2[1] = si128;
    v19 = _mm_load_si128(&v28[1]);
    v33[3] = v12;
    a2[2] = v19;
    v20 = _mm_load_si128(&v29);
    v33[4] = v13;
    a2[3] = v20;
    v21 = _mm_load_si128(&v30);
    v33[5] = v14;
    a2[4] = v21;
    v22 = _mm_load_si128(&v31);
    v33[6] = v16;
    a2[5] = v22;
    v23 = _mm_load_si128(&v32);
    v33[7] = v17;
    a2[6] = v23;
    v24 = _mm_load_si128(v33);
    v33[8] = v18;
    a2[7] = v24;
    v27 = v10;
    v28[0] = v11;
    v28[1] = v12;
    v29 = v13;
    v30 = v14;
    v31 = v16;
    v32 = v17;
    v33[0] = v18;
  }
  clear_tinfo_t(&v30);
  if ( v28[1].m128i_i64[1] )
  {
    v29.m128i_i64[0] = 0;
    qfree((void *)v28[1].m128i_i64[1]);
  }
  if ( v28[0].m128i_i64[0] )
  {
    v28[0].m128i_i64[1] = 0;
    qfree((void *)v28[0].m128i_i64[0]);
  }
LABEL_4:
  clear_tinfo_t(&v26);
  return v6;
}

