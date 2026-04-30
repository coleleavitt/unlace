unsigned __int64 __fastcall sub_342EE0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 i; // r14
  const char *v7; // rax
  const char *v8; // rdi
  __int64 v9; // r12
  __int64 v10; // r15
  const __m128i *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int32 v15; // eax
  __int64 v16; // rdi
  size_t v17; // r13
  size_t v18; // r15
  double v19; // xmm0_8
  __int64 v20; // r14
  const char *v21; // rax
  const char *v22; // rsi
  const char *v23; // rdi
  __m128i *v24; // rbp
  __int64 v25; // rax
  void *v26; // rax
  void *v28; // rax
  const void *v29; // rsi
  char *v30; // rax
  const void *v31; // rsi
  __int64 v32; // rax
  __int64 s2; // [rsp+10h] [rbp-C8h]
  char *s2a; // [rsp+10h] [rbp-C8h]
  const char *v37; // [rsp+18h] [rbp-C0h]
  void *v38; // [rsp+20h] [rbp-B8h]
  __int64 v39; // [rsp+28h] [rbp-B0h]
  __m128i v40[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int32 v41; // [rsp+50h] [rbp-88h]
  __int64 v42; // [rsp+58h] [rbp-80h]
  char *v43; // [rsp+60h] [rbp-78h]
  size_t v44; // [rsp+68h] [rbp-70h]
  size_t v45; // [rsp+70h] [rbp-68h]
  void *v46; // [rsp+78h] [rbp-60h]
  __int128 v47; // [rsp+80h] [rbp-58h]
  unsigned __int64 v48; // [rsp+98h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  s2 = (a3 - 1) / 2;
  if ( a2 < s2 )
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v12 = 192 * (i + 1);
      v13 = a1 + v12 - 96;
      v11 = (const __m128i *)(a1 + v12);
      v10 = v12;
      v14 = *(_QWORD *)(a1 + v12 + 56);
      if ( *(_QWORD *)(v13 + 56) )
      {
        v7 = *(const char **)(v13 + 48);
        v8 = &s1;
        if ( !v14 )
          goto LABEL_5;
      }
      else
      {
        v7 = &s1;
        if ( !v14 )
          goto LABEL_7;
      }
      v8 = (const char *)v11[3].m128i_i64[0];
LABEL_5:
      if ( strcmp(v8, v7) < 0 )
      {
        --v9;
        v10 = 96 * v9;
        v11 = (const __m128i *)(a1 + 96 * v9);
      }
LABEL_7:
      if ( 96 * i != v10 )
        sub_3428F0((__m128i *)(a1 + 96 * i), v11);
      if ( v9 >= s2 )
        goto LABEL_15;
    }
  }
  v9 = a2;
LABEL_15:
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v9 )
  {
    v32 = 192 * (v9 + 1) - 96;
    if ( v32 != 96 * v9 )
      sub_3428F0((__m128i *)(a1 + 96 * v9), (const __m128i *)(a1 + v32));
    v9 = 2 * (v9 + 1) - 1;
  }
  v15 = a4[2].m128i_i32[0];
  v16 = a4[2].m128i_i64[1];
  v40[0] = _mm_loadu_si128(a4);
  v41 = v15;
  v39 = v16;
  v40[1] = _mm_loadu_si128(a4 + 1);
  if ( v16 )
    v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v45 = 0;
  v17 = a4[3].m128i_u64[1];
  s2a = nullptr;
  if ( v17 )
  {
    v30 = (char *)qalloc_or_throw(v17);
    v31 = (const void *)a4[3].m128i_i64[0];
    s2a = v30;
    v45 = v17;
    memcpy(v30, v31, v17);
  }
  v18 = a4[5].m128i_u64[0];
  v19 = 0.0;
  v38 = nullptr;
  v47 = 0;
  if ( v18 )
  {
    v28 = (void *)qalloc_or_throw(v18);
    v29 = (const void *)a4[4].m128i_i64[1];
    v38 = v28;
    *((_QWORD *)&v47 + 1) = v18;
    memcpy(v28, v29, v18);
    *(_QWORD *)&v47 = v18;
  }
  v20 = (v9 - 1) / 2;
  if ( v9 <= a2 )
  {
LABEL_36:
    v24 = (__m128i *)(a1 + 96 * v9);
    goto LABEL_37;
  }
  v21 = &s1;
  if ( v17 )
    v21 = s2a;
  v37 = v21;
  while ( 1 )
  {
    v24 = (__m128i *)(a1 + 96 * v20);
    v25 = v24[3].m128i_i64[1];
    if ( v17 )
    {
      v22 = s2a;
      v23 = &s1;
      if ( !v25 )
        goto LABEL_28;
    }
    else if ( !v25 )
    {
      goto LABEL_36;
    }
    v23 = (const char *)v24[3].m128i_i64[0];
    v22 = v37;
LABEL_28:
    if ( strcmp(v23, v22) >= 0 )
      break;
    if ( 96 * v20 != 96 * v9 )
      sub_3428F0((__m128i *)(a1 + 96 * v9), (const __m128i *)(a1 + 96 * v20));
    v9 = v20;
    if ( a2 >= v20 )
      goto LABEL_37;
    v20 = (v20 - 1) / 2;
  }
  v24 = (__m128i *)(a1 + 96 * v9);
LABEL_37:
  v44 = v17;
  v43 = s2a;
  v42 = v39;
  v46 = v38;
  sub_3428F0(v24, v40);
  if ( v39 )
    v19 = qfree(v39, v40[0].m128i_i8);
  if ( s2a )
  {
    v19 = qfree(s2a, v40[0].m128i_i8);
    v26 = v38;
    v45 = 0;
    if ( v38 )
      goto LABEL_41;
  }
  else
  {
    v26 = v38;
    if ( v38 )
LABEL_41:
      qfree(v26, v40[0].m128i_i8, v19);
  }
  return v48 - __readfsqword(0x28u);
}
