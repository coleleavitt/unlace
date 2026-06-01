unsigned __int64 __fastcall sub_49A080(const __m128i *a1)
{
  __int8 v1; // r12
  __int64 v4; // r12
  __m128i v5; // xmm1
  __m128i v6; // xmm0
  __int32 v7; // eax
  __int8 v8; // cl
  __int32 v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rax
  void *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // [rsp+8h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-60h] BYREF
  __int128 v24; // [rsp+18h] [rbp-58h]
  __m128i v25; // [rsp+28h] [rbp-48h]
  __int64 v26; // [rsp+38h] [rbp-38h]
  __int32 v27; // [rsp+40h] [rbp-30h]
  unsigned __int64 v28; // [rsp+48h] [rbp-28h]

  v1 = a1[33].m128i_i8[8];
  v28 = __readfsqword(0x28u);
  switch_dbctx(a1->m128i_i32[2]);
  if ( !v1 )
    return v28 - __readfsqword(0x28u);
  v22 = 0;
  sub_497A70(a1[3].m128i_i64);
  v4 = a1[4].m128i_i64[0];
  ptr = nullptr;
  v24 = 0;
  if ( v4 )
  {
    ptr = (void *)qalloc_or_throw(144 * v4);
    v19 = ptr;
    v20 = 0;
    *((_QWORD *)&v24 + 1) = v4;
    while ( 1 )
    {
      v21 = v20;
      sub_495840((__int64)v19 + 144 * v20, 144 * v20 + a1[3].m128i_i64[1]);
      v20 = v21 + 1;
      if ( v4 == v21 + 1 )
        break;
      v19 = ptr;
    }
    *(_QWORD *)&v24 = v4;
  }
  v5 = _mm_loadu_si128(a1 + 5);
  v6 = _mm_loadl_epi64(a1 + 6);
  v7 = a1[6].m128i_i32[2];
  v8 = a1[6].m128i_i8[11];
  v25 = v5;
  v27 = v7;
  v26 = v6.m128i_i64[0];
  if ( v4
    && (_mm_cvtsi128_si32(_mm_shuffle_epi32(v6, 229)) & 0x400) != 0
    && v5.m128i_i64[0] < (unsigned __int64)(*((_QWORD *)ptr + 18 * v4 - 18) + *((_QWORD *)ptr + 18 * v4 - 17) + 7LL) >> 3 )
  {
    v25.m128i_i64[0] = (unsigned __int64)(*((_QWORD *)ptr + 18 * v4 - 18) + *((_QWORD *)ptr + 18 * v4 - 17) + 7LL) >> 3;
  }
  if ( !(unsigned __int8)create_tinfo(&v22, v8 == 0 ? 13 : 29, 13, &ptr) )
  {
    if ( !under_debugger )
      interr(2162);
LABEL_36:
    BUG();
  }
  a1[9].m128i_i64[0] = 0;
  a1[10].m128i_i64[1] = 0;
  v9 = a1[18].m128i_i32[0];
  a1[13].m128i_i64[1] = 0;
  if ( !(unsigned __int8)serialize_tinfo(&a1[8].m128i_u64[1], &a1[10], &a1[13], &v22, 272) )
  {
    if ( !under_debugger )
      interr(2157);
    goto LABEL_36;
  }
  v10 = 0;
  if ( a1[13].m128i_i64[1] > 1uLL )
    v10 = a1[13].m128i_i64[0];
  v11 = 0;
  if ( a1[12].m128i_i64[0] > 1uLL )
    v11 = a1[11].m128i_i64[1];
  LODWORD(v12) = 0;
  if ( a1[10].m128i_i64[1] > 1uLL )
    v12 = a1[10].m128i_i64[0];
  LODWORD(v13) = 0;
  if ( a1[9].m128i_i64[0] > 1uLL )
    v13 = a1[8].m128i_i64[1];
  LODWORD(v14) = 0;
  if ( a1[7].m128i_i64[1] > 1uLL )
    v14 = a1[7].m128i_i64[0];
  if ( (unsigned int)sub_65C930(0, v9, 1028, v14, v13, v12, v11, v10, (__int64)&a1[14].m128i_i64[1]) )
    sub_4929D0();
  v15 = ptr;
  if ( ptr )
  {
    v16 = v24;
    if ( (_QWORD)v24 )
    {
      v17 = 0;
      do
      {
        v18 = 9 * v17++;
        sub_379560(&v15[2 * v18]);
        v15 = ptr;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v24 = 0;
    qfree(v15);
  }
  clear_tinfo_t(&v22);
  return v28 - __readfsqword(0x28u);
}
