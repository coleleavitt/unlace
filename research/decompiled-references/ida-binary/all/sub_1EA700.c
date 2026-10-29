unsigned __int64 __fastcall sub_1EA700(_QWORD *a1, __m256i *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int32 v7; // eax
  __m128i *v8; // rbx
  __int64 v9; // rbp
  size_t v10; // r13
  __m256i *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int32 v16; // eax
  __m128i si128; // xmm0
  void (__fastcall ***v18)(_QWORD, __m256i *, _QWORD); // rdi
  __int64 v19; // rax
  __m128 v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rdx
  size_t v24; // r15
  void *v25; // rdi
  void *v26; // rax
  __m256i *v27; // rax
  __m256i v28; // [rsp+0h] [rbp-A8h] BYREF
  __int32 v29; // [rsp+20h] [rbp-88h]
  size_t v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+48h] [rbp-60h]
  __int128 v32; // [rsp+50h] [rbp-58h]
  unsigned __int64 v33; // [rsp+68h] [rbp-40h]

  v7 = a3[2].m128i_i32[0];
  v33 = __readfsqword(0x28u);
  v8 = (__m128i *)a2;
  v9 = a3[2].m128i_i64[1];
  *(__m128i *)v28.m256i_i8 = _mm_loadu_si128(a3);
  v29 = v7;
  *(__m128i *)&v28.m256i_u64[2] = _mm_loadu_si128(a3 + 1);
  if ( v9 )
    v9 = (*(__int64 (__fastcall **)(__int64, __m256i *, const __m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 16LL))(
           v9,
           a2,
           a3,
           a4,
           a5,
           a6,
           v28.m256i_i64[0],
           v28.m256i_i64[1],
           v28.m256i_i64[2],
           v28.m256i_i64[3]);
  v10 = a1[14];
  v11 = nullptr;
  v30 = 0;
  if ( v10 )
  {
    v27 = (__m256i *)qalloc_or_throw(v10);
    a2 = (__m256i *)a1[13];
    v30 = v10;
    v11 = v27;
    memcpy(v27, a2, v10);
  }
  v12 = v8[2].m128i_i64[1];
  v31 = 0;
  v32 = 0;
  if ( v12 )
  {
    qfree(v12, a2->m256i_i8);
    v8[2].m128i_i64[1] = 0;
  }
  v13 = v8[3].m128i_i64[0];
  if ( v13 )
  {
    v8[3].m128i_i64[1] = 0;
    qfree(v13, a2->m256i_i8);
    v8[3].m128i_i64[0] = 0;
    v8[4].m128i_i64[0] = 0;
  }
  v14 = v8[4].m128i_i64[1];
  if ( v14 )
  {
    v8[5].m128i_i64[0] = 0;
    qfree(v14, a2->m256i_i8);
    v8[4].m128i_i64[1] = 0;
    v8[5].m128i_i64[1] = 0;
  }
  v15 = v8[2].m128i_i64[1];
  if ( v15 )
  {
    qfree(v15, a2->m256i_i8);
    v8[2].m128i_i64[1] = 0;
  }
  v16 = v29;
  *v8 = _mm_load_si128((const __m128i *)&v28);
  si128 = _mm_load_si128((const __m128i *)&v28.m256i_u64[2]);
  v8[2].m128i_i32[0] = v16;
  v8[1] = si128;
  if ( v9 )
  {
    v8[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( !v10 || (v24 = v10 - 1, v10 == 1) )
    {
      v8[3].m128i_i64[1] = 0;
      v8[5].m128i_i64[0] = 0;
      goto LABEL_16;
    }
    v25 = (void *)v8[3].m128i_i64[0];
    if ( v8[4].m128i_i64[0] >= v10 )
    {
      v8[3].m128i_i64[1] = v10;
      a2 = v11;
      memmove(v25, v11, v10 - 1);
      *(_BYTE *)(v8[3].m128i_i64[0] + v10 - 1) = 0;
      v8[5].m128i_i64[0] = 0;
      goto LABEL_16;
    }
  }
  else
  {
    if ( !v10 || (v24 = v10 - 1, v10 == 1) )
    {
      v8[3].m128i_i64[1] = 0;
      v8[5].m128i_i64[0] = 0;
      if ( !v11 )
        goto LABEL_18;
LABEL_17:
      qfree(v11, a2->m256i_i8);
      goto LABEL_18;
    }
    v25 = (void *)v8[3].m128i_i64[0];
    if ( v8[4].m128i_i64[0] >= v10 )
    {
      v8[3].m128i_i64[1] = v10;
      a2 = v11;
      memmove(v25, v11, v10 - 1);
      *(_BYTE *)(v8[3].m128i_i64[0] + v10 - 1) = 0;
      v8[5].m128i_i64[0] = 0;
      goto LABEL_37;
    }
  }
  v26 = (void *)qvector_reserve(&v8[3], v25, v10, 1);
  v8[3].m128i_i64[0] = (__int64)v26;
  a2 = v11;
  v8[3].m128i_i64[1] = v10;
  memmove(v26, v11, v24);
  *(_BYTE *)(v8[3].m128i_i64[0] + v24) = 0;
  v8[5].m128i_i64[0] = 0;
  if ( v9 )
  {
LABEL_16:
    qfree(v9, a2->m256i_i8);
    if ( !v11 )
      goto LABEL_18;
    goto LABEL_17;
  }
LABEL_37:
  if ( v11 )
    goto LABEL_17;
LABEL_18:
  v18 = (void (__fastcall ***)(_QWORD, __m256i *, _QWORD))v8[2].m128i_i64[1];
  memset(&v28, 0, 24);
  if ( !v18 )
  {
LABEL_30:
    v20 = 0;
    goto LABEL_22;
  }
  v19 = a1[12];
  if ( !v19 )
  {
    v18 = nullptr;
    goto LABEL_30;
  }
  a2 = &v28;
  (**v18)(v18, &v28, *(_QWORD *)(v19 + 728));
  if ( v28.m256i_i64[1] <= 0x101uLL )
  {
    v18 = (void (__fastcall ***)(_QWORD, __m256i *, _QWORD))v28.m256i_i64[0];
    v20 = _mm_loadh_ps((const double *)&v28.m256i_i64[2]);
  }
  else
  {
    a2 = (__m256i *)&qword_100;
    sub_510EC0(&v28, 256);
    v18 = (void (__fastcall ***)(_QWORD, __m256i *, _QWORD))v28.m256i_i64[0];
    v20 = (__m128)_mm_loadu_si128((const __m128i *)&v28.m256i_u64[1]);
  }
LABEL_22:
  v21 = v8[4].m128i_i64[1];
  v22 = v8[5].m128i_i64[1];
  v8[4].m128i_i64[1] = (__int64)v18;
  v8[5] = (__m128i)v20;
  v28.m256i_i64[0] = v21;
  v28.m256i_i64[2] = v22;
  if ( v21 )
    qfree(v21, a2->m256i_i8, v22, a4, a5, a6, v28.m256i_i64[0], 0, v28.m256i_i64[2]);
  return v33 - __readfsqword(0x28u);
}
