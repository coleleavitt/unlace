unsigned __int64 __fastcall sites_chooser_t__::vfunc_6(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r15
  size_t v15; // rbx
  __int64 v16; // rbx
  __m128i v17; // xmm1
  void *v18; // rbp
  void *v19; // rdi
  double v20; // xmm0_8
  __m128i v21; // xmm1
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  const char *v25; // rsi
  __int64 v27; // rax
  size_t v28; // r9
  const char *v29; // r10
  void *v30; // rax
  size_t v31; // r9
  const char *v32; // r10
  void *v33; // rax
  size_t v34; // r9
  const char *v35; // r10
  void *v36; // rax
  size_t v37; // r9
  const char *v38; // r10
  void *v39; // rdi
  void *v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rsi
  __m128i v49; // [rsp+0h] [rbp-98h] BYREF
  __int64 v50; // [rsp+10h] [rbp-88h]
  const char *v51; // [rsp+18h] [rbp-80h]
  void *v52; // [rsp+20h] [rbp-78h] BYREF
  __m128i v53; // [rsp+28h] [rbp-70h] BYREF
  char s[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v55; // [rsp+58h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 336);
  v8 = *a2;
  v50 = a4;
  v9 = v7 + 104 * a5;
  v55 = __readfsqword(0x28u);
  if ( v9 != v8 )
  {
    v11 = *(_QWORD *)(v9 + 8);
    if ( !v11 || (v37 = v11 - 1, v11 == 1) )
    {
      *(_QWORD *)(v8 + 8) = 0;
      v8 = *a2;
    }
    else
    {
      v38 = *(const char **)v9;
      v39 = *(void **)v8;
      if ( *(_QWORD *)(v8 + 16) < v11 )
      {
        v40 = *(void **)v8;
        v41 = *(_QWORD *)(v9 + 8);
        v51 = *(const char **)v9;
        v49.m128i_i64[0] = v11 - 1;
        v42 = qvector_reserve(v8, v40, v41, 1);
        v38 = v51;
        v37 = v11 - 1;
        *(_QWORD *)v8 = v42;
        v39 = (void *)v42;
      }
      *(_QWORD *)(v8 + 8) = v11;
      memmove(v39, v38, v37);
      *(_BYTE *)(*(_QWORD *)v8 + v11 - 1) = 0;
      v8 = *a2;
    }
  }
  if ( v8 + 24 != v9 + 24 )
  {
    v12 = *(_QWORD *)(v9 + 32);
    if ( !v12 || (v34 = v12 - 1, v12 == 1) )
    {
      *(_QWORD *)(v8 + 32) = 0;
      v8 = *a2;
    }
    else
    {
      v35 = *(const char **)(v9 + 24);
      v36 = *(void **)(v8 + 24);
      if ( *(_QWORD *)(v8 + 40) < v12 )
      {
        v47 = *(_QWORD *)(v9 + 32);
        v48 = *(_QWORD *)(v8 + 24);
        v51 = *(const char **)(v9 + 24);
        v49.m128i_i64[0] = v12 - 1;
        v36 = (void *)qvector_reserve(v8 + 24, v48, v47, 1);
        v35 = v51;
        v34 = v12 - 1;
        *(_QWORD *)(v8 + 24) = v36;
      }
      *(_QWORD *)(v8 + 32) = v12;
      memmove(v36, v35, v34);
      *(_BYTE *)(*(_QWORD *)(v8 + 24) + v12 - 1) = 0;
      v8 = *a2;
    }
  }
  if ( v8 + 48 != v9 + 48 )
  {
    v13 = *(_QWORD *)(v9 + 56);
    if ( !v13 || (v31 = v13 - 1, v13 == 1) )
    {
      *(_QWORD *)(v8 + 56) = 0;
      v8 = *a2;
    }
    else
    {
      v32 = *(const char **)(v9 + 48);
      v33 = *(void **)(v8 + 48);
      if ( *(_QWORD *)(v8 + 64) < v13 )
      {
        v45 = *(_QWORD *)(v9 + 56);
        v46 = *(_QWORD *)(v8 + 48);
        v51 = *(const char **)(v9 + 48);
        v49.m128i_i64[0] = v13 - 1;
        v33 = (void *)qvector_reserve(v8 + 48, v46, v45, 1);
        v32 = v51;
        v31 = v13 - 1;
        *(_QWORD *)(v8 + 48) = v33;
      }
      *(_QWORD *)(v8 + 56) = v13;
      memmove(v33, v32, v31);
      *(_BYTE *)(*(_QWORD *)(v8 + 48) + v13 - 1) = 0;
      v8 = *a2;
    }
  }
  if ( v8 + 72 != v9 + 72 )
  {
    v14 = *(_QWORD *)(v9 + 80);
    if ( !v14 || (v28 = v14 - 1, v14 == 1) )
    {
      *(_QWORD *)(v8 + 80) = 0;
    }
    else
    {
      v29 = *(const char **)(v9 + 72);
      v30 = *(void **)(v8 + 72);
      if ( *(_QWORD *)(v8 + 88) < v14 )
      {
        v43 = *(_QWORD *)(v9 + 80);
        v44 = *(_QWORD *)(v8 + 72);
        v51 = *(const char **)(v9 + 72);
        v49.m128i_i64[0] = v14 - 1;
        v30 = (void *)qvector_reserve(v8 + 72, v44, v43, 1);
        v29 = v51;
        v28 = v14 - 1;
        *(_QWORD *)(v8 + 72) = v30;
      }
      *(_QWORD *)(v8 + 80) = v14;
      memmove(v30, v29, v28);
      *(_BYTE *)(*(_QWORD *)(v8 + 72) + v14 - 1) = 0;
    }
  }
  qstrftime64(s, 20, "%F %T", *(_QWORD *)(v9 + 96));
  v52 = nullptr;
  v53 = 0;
  v15 = strlen(s);
  v49.m128i_i64[0] = v15 + 1;
  v52 = (void *)qvector_reserve(&v52, 0, v15 + 1, 1);
  v53.m128i_i64[0] = v15 + 1;
  memmove(v52, s, v15);
  *((_BYTE *)v52 + v15) = 0;
  v16 = *a2;
  v17 = _mm_loadu_si128(&v53);
  v18 = v52;
  v53 = 0;
  v52 = nullptr;
  v19 = *(void **)(v16 + 96);
  if ( v19 )
  {
    *(_QWORD *)(v16 + 104) = 0;
    v49 = v17;
    v20 = qfree(v19, s);
    v21 = _mm_load_si128(&v49);
    v19 = v52;
    *(_QWORD *)(v16 + 96) = v18;
    *(__m128i *)(v16 + 104) = v21;
    if ( v19 )
    {
      v53.m128i_i64[0] = 0;
      qfree(v19, s, v20);
    }
  }
  else
  {
    *(_QWORD *)(v16 + 96) = v18;
    *(__m128i *)(v16 + 104) = v17;
  }
  v22 = sub_426230(v19, s);
  v23 = sub_4170A0(v22);
  v24 = *(_QWORD *)(v23 + 8);
  if ( !*(_QWORD *)(v9 + 8) )
  {
    v25 = &s1;
    if ( !v24 )
      goto LABEL_22;
    goto LABEL_21;
  }
  v25 = *(const char **)v9;
  if ( v24 )
  {
LABEL_21:
    if ( strcmp(*(const char **)v23, v25) )
      return v55 - __readfsqword(0x28u);
LABEL_22:
    v27 = v50;
    *(_QWORD *)(a1 + 360) = a5;
    *(_DWORD *)(v27 + 4) |= 1u;
    return v55 - __readfsqword(0x28u);
  }
  if ( !strcmp(&s1, v25) )
    goto LABEL_22;
  return v55 - __readfsqword(0x28u);
}
