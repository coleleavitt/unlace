void __fastcall sub_42DA70(__int64 *a1, char *a2, __int64 a3)
{
  __int64 *v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // r13
  __int64 v6; // rcx
  char v7; // bl
  _BYTE *v8; // rax
  __m128i v9; // xmm0
  void *v10; // rax
  bool v11; // zf
  __int64 *i; // rbx
  unsigned int *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rbx
  const char *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rcx
  void *v21; // rdx
  _QWORD *v22; // rbx
  __int64 v23; // r9
  int v24; // r15d
  void *v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // rsi
  unsigned __int64 v28; // rdi
  _QWORD *v29; // rax
  __int64 v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rdx
  void *v34; // rdi
  size_t v35; // rdx
  const char *v36; // rsi
  size_t v37; // r14
  void *v38; // rax
  const void *v39; // rsi
  __int64 v40; // rdx
  const char *v41; // rax
  __m128i v42; // xmm0
  void *v43; // rax
  pthread_rwlock_t *v44; // r14
  int v45; // eax
  __int64 v46; // [rsp+18h] [rbp-108h]
  __int64 v47; // [rsp+20h] [rbp-100h]
  pthread_rwlock_t *rwlock; // [rsp+28h] [rbp-F8h]
  unsigned int *v49; // [rsp+30h] [rbp-F0h]
  unsigned int *v50; // [rsp+38h] [rbp-E8h]
  __int64 *v51; // [rsp+40h] [rbp-E0h]
  __int64 *v52; // [rsp+48h] [rbp-D8h]
  size_t v53; // [rsp+50h] [rbp-D0h]
  void *v54; // [rsp+58h] [rbp-C8h]
  size_t n; // [rsp+68h] [rbp-B8h]
  char v56; // [rsp+8Eh] [rbp-92h] BYREF
  char v57; // [rsp+8Fh] [rbp-91h] BYREF
  unsigned int *v58; // [rsp+90h] [rbp-90h] BYREF
  unsigned int *v59; // [rsp+98h] [rbp-88h]
  __int64 v60; // [rsp+A0h] [rbp-80h]
  void *ptr; // [rsp+B0h] [rbp-70h] BYREF
  __m128i v62; // [rsp+B8h] [rbp-68h] BYREF
  void *v63; // [rsp+D0h] [rbp-50h] BYREF
  size_t v64[2]; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v65; // [rsp+E8h] [rbp-38h]

  v3 = *(__int64 **)(a3 + 8);
  v4 = *(__int64 **)a3;
  v65 = __readfsqword(0x28u);
  v5 = *a1;
  *(_OWORD *)a3 = 0;
  v51 = v3;
  v6 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0;
  v7 = *a2;
  v52 = v4;
  v47 = v6;
  sub_42A680((__int64)&v58, v4, v4 + 3);
  ptr = nullptr;
  v62 = 0;
  v49 = v58;
  v46 = v60;
  rwlock = *(pthread_rwlock_t **)(v5 + 8);
  if ( &_pthread_key_create )
  {
    v44 = *(pthread_rwlock_t **)(v5 + 8);
    do
      v45 = pthread_rwlock_rdlock(v44);
    while ( v45 == 11 );
    if ( v45 == 35 )
      std::__throw_system_error(35);
  }
  v8 = *(_BYTE **)(v5 + 104);
  if ( (!v8 || !*v8) && *(_QWORD *)(*(_QWORD *)(v5 + 8) + 56LL) == *(_QWORD *)(v5 + 24) && v7 )
  {
    v50 = v59;
    v13 = v49;
    if ( v59 == v49 )
    {
LABEL_41:
      if ( &_pthread_key_create )
        pthread_rwlock_unlock(rwlock);
      v40 = *(_QWORD *)(v5 + 48);
      v41 = haystack;
      if ( v40 )
      {
        v41 = *(const char **)(v5 + 40);
        --v40;
      }
      sub_427F20((__int64)&ptr, v40, (__int64)v41, *(int *)(v5 + 32));
      v42 = _mm_loadu_si128(&v62);
      v43 = ptr;
      v57 = 1;
      ptr = nullptr;
      *(__m128i *)v64 = v42;
      v63 = v43;
      v11 = *(_QWORD *)(v5 + 88) == 0;
      v62 = 0;
      if ( v11 )
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(__int64, char *, void **))(v5 + 96))(v5 + 72, &v57, &v63);
      if ( v63 )
      {
        v64[0] = 0;
        qfree(v63);
      }
      if ( ptr )
      {
        v62.m128i_i64[0] = 0;
        qfree(ptr);
      }
      goto LABEL_11;
    }
    while ( 1 )
    {
      v29 = *(_QWORD **)v5;
      v30 = *v13;
      if ( *((_BYTE *)v13 + 8) )
      {
        v14 = v29[51];
        v15 = v29[64];
        v16 = *(_QWORD *)(v14 + 8LL * *(unsigned int *)(v29[55] + 4 * v30));
        v17 = (const char *)(v29[45] + v16);
        n = *(_QWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)(v29[55] + 4 * v30) + 1)) + ~v16;
        v18 = *(unsigned int *)(v29[68] + 4 * v30);
        v19 = (unsigned int)(v18 + 1);
        v20 = *(_QWORD *)(v15 + 8 * v18);
        v21 = (void *)(v29[58] + v20);
      }
      else
      {
        v31 = v29[24];
        v15 = v29[37];
        v32 = *(_QWORD *)(v31 + 8LL * *(unsigned int *)(v29[28] + 4 * v30));
        v17 = (const char *)(v29[18] + v32);
        n = *(_QWORD *)(v31 + 8LL * (unsigned int)(*(_DWORD *)(v29[28] + 4 * v30) + 1)) + ~v32;
        v33 = *(unsigned int *)(v29[41] + 4 * v30);
        v19 = (unsigned int)(v33 + 1);
        v20 = *(_QWORD *)(v15 + 8 * v33);
        v21 = (void *)(v29[31] + v20);
      }
      v53 = *(_QWORD *)(v15 + 8 * v19) + ~v20;
      v54 = v21;
      v22 = (_QWORD *)operator new(0x48u);
      v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 112LL) + 4 * v30);
      v63 = nullptr;
      *(_OWORD *)v64 = 0;
      if ( n )
      {
        v34 = nullptr;
        v35 = n + 1;
        if ( n != -1 )
        {
          v63 = (void *)qvector_reserve(&v63, 0, v35, 1);
          v35 = n + 1;
          v34 = v63;
        }
        v64[0] = v35;
        v36 = v17;
        memmove(v34, v17, n);
        *((_BYTE *)v63 + n) = 0;
        v37 = v64[0];
        *v22 = &off_2AFE708;
        v22[1] = 0;
        *((_OWORD *)v22 + 1) = 0;
        if ( v37 )
        {
          v38 = (void *)qalloc_or_throw(v37, v36);
          v22[1] = v38;
          v39 = v63;
          v22[3] = v37;
          memcpy(v38, v39, v37);
          v22[2] = v37;
        }
      }
      else
      {
        v22[1] = 0;
        *((_OWORD *)v22 + 1) = 0;
      }
      v25 = v63;
      v22[4] = 1;
      v22[5] = 0;
      *((_DWORD *)v22 + 17) = v24;
      *v22 = &off_2AFE738;
      *((_OWORD *)v22 + 3) = 0;
      if ( v25 )
      {
        v64[0] = 0;
        qfree(v25);
      }
      sub_425270(
        (__int64)v22,
        (*(_QWORD *)(v5 + 48) == 0) + *(_QWORD *)(v5 + 48) - 1LL,
        *(_QWORD *)(*(_QWORD *)(v5 + 64) - 24LL),
        *(char **)(v5 + 64),
        n,
        v23,
        v53,
        v54);
      v26 = v62.m128i_i64[0];
      v27 = ptr;
      v28 = v62.m128i_i64[0] + 1;
      v63 = v22;
      if ( &v63 < ptr || &v63 >= (void **)((char *)ptr + 8 * v62.m128i_i64[1]) )
      {
        if ( v62.m128i_i64[1] < v28 )
        {
LABEL_35:
          ptr = (void *)qvector_reserve(&ptr, ptr, v62.m128i_i64[0] + 1, 8);
          v27 = ptr;
          v26 = v62.m128i_i64[0];
        }
      }
      else if ( v62.m128i_i64[1] < v28 )
      {
        goto LABEL_35;
      }
      v27[v26] = v22;
      v13 += 4;
      ++v62.m128i_i64[0];
      if ( v50 == v13 )
        goto LABEL_41;
    }
  }
  if ( &_pthread_key_create )
    pthread_rwlock_unlock(rwlock);
  v9 = _mm_loadu_si128(&v62);
  v10 = ptr;
  v56 = 0;
  ptr = nullptr;
  *(__m128i *)v64 = v9;
  v63 = v10;
  v11 = *(_QWORD *)(v5 + 88) == 0;
  v62 = 0;
  if ( v11 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, char *, void **))(v5 + 96))(v5 + 72, &v56, &v63);
  if ( v63 )
  {
    v64[0] = 0;
    qfree(v63);
  }
  if ( ptr )
  {
    v62.m128i_i64[0] = 0;
    qfree(ptr);
  }
LABEL_11:
  if ( v49 )
    operator delete(v49, v46 - (_QWORD)v49);
  for ( i = v52; v51 != i; i += 3 )
  {
    if ( *i )
      operator delete((void *)*i, i[2] - *i);
  }
  if ( v52 )
    operator delete(v52, v47 - (_QWORD)v52);
}

