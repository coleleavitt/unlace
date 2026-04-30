unsigned __int64 __fastcall sub_3432C0(const __m128i *a1)
{
  __int32 v1; // eax
  __m128i v3; // xmm0
  __int64 v4; // rdi
  size_t v5; // rbp
  const char *v6; // r12
  size_t v7; // r13
  double v8; // xmm0_8
  const __m128i *i; // r15
  const char *v10; // rsi
  const char *v11; // rdi
  void *v12; // rax
  void *v14; // rax
  const void *v15; // rsi
  char *v16; // rax
  const void *v17; // rsi
  void *v18; // [rsp+0h] [rbp-B8h]
  __int64 v19; // [rsp+8h] [rbp-B0h]
  __m128i v20[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int32 v21; // [rsp+30h] [rbp-88h]
  __int64 v22; // [rsp+38h] [rbp-80h]
  const char *v23; // [rsp+40h] [rbp-78h]
  size_t v24; // [rsp+48h] [rbp-70h]
  size_t v25; // [rsp+50h] [rbp-68h]
  void *v26; // [rsp+58h] [rbp-60h]
  __int128 v27; // [rsp+60h] [rbp-58h]
  unsigned __int64 v28; // [rsp+78h] [rbp-40h]

  v1 = a1[2].m128i_i32[0];
  v28 = __readfsqword(0x28u);
  v20[0] = _mm_loadu_si128(a1);
  v3 = _mm_loadu_si128(a1 + 1);
  v4 = a1[2].m128i_i64[1];
  v21 = v1;
  v19 = v4;
  v20[1] = v3;
  if ( v4 )
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v25 = 0;
  v5 = a1[3].m128i_u64[1];
  v6 = nullptr;
  if ( v5 )
  {
    v16 = (char *)qalloc_or_throw(a1[3].m128i_i64[1]);
    v17 = (const void *)a1[3].m128i_i64[0];
    v25 = v5;
    v6 = v16;
    memcpy(v16, v17, v5);
  }
  v7 = a1[5].m128i_u64[0];
  v8 = 0.0;
  v18 = nullptr;
  v27 = 0;
  if ( v7 )
  {
    v14 = (void *)qalloc_or_throw(v7);
    v15 = (const void *)a1[4].m128i_i64[1];
    v18 = v14;
    *((_QWORD *)&v27 + 1) = v7;
    memcpy(v14, v15, v7);
    *(_QWORD *)&v27 = v7;
  }
  for ( i = a1 - 6; ; i -= 6 )
  {
    if ( i[3].m128i_i64[1] )
    {
      v10 = (const char *)i[3].m128i_i64[0];
      v11 = &s1;
      if ( !v5 )
        goto LABEL_9;
      goto LABEL_14;
    }
    if ( !v5 )
      break;
    v10 = &s1;
LABEL_14:
    v11 = v6;
LABEL_9:
    if ( strcmp(v11, v10) >= 0 )
      break;
    sub_3428F0((__m128i *)&i[6], i);
  }
  v23 = v6;
  v22 = v19;
  v24 = v5;
  v26 = v18;
  sub_3428F0((__m128i *)&i[6], v20);
  if ( v19 )
    v8 = qfree(v19, v20[0].m128i_i8);
  if ( v6 )
  {
    v8 = qfree(v6, v20[0].m128i_i8);
    v12 = v18;
    v25 = 0;
    if ( v18 )
      goto LABEL_19;
  }
  else
  {
    v12 = v18;
    if ( v18 )
LABEL_19:
      qfree(v12, v20[0].m128i_i8, v8);
  }
  return v28 - __readfsqword(0x28u);
}
