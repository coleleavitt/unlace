unsigned __int64 __fastcall sub_1EAA80(
        __m128i *a1,
        const __m128i *a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  const char *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int32 v13; // eax
  void *v14; // rdi
  __m128i si128; // xmm0
  __int64 v16; // rbp
  __int64 v17; // rbp
  const char *v19; // r15
  void *v20; // rdi
  const char *v21; // r15
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __m256i v25; // [rsp+8h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+28h] [rbp-88h]
  void *v27[2]; // [rsp+30h] [rbp-80h]
  __int128 v28; // [rsp+40h] [rbp-70h]
  void *src; // [rsp+50h] [rbp-60h]
  __int128 v30; // [rsp+58h] [rbp-58h]
  unsigned __int64 v31; // [rsp+70h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  memset(&v25, 0, 24);
  v25.m256i_i64[3] = -1;
  v26 = 0;
  src = nullptr;
  *(_OWORD *)v27 = 0;
  v28 = 0;
  v30 = 0;
  sub_1EA700(a1, &v25, a2, a4, a5, a6);
  sub_1C6390();
  v8 = (const char *)a3;
  navstack_t_stack_jump(a1[8].m128i_i64[0], a3, &v25);
  v9 = a1[2].m128i_i64[1];
  if ( v9 )
  {
    qfree(v9, (const char *)a3);
    a1[2].m128i_i64[1] = 0;
  }
  v10 = a1[3].m128i_i64[0];
  if ( v10 )
  {
    a1[3].m128i_i64[1] = 0;
    qfree(v10, (const char *)a3);
    a1[3].m128i_i64[0] = 0;
    a1[4].m128i_i64[0] = 0;
  }
  v11 = a1[4].m128i_i64[1];
  if ( v11 )
  {
    a1[5].m128i_i64[0] = 0;
    qfree(v11, (const char *)a3);
    a1[4].m128i_i64[1] = 0;
    a1[5].m128i_i64[1] = 0;
  }
  v12 = a1[2].m128i_i64[1];
  if ( v12 )
  {
    qfree(v12, (const char *)a3);
    a1[2].m128i_i64[1] = 0;
  }
  v13 = v26;
  v14 = v27[0];
  *a1 = _mm_load_si128((const __m128i *)&v25);
  si128 = _mm_load_si128((const __m128i *)&v25.m256i_u64[2]);
  a1[2].m128i_i32[0] = v13;
  a1[1] = si128;
  if ( v14 )
    a1[2].m128i_i64[1] = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  v16 = v28;
  if ( (unsigned __int64)v28 > 1 )
  {
    v21 = (const char *)v27[1];
    v22 = (void *)a1[3].m128i_i64[0];
    if ( a1[4].m128i_i64[0] < (unsigned __int64)v28 )
    {
      v24 = qvector_reserve(&a1[3], a1[3].m128i_i64[0], v28, 1);
      a1[3].m128i_i64[0] = v24;
      v22 = (void *)v24;
    }
    a1[3].m128i_i64[1] = v16;
    v8 = v21;
    memmove(v22, v21, v16 - 1);
    *(_BYTE *)(a1[3].m128i_i64[0] + v16 - 1) = 0;
  }
  else
  {
    a1[3].m128i_i64[1] = 0;
  }
  v17 = v30;
  if ( (unsigned __int64)v30 > 1 )
  {
    v19 = (const char *)src;
    v20 = (void *)a1[4].m128i_i64[1];
    if ( a1[5].m128i_i64[1] < (unsigned __int64)v30 )
    {
      v23 = qvector_reserve(&a1[4].m128i_u64[1], a1[4].m128i_i64[1], v30, 1);
      a1[4].m128i_i64[1] = v23;
      v20 = (void *)v23;
    }
    a1[5].m128i_i64[0] = v17;
    v8 = v19;
    memmove(v20, v19, v17 - 1);
    *(_BYTE *)(a1[4].m128i_i64[1] + v17 - 1) = 0;
  }
  else
  {
    a1[5].m128i_i64[0] = 0;
  }
  sub_1C63A0();
  if ( v27[0] )
  {
    qfree(v27[0], v8);
    v27[0] = nullptr;
  }
  if ( v27[1] )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27[1], v8);
    v27[1] = nullptr;
    *((_QWORD *)&v28 + 1) = 0;
  }
  if ( src )
  {
    *(_QWORD *)&v30 = 0;
    qfree(src, v8);
  }
  if ( v27[1] )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27[1], v8);
  }
  if ( v27[0] )
    qfree(v27[0], v8);
  return v31 - __readfsqword(0x28u);
}
