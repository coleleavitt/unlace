unsigned __int64 __fastcall sub_4853F0(const __m128i *a1, const char *a2)
{
  __int8 v2; // r12
  __int64 v5; // r12
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  __int32 v8; // eax
  __int8 v9; // cl
  __int32 v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r12
  void *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // [rsp+8h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-60h] BYREF
  __int128 v26; // [rsp+18h] [rbp-58h]
  __m128i v27; // [rsp+28h] [rbp-48h]
  __int64 v28; // [rsp+38h] [rbp-38h]
  __int32 v29; // [rsp+40h] [rbp-30h]
  unsigned __int64 v30; // [rsp+48h] [rbp-28h]

  v2 = a1[33].m128i_i8[0];
  v30 = __readfsqword(0x28u);
  switch_dbctx(a1->m128i_i32[2]);
  if ( !v2 )
    return v30 - __readfsqword(0x28u);
  v24 = 0;
  sub_482D70(a1[3].m128i_i64);
  v5 = a1[4].m128i_i64[0];
  ptr = nullptr;
  v26 = 0;
  if ( v5 )
  {
    ptr = (void *)qalloc_or_throw(v5 << 7, a2);
    v21 = ptr;
    v22 = 0;
    *((_QWORD *)&v26 + 1) = v5;
    while ( 1 )
    {
      v23 = v22;
      sub_480B60((__int64)v21 + 128 * v22, (const __m128i *)((v22 << 7) + a1[3].m128i_i64[1]));
      v22 = v23 + 1;
      if ( v5 == v23 + 1 )
        break;
      v21 = ptr;
    }
    *(_QWORD *)&v26 = v5;
  }
  v6 = _mm_loadu_si128(a1 + 5);
  v7 = _mm_loadl_epi64(a1 + 6);
  v8 = a1[6].m128i_i32[2];
  v9 = a1[6].m128i_i8[11];
  v27 = v6;
  v29 = v8;
  v28 = v7.m128i_i64[0];
  if ( v5 )
  {
    if ( (_mm_cvtsi128_si32(_mm_shuffle_epi32(v7, 229)) & 0x400) != 0 )
    {
      v20 = v5 << 7;
      if ( v6.m128i_i64[0] < (unsigned __int64)(*(_QWORD *)((char *)ptr + v20 - 128)
                                              + *(_QWORD *)((char *)ptr + v20 - 120)
                                              + 7LL) >> 3 )
        v27.m128i_i64[0] = (unsigned __int64)(*(_QWORD *)((char *)ptr + v20 - 128)
                                            + *(_QWORD *)((char *)ptr + v20 - 120)
                                            + 7LL) >> 3;
    }
  }
  if ( !(unsigned __int8)create_tinfo(&v24, v9 == 0 ? 13 : 29, 13, &ptr) )
  {
    if ( !under_debugger )
      interr(2162);
LABEL_36:
    BUG();
  }
  a1[9].m128i_i64[0] = 0;
  a1[10].m128i_i64[1] = 0;
  v10 = a1[18].m128i_i32[0];
  a1[13].m128i_i64[1] = 0;
  if ( !(unsigned __int8)serialize_tinfo(&a1[8].m128i_u64[1], &a1[10], &a1[13], &v24, 272) )
  {
    if ( !under_debugger )
      interr(2157);
    goto LABEL_36;
  }
  v11 = 0;
  if ( a1[13].m128i_i64[1] > 1uLL )
    v11 = a1[13].m128i_i64[0];
  v12 = 0;
  if ( a1[12].m128i_i64[0] > 1uLL )
    v12 = a1[11].m128i_i64[1];
  LODWORD(v13) = 0;
  if ( a1[10].m128i_i64[1] > 1uLL )
    v13 = a1[10].m128i_i64[0];
  LODWORD(v14) = 0;
  if ( a1[9].m128i_i64[0] > 1uLL )
    v14 = a1[8].m128i_i64[1];
  LODWORD(v15) = 0;
  if ( a1[7].m128i_i64[1] > 1uLL )
    v15 = a1[7].m128i_i64[0];
  if ( (unsigned int)sub_63F060(0, v10, 1028, v15, v14, v13, v12, v11, (__int64)&a1[14].m128i_i64[1]) )
    sub_47DED0();
  v16 = ptr;
  if ( ptr )
  {
    v17 = v26;
    if ( (_QWORD)v26 )
    {
      v18 = 0;
      do
      {
        v19 = v18++;
        sub_375BF0(&v16[16 * v19]);
        v16 = ptr;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v26 = 0;
    qfree(v16);
  }
  clear_tinfo_t(&v24);
  return v30 - __readfsqword(0x28u);
}

