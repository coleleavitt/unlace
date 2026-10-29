void __fastcall sub_42D350(__int64 *a1, char *a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r12
  __int64 *v6; // r14
  char v7; // bl
  pthread_rwlock_t *v8; // r15
  _BYTE *v9; // rax
  __m128i v10; // xmm0
  void *v11; // rax
  __int64 *j; // rbx
  int v13; // eax
  unsigned int *v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rbp
  __int64 v18; // rbp
  _DWORD *v19; // rbx
  int v20; // ecx
  void *v21; // rdi
  double v22; // xmm0_8
  double v23; // xmm1_8
  double v24; // xmm0_8
  unsigned __int64 v25; // rdx
  _QWORD *v26; // rsi
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbp
  const char *v31; // rcx
  size_t v32; // rbp
  void *v33; // rdi
  size_t v34; // rdx
  const char *v35; // rsi
  void *v36; // rdx
  void *v37; // rax
  void *v38; // rsi
  __int64 v39; // rdx
  const char *v40; // rax
  __m128i v41; // xmm0
  void *v42; // rax
  __int64 *v43; // [rsp+8h] [rbp-100h]
  __int64 v44; // [rsp+18h] [rbp-F0h]
  int v45; // [rsp+18h] [rbp-F0h]
  unsigned int *i; // [rsp+20h] [rbp-E8h]
  __int64 v47; // [rsp+28h] [rbp-E0h]
  unsigned int *v48; // [rsp+30h] [rbp-D8h]
  const char *src; // [rsp+38h] [rbp-D0h]
  void *srca; // [rsp+38h] [rbp-D0h]
  __int64 v51; // [rsp+40h] [rbp-C8h]
  __int64 v52; // [rsp+48h] [rbp-C0h]
  char v53; // [rsp+6Eh] [rbp-9Ah] BYREF
  char v54; // [rsp+6Fh] [rbp-99h] BYREF
  unsigned int *v55; // [rsp+70h] [rbp-98h] BYREF
  unsigned int *v56; // [rsp+78h] [rbp-90h]
  __int64 v57; // [rsp+80h] [rbp-88h]
  void *v58; // [rsp+90h] [rbp-78h] BYREF
  __m128i v59; // [rsp+98h] [rbp-70h] BYREF
  void *ptr; // [rsp+B0h] [rbp-58h] BYREF
  __m128i v61; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v62; // [rsp+C8h] [rbp-40h]

  v3 = *(__int64 **)a3;
  v4 = *(_QWORD *)(a3 + 16);
  v62 = __readfsqword(0x28u);
  v5 = *a1;
  *(_QWORD *)(a3 + 16) = 0;
  v6 = *(__int64 **)(a3 + 8);
  *(_OWORD *)a3 = 0;
  v7 = *a2;
  v43 = v3;
  v51 = v4;
  sub_42A680((__int64)&v55, v3, v3 + 3);
  v58 = nullptr;
  v8 = *(pthread_rwlock_t **)(v5 + 72);
  v59 = 0;
  v48 = v55;
  v52 = v57;
  if ( &_pthread_key_create )
  {
    do
      v13 = pthread_rwlock_rdlock(v8);
    while ( v13 == 11 );
    if ( v13 == 35 )
      std::__throw_system_error(35);
  }
  v9 = *(_BYTE **)(v5 + 32);
  if ( v9 && *v9 || *(_QWORD *)(*(_QWORD *)(v5 + 72) + 56LL) != *(_QWORD *)(v5 + 96) || !v7 )
  {
    if ( &_pthread_key_create )
      pthread_rwlock_unlock(v8);
    v10 = _mm_loadu_si128(&v59);
    v11 = v58;
    v53 = 0;
    v58 = nullptr;
    v61 = v10;
    ptr = v11;
    v59 = 0;
    if ( !*(_QWORD *)(v5 + 16) )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, char *, void **))(v5 + 24))(v5, &v53, &ptr);
    if ( ptr )
    {
      v61.m128i_i64[0] = 0;
      qfree(ptr);
    }
    if ( v58 )
    {
      v59.m128i_i64[0] = 0;
      qfree(v58);
    }
  }
  else
  {
    v14 = v48;
    v47 = (*(_QWORD *)(v5 + 56) == 0) + *(_QWORD *)(v5 + 56) - 1LL;
    for ( i = v56; i != v14; v14 += 4 )
    {
      v28 = *(_QWORD **)(v5 + 88);
      v29 = *v14;
      if ( (*(_BYTE *)(v28[16] + 4 * v29) & 1) == 0 )
      {
        if ( *((_BYTE *)v14 + 8) )
        {
          v15 = v28[51];
          v16 = (unsigned int)(*(_DWORD *)(v28[55] + 4 * v29) + 1);
          v17 = *(_QWORD *)(v15 + 8LL * *(unsigned int *)(v28[55] + 4 * v29));
          src = (const char *)(v28[45] + v17);
          v18 = ~v17;
        }
        else
        {
          v15 = v28[25];
          v16 = (unsigned int)(*(_DWORD *)(v28[29] + 4 * v29) + 1);
          v30 = *(_QWORD *)(v15 + 8LL * *(unsigned int *)(v28[29] + 4 * v29));
          v31 = (const char *)(v28[19] + v30);
          v18 = ~v30;
          src = v31;
        }
        v32 = *(_QWORD *)(v15 + 8 * v16) + v18;
        v44 = *v14;
        v19 = (_DWORD *)operator new(0x48u);
        v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 88) + 104LL) + 4 * v44);
        v61 = 0;
        ptr = nullptr;
        v45 = v20;
        if ( v32 )
        {
          v33 = nullptr;
          v34 = v32 + 1;
          if ( v32 != -1 )
          {
            ptr = (void *)qvector_reserve(&ptr, 0, v34, 1);
            v34 = v32 + 1;
            v33 = ptr;
          }
          v35 = src;
          v61.m128i_i64[0] = v34;
          memmove(v33, src, v32);
          *((_BYTE *)ptr + v32) = 0;
          v36 = (void *)v61.m128i_i64[0];
          *(_QWORD *)v19 = &off_2AFE708;
          *((_QWORD *)v19 + 1) = 0;
          *((_OWORD *)v19 + 1) = 0;
          if ( v36 )
          {
            srca = v36;
            v37 = (void *)qalloc_or_throw(v36, v35);
            *((_QWORD *)v19 + 1) = v37;
            v38 = ptr;
            *((_QWORD *)v19 + 3) = srca;
            memcpy(v37, v38, (size_t)srca);
            *((_QWORD *)v19 + 2) = srca;
          }
        }
        else
        {
          *((_QWORD *)v19 + 1) = 0;
          *((_OWORD *)v19 + 1) = 0;
        }
        v21 = ptr;
        *((_QWORD *)v19 + 4) = 3;
        *(_QWORD *)v19 = &off_2AFE798;
        *((_QWORD *)v19 + 5) = 0;
        v19[17] = v45;
        *((_OWORD *)v19 + 3) = 0;
        if ( v21 )
        {
          v61.m128i_i64[0] = 0;
          qfree(v21);
        }
        if ( v47 < 0 )
          v22 = (double)(int)(v47 & 1 | ((unsigned __int64)v47 >> 1))
              + (double)(int)(v47 & 1 | ((unsigned __int64)v47 >> 1));
        else
          v22 = (double)(int)v47;
        if ( (v32 & 0x8000000000000000LL) != 0LL )
          v23 = (double)(int)(v32 & 1 | (v32 >> 1)) + (double)(int)(v32 & 1 | (v32 >> 1));
        else
          v23 = (double)(int)v32;
        v24 = round(v22 / v23 * 100.0);
        v25 = v59.m128i_u64[1];
        ptr = v19;
        v26 = v58;
        v19[16] = (int)v24;
        v27 = v59.m128i_i64[0];
        if ( v25 < v59.m128i_i64[0] + 1 )
        {
          v58 = (void *)qvector_reserve(&v58, v26, v59.m128i_i64[0] + 1, 8);
          v26 = v58;
          v27 = v59.m128i_i64[0];
        }
        v26[v27] = v19;
        ++v59.m128i_i64[0];
      }
    }
    if ( &_pthread_key_create )
      pthread_rwlock_unlock(v8);
    v39 = *(_QWORD *)(v5 + 56);
    v40 = haystack;
    if ( v39 )
    {
      v40 = *(const char **)(v5 + 48);
      --v39;
    }
    sub_427F20((__int64)&v58, v39, (__int64)v40, *(int *)(v5 + 104));
    v41 = _mm_loadu_si128(&v59);
    v42 = v58;
    v54 = 1;
    v58 = nullptr;
    v61 = v41;
    ptr = v42;
    v59 = 0;
    if ( !*(_QWORD *)(v5 + 16) )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, char *, void **))(v5 + 24))(v5, &v54, &ptr);
    if ( ptr )
    {
      v61.m128i_i64[0] = 0;
      qfree(ptr);
    }
    if ( v58 )
    {
      v59.m128i_i64[0] = 0;
      qfree(v58);
    }
  }
  if ( v48 )
    operator delete(v48, v52 - (_QWORD)v48);
  for ( j = v43; v6 != j; j += 3 )
  {
    if ( *j )
      operator delete((void *)*j, j[2] - *j);
  }
  if ( v43 )
    operator delete(v43, v51 - (_QWORD)v43);
}

