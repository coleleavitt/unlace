unsigned __int64 __fastcall sub_2B7F90(const __m128i *a1, const __m128i *a2)
{
  __int64 v3; // r13
  __m128i v4; // xmm0
  __int64 v5; // rdi
  __int64 v6; // r15
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r14
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // r13
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int32 v16; // eax
  __m128i v18; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v19; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+20h] [rbp-98h]
  __int64 v21; // [rsp+28h] [rbp-90h]
  __m128i v22; // [rsp+30h] [rbp-88h] BYREF
  char v23[8]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v24; // [rsp+48h] [rbp-70h]
  __m128i v25; // [rsp+50h] [rbp-68h] BYREF
  __int64 v26; // [rsp+60h] [rbp-58h]
  __int32 v27; // [rsp+68h] [rbp-50h]
  unsigned __int64 v28; // [rsp+78h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v19.m128i_i32[0] = 0;
  copy_argloc(&v19, &a1->m128i_u64[1]);
  v20 = a1[1].m128i_i64[1];
  v21 = a1[2].m128i_i64[0];
  v22.m128i_i32[0] = a1[2].m128i_i32[2];
  copy_argloc(&a1->m128i_u64[1], &a2->m128i_u64[1]);
  a1[1].m128i_i64[1] = a2[1].m128i_i64[1];
  a1[2].m128i_i64[0] = a2[2].m128i_i64[0];
  a1[2].m128i_i32[2] = a2[2].m128i_i32[2];
  copy_argloc(&a2->m128i_u64[1], &v19);
  a2[1].m128i_i64[1] = v20;
  a2[2].m128i_i64[0] = v21;
  a2[2].m128i_i32[2] = v22.m128i_i32[0];
  cleanup_argloc(&v19);
  sub_2B7ED0(&v19, a1 + 3);
  copy_argloc(&a1[3], &a2[3]);
  a1[4].m128i_i64[0] = a2[4].m128i_i64[0];
  v3 = a2[4].m128i_i64[1];
  v4 = _mm_loadu_si128(a2 + 5);
  a2[4].m128i_i64[1] = 0;
  a2[5] = 0;
  v5 = a1[4].m128i_i64[1];
  if ( v5 )
  {
    a1[5].m128i_i64[0] = 0;
    v18 = v4;
    qfree(v5);
    v4 = _mm_load_si128(&v18);
  }
  a1[4].m128i_i64[1] = v3;
  a1[5] = v4;
  copy_tinfo_t(&a1[6], &a2[6]);
  v6 = a2[6].m128i_i64[1];
  v7 = _mm_loadu_si128(a2 + 7);
  a2[6].m128i_i64[1] = 0;
  a2[7] = 0;
  v8 = a1[6].m128i_i64[1];
  if ( v8 )
  {
    a1[7].m128i_i64[0] = 0;
    v18 = v7;
    qfree(v8);
    v7 = _mm_load_si128(&v18);
  }
  a1[6].m128i_i64[1] = v6;
  a1[7] = v7;
  a1[8].m128i_i64[0] = a2[8].m128i_i64[0];
  a1[8].m128i_i32[2] = a2[8].m128i_i32[2];
  copy_argloc(&a2[3], &v19);
  v9 = a2[4].m128i_i64[1];
  v10 = v21;
  v11 = _mm_load_si128(&v22);
  v22 = 0;
  a2[4].m128i_i64[0] = v20;
  v21 = 0;
  if ( v9 )
  {
    a2[5].m128i_i64[0] = 0;
    v18 = v11;
    qfree(v9);
    v11 = _mm_load_si128(&v18);
  }
  a2[4].m128i_i64[1] = v10;
  a2[5] = v11;
  copy_tinfo_t(&a2[6], v23);
  v12 = a2[6].m128i_i64[1];
  v13 = v24;
  v24 = 0;
  v14 = _mm_load_si128(&v25);
  v25 = 0;
  if ( v12 )
  {
    a2[7].m128i_i64[0] = 0;
    v18 = v14;
    qfree(v12);
    v14 = _mm_load_si128(&v18);
  }
  v15 = v26;
  a2[6].m128i_i64[1] = v13;
  a2[7] = v14;
  a2[8].m128i_i64[0] = v15;
  a2[8].m128i_i32[2] = v27;
  sub_2B45C0(&v19);
  v16 = a1[11].m128i_i32[2];
  a1[11].m128i_i32[2] = a2[11].m128i_i32[2];
  a2[11].m128i_i32[2] = v16;
  return v28 - __readfsqword(0x28u);
}
