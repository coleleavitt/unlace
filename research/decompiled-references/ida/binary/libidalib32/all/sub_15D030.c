unsigned __int64 __fastcall sub_15D030(_QWORD *a1, __m128i *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int32 v7; // eax
  __int64 v9; // rbp
  size_t v10; // r13
  const void *v11; // r14
  __int64 v12; // rdi
  __int32 v13; // eax
  __m128i si128; // xmm0
  void (__fastcall ***v15)(_QWORD, __m256i *, _QWORD); // rdi
  __int64 v16; // rax
  __m128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rdx
  size_t v21; // r15
  void *v22; // rdi
  void *v23; // rax
  void *v24; // rax
  const void *v25; // rsi
  void *v26; // rdi
  __m256i v27; // [rsp+0h] [rbp-A8h] BYREF
  __int32 v28; // [rsp+20h] [rbp-88h]
  size_t v29; // [rsp+40h] [rbp-68h]
  __int64 v30; // [rsp+48h] [rbp-60h]
  __int128 v31; // [rsp+50h] [rbp-58h]
  unsigned __int64 v32; // [rsp+68h] [rbp-40h]

  v7 = a3[2].m128i_i32[0];
  v32 = __readfsqword(0x28u);
  v9 = a3[2].m128i_i64[1];
  *(__m128i *)v27.m256i_i8 = _mm_loadu_si128(a3);
  v28 = v7;
  *(__m128i *)&v27.m256i_u64[2] = _mm_loadu_si128(a3 + 1);
  if ( v9 )
    v9 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 16LL))(
           v9,
           a2,
           a3,
           a4,
           a5,
           a6,
           v27.m256i_i64[0],
           v27.m256i_i64[1],
           v27.m256i_i64[2],
           v27.m256i_i64[3]);
  v10 = a1[14];
  v11 = nullptr;
  v29 = 0;
  if ( v10 )
  {
    v24 = (void *)qalloc_or_throw();
    v25 = (const void *)a1[13];
    v29 = v10;
    v11 = v24;
    memcpy(v24, v25, v10);
  }
  v12 = a2[2].m128i_i64[1];
  v30 = 0;
  v31 = 0;
  if ( v12 )
  {
    qfree();
    a2[2].m128i_i64[1] = 0;
  }
  if ( a2[3].m128i_i64[0] )
  {
    a2[3].m128i_i64[1] = 0;
    qfree();
    a2[3].m128i_i64[0] = 0;
    a2[4].m128i_i64[0] = 0;
  }
  if ( a2[4].m128i_i64[1] )
  {
    a2[5].m128i_i64[0] = 0;
    qfree();
    a2[4].m128i_i64[1] = 0;
    a2[5].m128i_i64[1] = 0;
  }
  if ( a2[2].m128i_i64[1] )
  {
    qfree();
    a2[2].m128i_i64[1] = 0;
  }
  v13 = v28;
  *a2 = _mm_load_si128((const __m128i *)&v27);
  si128 = _mm_load_si128((const __m128i *)&v27.m256i_u64[2]);
  a2[2].m128i_i32[0] = v13;
  a2[1] = si128;
  if ( v9 )
  {
    a2[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( !v10 || (v21 = v10 - 1, v10 == 1) )
    {
      a2[3].m128i_i64[1] = 0;
      a2[5].m128i_i64[0] = 0;
      goto LABEL_16;
    }
    v22 = (void *)a2[3].m128i_i64[0];
    if ( a2[4].m128i_i64[0] >= v10 )
    {
      a2[3].m128i_i64[1] = v10;
      memmove(v22, v11, v10 - 1);
      *(_BYTE *)(a2[3].m128i_i64[0] + v10 - 1) = 0;
      a2[5].m128i_i64[0] = 0;
      goto LABEL_16;
    }
  }
  else
  {
    if ( !v10 || (v21 = v10 - 1, v10 == 1) )
    {
      a2[3].m128i_i64[1] = 0;
      a2[5].m128i_i64[0] = 0;
      if ( !v11 )
        goto LABEL_18;
LABEL_17:
      qfree();
      goto LABEL_18;
    }
    v26 = (void *)a2[3].m128i_i64[0];
    if ( a2[4].m128i_i64[0] >= v10 )
    {
      a2[3].m128i_i64[1] = v10;
      memmove(v26, v11, v10 - 1);
      *(_BYTE *)(a2[3].m128i_i64[0] + v10 - 1) = 0;
      a2[5].m128i_i64[0] = 0;
      goto LABEL_37;
    }
  }
  v23 = (void *)qvector_reserve();
  a2[3].m128i_i64[0] = (__int64)v23;
  a2[3].m128i_i64[1] = v10;
  memmove(v23, v11, v21);
  *(_BYTE *)(a2[3].m128i_i64[0] + v21) = 0;
  a2[5].m128i_i64[0] = 0;
  if ( v9 )
  {
LABEL_16:
    qfree();
    if ( !v11 )
      goto LABEL_18;
    goto LABEL_17;
  }
LABEL_37:
  if ( v11 )
    goto LABEL_17;
LABEL_18:
  v15 = (void (__fastcall ***)(_QWORD, __m256i *, _QWORD))a2[2].m128i_i64[1];
  memset(&v27, 0, 24);
  if ( !v15 )
  {
LABEL_30:
    v17 = 0;
    goto LABEL_22;
  }
  v16 = a1[12];
  if ( !v16 )
  {
    v15 = nullptr;
    goto LABEL_30;
  }
  (**v15)(v15, &v27, *(_QWORD *)(v16 + 752));
  if ( v27.m256i_i64[1] <= 0x101uLL )
  {
    v15 = (void (__fastcall ***)(_QWORD, __m256i *, _QWORD))v27.m256i_i64[0];
    v17 = _mm_loadh_ps((const double *)&v27.m256i_i64[2]);
  }
  else
  {
    sub_1982D0(&v27, 256);
    v15 = (void (__fastcall ***)(_QWORD, __m256i *, _QWORD))v27.m256i_i64[0];
    v17 = (__m128)_mm_loadu_si128((const __m128i *)&v27.m256i_u64[1]);
  }
LABEL_22:
  v18 = a2[4].m128i_i64[1];
  v19 = a2[5].m128i_i64[1];
  a2[4].m128i_i64[1] = (__int64)v15;
  a2[5] = (__m128i)v17;
  v27.m256i_i64[0] = v18;
  v27.m256i_i64[2] = v19;
  if ( v18 )
  {
    v27.m256i_i64[1] = 0;
    qfree();
  }
  return v32 - __readfsqword(0x28u);
}

