__int64 __fastcall sub_373BF0(__int64 a1, const char *a2, __int64 a3, __int64 **a4)
{
  __int64 *v7; // rdi
  const char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ebx
  __m128i *v13; // r15
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  size_t v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 *v19; // rbx
  __int64 v20; // r12
  __int64 *v21; // rdi
  double v22; // xmm0_8
  __int64 v23; // rdi
  __int64 *v24; // r15
  __int64 v25; // r15
  __int64 *v26; // r14
  _QWORD *v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rbx
  __int64 *v31; // rcx
  __int64 *v32; // rax
  __int64 (__fastcall **v33)(); // r8
  int v34; // r14d
  int v35; // ebp
  void *v36; // rbx
  __int64 v37; // rdx
  const char *v38; // rsi
  char *v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // rax
  __int64 *v42; // rbx
  __int64 *v43; // rbp
  __int64 v44; // rax
  size_t n; // [rsp+0h] [rbp-A8h]
  __int64 nb; // [rsp+0h] [rbp-A8h]
  size_t na; // [rsp+0h] [rbp-A8h]
  __int64 (__fastcall **v48)(); // [rsp+8h] [rbp-A0h]
  __int64 v49; // [rsp+10h] [rbp-98h] BYREF
  __int128 v50; // [rsp+18h] [rbp-90h]
  __int64 (__fastcall **v51)(); // [rsp+30h] [rbp-78h] BYREF
  __int64 v52; // [rsp+38h] [rbp-70h]
  void *src; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v54[2]; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v55; // [rsp+68h] [rbp-40h]

  v7 = *a4;
  v55 = __readfsqword(0x28u);
  if ( v7 )
  {
    a4[1] = nullptr;
    qfree(v7, a2);
    *a4 = nullptr;
    a4[2] = nullptr;
  }
  v9 = nullptr;
  v52 = a3;
  v51 = xref_path_handler___vtable;
  memset(v54, 0, 24);
  *(_QWORD *)&v54[0] = qvector_reserve(v54, 0, 1, 16);
  v10 = 16LL * *((_QWORD *)&v54[0] + 1) + *(_QWORD *)&v54[0];
  *(_DWORD *)v10 = -1;
  *(_QWORD *)(v10 + 8) = a2;
  if ( ++*((_QWORD *)&v54[0] + 1) )
  {
    v11 = *(_QWORD *)&v54[0];
    v12 = 0;
    while ( 1 )
    {
      LODWORD(src) = v12;
      v9 = *(const char **)(v11 + 16LL * v12 + 8);
      sub_370880(
        0,
        (__int64)v9,
        (__int64)v9,
        1,
        0,
        (unsigned __int8 (__fastcall ***)(_QWORD, __int64, __int64, _QWORD, _QWORD))&v51);
      v11 = *(_QWORD *)&v54[0];
      v13 = (__m128i *)(*(_QWORD *)&v54[0] + 16LL * *((_QWORD *)&v54[0] + 1) - 16);
      if ( v13->m128i_i64[1] == v52 )
        break;
      if ( (unsigned __int64)(unsigned int)++v12 >= *((_QWORD *)&v54[0] + 1) )
        goto LABEL_12;
    }
    v9 = nullptr;
    v14 = 0;
    v49 = 0;
    v15 = 0;
    v50 = 0;
    while ( 1 )
    {
      v18 = v13->m128i_i64[1];
      if ( v14 < v15 + 1 )
      {
        v49 = qvector_reserve(&v49, v9, v15 + 1, 8);
        v9 = (const char *)v49;
        v15 = v50;
      }
      *(_QWORD *)&v9[8 * v15] = v18;
      v16 = v50 + 1;
      *(_QWORD *)&v50 = v50 + 1;
      v17 = v13->m128i_i32[0];
      if ( (_DWORD)v17 == -1 )
        break;
      *v13 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)&v54[0] + 16 * v17));
      v14 = *((_QWORD *)&v50 + 1);
      v15 = v50;
      v9 = (const char *)v49;
    }
    v20 = v49;
    v19 = *((__int64 **)&v50 + 1);
  }
  else
  {
LABEL_12:
    v19 = nullptr;
    v16 = 0;
    v20 = 0;
  }
  v21 = *a4;
  v22 = 0.0;
  v49 = 0;
  v50 = 0;
  if ( v21 )
  {
    a4[1] = nullptr;
    n = v16;
    v22 = qfree(v21, v9);
    v23 = v49;
    *a4 = (__int64 *)v20;
    a4[2] = v19;
    a4[1] = (__int64 *)n;
    if ( v23 )
    {
      *(_QWORD *)&v50 = 0;
      v22 = qfree(v23, v9, v22);
    }
  }
  else
  {
    *a4 = (__int64 *)v20;
    a4[1] = (__int64 *)v16;
    a4[2] = v19;
  }
  v51 = xref_path_handler___vtable;
  if ( *(_QWORD *)&v54[0] )
  {
    *((_QWORD *)&v54[0] + 1) = 0;
    qfree(*(_QWORD *)&v54[0], v9, v22);
  }
  v24 = a4[1];
  if ( !v24 )
    return 0;
  v25 = 8LL * (_QWORD)v24;
  v26 = *a4;
  v54[0] = 0;
  v51 = (__int64 (__fastcall **)())(a1 + 272);
  src = nullptr;
  v52 = 2165563969LL;
  v49 = 0;
  v50 = 0;
  if ( v25 )
  {
    v27 = nullptr;
    v28 = 0;
    v25 = 0;
    while ( 1 )
    {
      v29 = *v26;
      if ( v28 < v25 + 1 )
      {
        src = (void *)qvector_reserve(&src, v27, v25 + 1, 8);
        v25 = *(_QWORD *)&v54[0];
        v27 = src;
      }
      v27[v25] = v29;
      ++*(_QWORD *)&v54[0];
      if ( !sub_370670(a1 + 272, v29) )
      {
        v31 = (__int64 *)(v49 + 8 * v50);
        if ( (__int64 *)v49 == v31 )
          goto LABEL_32;
        v32 = (__int64 *)v49;
        while ( v29 != *v32 )
        {
          if ( v31 == ++v32 )
            goto LABEL_32;
        }
        if ( v31 == v32 )
        {
LABEL_32:
          if ( *((_QWORD *)&v50 + 1) < (unsigned __int64)(v50 + 1) )
          {
            v49 = qvector_reserve(&v49, v49, v50 + 1, 8);
            v31 = (__int64 *)(v49 + 8 * v50);
          }
          *v31 = v29;
          *(_QWORD *)&v50 = v50 + 1;
        }
      }
      ++v26;
      v25 = *(_QWORD *)&v54[0];
      if ( v26 == &(*a4)[(_QWORD)a4[1]] )
        break;
      v28 = *((_QWORD *)&v54[0] + 1);
      v27 = src;
    }
    v33 = v51;
    v34 = v52;
    v35 = HIDWORD(v52);
    if ( *(_QWORD *)&v54[0] )
    {
      v48 = v51;
      nb = 8LL * *(_QWORD *)&v54[0];
      v36 = (void *)qalloc_or_throw(8LL * *(_QWORD *)&v54[0]);
      memcpy(v36, src, nb);
      v33 = v48;
      goto LABEL_39;
    }
  }
  else
  {
    v33 = (__int64 (__fastcall **)())(a1 + 272);
    v34 = -2129403327;
    v35 = 0;
  }
  v36 = nullptr;
LABEL_39:
  v37 = *(_QWORD *)(a1 + 320);
  v38 = *(const char **)(a1 + 312);
  if ( *(_QWORD *)(a1 + 328) < (unsigned __int64)(v37 + 1) )
  {
    na = (size_t)v33;
    v44 = qvector_reserve(a1 + 312, v38, v37 + 1, 40);
    *(_QWORD *)(a1 + 312) = v44;
    v37 = *(_QWORD *)(a1 + 320);
    v38 = (const char *)v44;
    v33 = (__int64 (__fastcall **)())na;
  }
  v39 = (char *)&v38[40 * v37];
  v40 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
  *(_QWORD *)v39 = v33;
  *((_DWORD *)v39 + 2) = v34;
  *((_DWORD *)v39 + 3) = v35;
  *((_QWORD *)v39 + 2) = v36;
  *(__m128i *)(v39 + 24) = v40;
  v41 = v50;
  ++*(_QWORD *)(a1 + 320);
  if ( v41 )
  {
    v42 = (__int64 *)v49;
    v43 = (__int64 *)(v49 + 8 * v41);
    if ( (__int64 *)v49 != v43 )
    {
      do
      {
        v38 = (const char *)*v42;
        sub_370AA0(a1 + 272, *v42++, 0);
      }
      while ( v43 != v42 );
    }
    sub_370D50((char **)(a1 + 272), v38);
    sub_3723D0(a1 + 272);
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    *(double *)v40.m128i_i64 = qfree(v49, v38);
  }
  if ( src )
  {
    *(_QWORD *)&v54[0] = 0;
    qfree(src, v38, *(double *)v40.m128i_i64);
  }
  return 1;
}
