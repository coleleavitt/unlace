void __fastcall sub_4410F0(__int64 *a1, char *a2, __int64 a3)
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
  __int64 v20; // rcx
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
  void *v31; // rcx
  size_t v32; // rbp
  void *v33; // rdi
  size_t v34; // rdx
  void *v35; // rdx
  void *v36; // rax
  void *v37; // rsi
  __int64 v38; // rdx
  const char *v39; // rax
  __m128i v40; // xmm0
  void *v41; // rax
  __int64 *v42; // [rsp+8h] [rbp-100h]
  __int64 v43; // [rsp+18h] [rbp-F0h]
  __int64 v44; // [rsp+18h] [rbp-F0h]
  unsigned int *i; // [rsp+20h] [rbp-E8h]
  __int64 v46; // [rsp+28h] [rbp-E0h]
  unsigned int *v47; // [rsp+30h] [rbp-D8h]
  void *src; // [rsp+38h] [rbp-D0h]
  void *srca; // [rsp+38h] [rbp-D0h]
  __int64 v50; // [rsp+40h] [rbp-C8h]
  __int64 v51; // [rsp+48h] [rbp-C0h]
  char v52; // [rsp+6Eh] [rbp-9Ah] BYREF
  char v53; // [rsp+6Fh] [rbp-99h] BYREF
  unsigned int *v54; // [rsp+70h] [rbp-98h] BYREF
  unsigned int *v55; // [rsp+78h] [rbp-90h]
  __int64 v56; // [rsp+80h] [rbp-88h]
  void *v57; // [rsp+90h] [rbp-78h] BYREF
  __m128i v58; // [rsp+98h] [rbp-70h] BYREF
  void *ptr; // [rsp+B0h] [rbp-58h] BYREF
  __m128i v60; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v61; // [rsp+C8h] [rbp-40h]

  v3 = *(__int64 **)a3;
  v4 = *(_QWORD *)(a3 + 16);
  v61 = __readfsqword(0x28u);
  v5 = *a1;
  *(_QWORD *)(a3 + 16) = 0;
  v6 = *(__int64 **)(a3 + 8);
  *(_OWORD *)a3 = 0;
  v7 = *a2;
  v42 = v3;
  v50 = v4;
  sub_43E580((__int64)&v54, v3, v3 + 3);
  v57 = nullptr;
  v8 = *(pthread_rwlock_t **)(v5 + 72);
  v58 = 0;
  v47 = v54;
  v51 = v56;
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
    v10 = _mm_loadu_si128(&v58);
    v11 = v57;
    v52 = 0;
    v57 = nullptr;
    v60 = v10;
    ptr = v11;
    v58 = 0;
    if ( !*(_QWORD *)(v5 + 16) )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, char *, void **))(v5 + 24))(v5, &v52, &ptr);
    if ( ptr )
    {
      v60.m128i_i64[0] = 0;
      qfree(ptr);
    }
    if ( v57 )
    {
      v58.m128i_i64[0] = 0;
      qfree(v57);
    }
  }
  else
  {
    v14 = v47;
    v46 = (*(_QWORD *)(v5 + 56) == 0) + *(_QWORD *)(v5 + 56) - 1LL;
    for ( i = v55; i != v14; v14 += 4 )
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
          src = (void *)(v28[45] + v17);
          v18 = ~v17;
        }
        else
        {
          v15 = v28[25];
          v16 = (unsigned int)(*(_DWORD *)(v28[29] + 4 * v29) + 1);
          v30 = *(_QWORD *)(v15 + 8LL * *(unsigned int *)(v28[29] + 4 * v29));
          v31 = (void *)(v28[19] + v30);
          v18 = ~v30;
          src = v31;
        }
        v32 = *(_QWORD *)(v15 + 8 * v16) + v18;
        v43 = *v14;
        v19 = (_DWORD *)operator new(0x50u);
        v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 88) + 104LL) + 8 * v43);
        v60 = 0;
        ptr = nullptr;
        v44 = v20;
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
          v60.m128i_i64[0] = v34;
          memmove(v33, src, v32);
          *((_BYTE *)ptr + v32) = 0;
          v35 = (void *)v60.m128i_i64[0];
          *(_QWORD *)v19 = &off_2B286C8;
          *((_QWORD *)v19 + 1) = 0;
          *((_OWORD *)v19 + 1) = 0;
          if ( v35 )
          {
            srca = v35;
            v36 = (void *)qalloc_or_throw(v35);
            *((_QWORD *)v19 + 1) = v36;
            v37 = ptr;
            *((_QWORD *)v19 + 3) = srca;
            memcpy(v36, v37, (size_t)srca);
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
        *(_QWORD *)v19 = &off_2B28758;
        *((_QWORD *)v19 + 5) = 0;
        *((_QWORD *)v19 + 9) = v44;
        *((_OWORD *)v19 + 3) = 0;
        if ( v21 )
        {
          v60.m128i_i64[0] = 0;
          qfree(v21);
        }
        if ( v46 < 0 )
          v22 = (double)(int)(v46 & 1 | ((unsigned __int64)v46 >> 1))
              + (double)(int)(v46 & 1 | ((unsigned __int64)v46 >> 1));
        else
          v22 = (double)(int)v46;
        if ( (v32 & 0x8000000000000000LL) != 0LL )
          v23 = (double)(int)(v32 & 1 | (v32 >> 1)) + (double)(int)(v32 & 1 | (v32 >> 1));
        else
          v23 = (double)(int)v32;
        v24 = round(v22 / v23 * 100.0);
        v25 = v58.m128i_u64[1];
        ptr = v19;
        v26 = v57;
        v19[16] = (int)v24;
        v27 = v58.m128i_i64[0];
        if ( v25 < v58.m128i_i64[0] + 1 )
        {
          v57 = (void *)qvector_reserve(&v57, v26, v58.m128i_i64[0] + 1, 8);
          v26 = v57;
          v27 = v58.m128i_i64[0];
        }
        v26[v27] = v19;
        ++v58.m128i_i64[0];
      }
    }
    if ( &_pthread_key_create )
      pthread_rwlock_unlock(v8);
    v38 = *(_QWORD *)(v5 + 56);
    v39 = haystack;
    if ( v38 )
    {
      v39 = *(const char **)(v5 + 48);
      --v38;
    }
    sub_43BE20((__int64)&v57, v38, (__int64)v39, *(int *)(v5 + 104));
    v40 = _mm_loadu_si128(&v58);
    v41 = v57;
    v53 = 1;
    v57 = nullptr;
    v60 = v40;
    ptr = v41;
    v58 = 0;
    if ( !*(_QWORD *)(v5 + 16) )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, char *, void **))(v5 + 24))(v5, &v53, &ptr);
    if ( ptr )
    {
      v60.m128i_i64[0] = 0;
      qfree(ptr);
    }
    if ( v57 )
    {
      v58.m128i_i64[0] = 0;
      qfree(v57);
    }
  }
  if ( v47 )
    operator delete(v47, v51 - (_QWORD)v47);
  for ( j = v42; v6 != j; j += 3 )
  {
    if ( *j )
      operator delete((void *)*j, j[2] - *j);
  }
  if ( v42 )
    operator delete(v42, v50 - (_QWORD)v42);
}
