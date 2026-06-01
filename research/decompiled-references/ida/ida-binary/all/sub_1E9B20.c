__int64 __fastcall sub_1E9B20(__m128i *a1, const void *a2, __int64 a3, const __m128i *a4, char a5)
{
  size_t v8; // rax
  size_t v9; // r14
  __int64 *v10; // rdi
  __int64 *v11; // rsi
  char v12; // r13
  __int32 v13; // eax
  __m128i v14; // xmm0
  __int64 v15; // rbp
  size_t v16; // r14
  __int64 *v17; // r15
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int32 v22; // eax
  __m128i v23; // xmm0
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rbp
  __m128i v27; // xmm0
  __int32 v28; // eax
  __int64 v29; // rdi
  __m128i v30; // xmm0
  size_t v31; // rbp
  size_t v32; // rbp
  __m128i *v33; // r14
  const char *v34; // rdx
  const char *v35; // rsi
  unsigned int v36; // ebp
  size_t v38; // r8
  void *v39; // rdi
  void *v40; // rax
  void *v41; // rdi
  size_t v42; // r15
  void *v43; // rax
  const void *v44; // rsi
  __int64 *v45; // rax
  void *v46; // rax
  const void *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  size_t n; // [rsp+8h] [rbp-D0h]
  const char *v51; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v52; // [rsp+18h] [rbp-C0h]
  __m128i v53; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v54; // [rsp+40h] [rbp-98h] BYREF
  __int32 v55; // [rsp+50h] [rbp-88h]
  __int64 v56; // [rsp+58h] [rbp-80h]
  void *v57; // [rsp+60h] [rbp-78h]
  __int128 v58; // [rsp+68h] [rbp-70h]
  void *v59; // [rsp+78h] [rbp-60h]
  __int128 v60; // [rsp+80h] [rbp-58h]
  unsigned __int64 v61; // [rsp+98h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  if ( a2 && (v8 = strlen((const char *)a2), (v9 = v8) != 0) )
  {
    v41 = (void *)a1[6].m128i_i64[1];
    v42 = v8 + 1;
    if ( a1[7].m128i_i64[1] < v8 + 1 )
    {
      v48 = qvector_reserve(&a1[6].m128i_u64[1], a1[6].m128i_i64[1], v42, 1);
      a1[6].m128i_i64[1] = v48;
      v41 = (void *)v48;
    }
    a1[7].m128i_i64[0] = v42;
    memmove(v41, a2, v9);
    *(_BYTE *)(a1[6].m128i_i64[1] + v9) = 0;
  }
  else
  {
    a1[7].m128i_i64[0] = 0;
  }
  v51 = nullptr;
  v52 = 0;
  v10 = (__int64 *)unk_8CAC18;
  if ( !unk_8CAC18 )
  {
    v49 = operator new(0x18u);
    *(_QWORD *)v49 = 0;
    v10 = (__int64 *)v49;
    unk_8CAC18 = v49;
    *(_OWORD *)(v49 + 8) = 0;
  }
  v11 = (__int64 *)&v51;
  v12 = sub_194860(v10, (__int64 *)&v51, a1[6].m128i_i64[0], 1);
  v13 = a4[2].m128i_i32[0];
  v53 = _mm_loadu_si128(a4);
  v14 = _mm_loadu_si128(a4 + 1);
  v15 = a4[2].m128i_i64[1];
  v55 = v13;
  v54 = v14;
  if ( v15 )
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  *((_QWORD *)&v58 + 1) = 0;
  v16 = a1[7].m128i_u64[0];
  v17 = nullptr;
  if ( v16 )
  {
    v45 = (__int64 *)qalloc_or_throw(a1[7].m128i_i64[0]);
    v11 = (__int64 *)a1[6].m128i_i64[1];
    *((_QWORD *)&v58 + 1) = v16;
    v17 = v45;
    memcpy(v45, v11, v16);
  }
  v18 = a1[2].m128i_i64[1];
  v59 = nullptr;
  v60 = 0;
  if ( v18 )
  {
    qfree(v18, (const char *)v11);
    a1[2].m128i_i64[1] = 0;
  }
  v19 = a1[3].m128i_i64[0];
  if ( v19 )
  {
    a1[3].m128i_i64[1] = 0;
    qfree(v19, (const char *)v11);
    a1[3].m128i_i64[0] = 0;
    a1[4].m128i_i64[0] = 0;
  }
  v20 = a1[4].m128i_i64[1];
  if ( v20 )
  {
    a1[5].m128i_i64[0] = 0;
    qfree(v20, (const char *)v11);
    a1[4].m128i_i64[1] = 0;
    a1[5].m128i_i64[1] = 0;
  }
  v21 = a1[2].m128i_i64[1];
  if ( v21 )
  {
    qfree(v21, (const char *)v11);
    a1[2].m128i_i64[1] = 0;
  }
  v22 = v55;
  *a1 = _mm_load_si128(&v53);
  v23 = _mm_load_si128(&v54);
  a1[2].m128i_i32[0] = v22;
  a1[1] = v23;
  if ( v15 )
  {
    a1[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( !v16 || (v38 = v16 - 1, v16 == 1) )
    {
      a1[3].m128i_i64[1] = 0;
      a1[5].m128i_i64[0] = 0;
      goto LABEL_21;
    }
    v39 = (void *)a1[3].m128i_i64[0];
    if ( a1[4].m128i_i64[0] >= v16 )
    {
      a1[3].m128i_i64[1] = v16;
      v11 = v17;
      memmove(v39, v17, v16 - 1);
      *(_BYTE *)(a1[3].m128i_i64[0] + v16 - 1) = 0;
      a1[5].m128i_i64[0] = 0;
      goto LABEL_21;
    }
  }
  else
  {
    if ( !v16 || (v38 = v16 - 1, v16 == 1) )
    {
      a1[3].m128i_i64[1] = 0;
      a1[5].m128i_i64[0] = 0;
      if ( !v17 )
        goto LABEL_23;
LABEL_22:
      qfree(v17, (const char *)v11);
      goto LABEL_23;
    }
    v39 = (void *)a1[3].m128i_i64[0];
    if ( a1[4].m128i_i64[0] >= v16 )
    {
      a1[3].m128i_i64[1] = v16;
      v11 = v17;
      memmove(v39, v17, v16 - 1);
      *(_BYTE *)(a1[3].m128i_i64[0] + v16 - 1) = 0;
      a1[5].m128i_i64[0] = 0;
      goto LABEL_65;
    }
  }
  n = v38;
  v40 = (void *)qvector_reserve(&a1[3], v39, v16, 1);
  a1[3].m128i_i64[0] = (__int64)v40;
  v11 = v17;
  a1[3].m128i_i64[1] = v16;
  memmove(v40, v17, n);
  *(_BYTE *)(a1[3].m128i_i64[0] + n) = 0;
  a1[5].m128i_i64[0] = 0;
  if ( v15 )
  {
LABEL_21:
    qfree(v15, (const char *)v11);
    if ( !v17 )
      goto LABEL_23;
    goto LABEL_22;
  }
LABEL_65:
  if ( v17 )
    goto LABEL_22;
LABEL_23:
  v24 = a1[2].m128i_i64[1];
  if ( *(_DWORD *)(v24 + 8) == -1 )
    *(_DWORD *)(v24 + 8) = (*(__int16 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a1[6].m128i_i64[0] + 568LL))(
                             a1[6].m128i_i64[0],
                             a1);
  v25 = operator new(0x10u);
  *(_QWORD *)v25 = -1;
  v26 = v25;
  *(_DWORD *)(v25 + 8) = 0;
  navstack_t_register_live(v25);
  v27 = _mm_loadu_si128(a1);
  v28 = a1[2].m128i_i32[0];
  a1[8].m128i_i64[0] = v26;
  v56 = 0;
  v29 = a1[2].m128i_i64[1];
  v53 = v27;
  v30 = _mm_loadu_si128(a1 + 1);
  v55 = v28;
  v54 = v30;
  if ( v29 )
    v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  v31 = a1[3].m128i_u64[1];
  v57 = nullptr;
  v58 = 0;
  if ( v31 )
  {
    v43 = (void *)qalloc_or_throw(v31);
    v44 = (const void *)a1[3].m128i_i64[0];
    v57 = v43;
    *((_QWORD *)&v58 + 1) = v31;
    memcpy(v43, v44, v31);
    *(_QWORD *)&v58 = v31;
  }
  v32 = a1[5].m128i_u64[0];
  v59 = nullptr;
  v60 = 0;
  if ( v32 )
  {
    v46 = (void *)qalloc_or_throw(v32);
    v47 = (const void *)a1[4].m128i_i64[1];
    v59 = v46;
    *((_QWORD *)&v60 + 1) = v32;
    memcpy(v46, v47, v32);
    *(_QWORD *)&v60 = v32;
  }
  v33 = &v53;
  v34 = &s1;
  if ( (a5 & 1) == 0 )
    v33 = a1;
  if ( (_QWORD)v52 )
    v34 = v51;
  v35 = (const char *)v33;
  v36 = navstack_t_init(a1[8].m128i_i64[0], v33, v34, 0);
  if ( (_BYTE)v36 != 1 && v12 && (a5 & 2) != 0 )
  {
    v35 = nullptr;
    navstack_t_stack_jump(a1[8].m128i_i64[0], 0, v33);
  }
  if ( v56 )
  {
    qfree(v56, v35);
    v56 = 0;
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57, v35);
    v57 = nullptr;
    *((_QWORD *)&v58 + 1) = 0;
  }
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59, v35);
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57, v35);
  }
  if ( v56 )
    qfree(v56, v35);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51, v35);
  }
  return v36;
}
