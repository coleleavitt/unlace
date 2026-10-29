unsigned __int64 __fastcall sub_43EA20(__int64 a1, char a2, unsigned int **a3)
{
  pthread_rwlock_t *v3; // r14
  _BYTE *v4; // rax
  bool v5; // zf
  int v7; // eax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rcx
  void *v15; // r8
  __int64 v16; // r15
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rdx
  const char *v21; // rax
  size_t v22; // r12
  __int64 v23; // r15
  unsigned int *v24; // [rsp+10h] [rbp-B0h]
  unsigned int *i; // [rsp+18h] [rbp-A8h]
  char v27; // [rsp+27h] [rbp-99h] BYREF
  __int64 v28; // [rsp+28h] [rbp-98h] BYREF
  void *src; // [rsp+30h] [rbp-90h] BYREF
  __int128 v30; // [rsp+38h] [rbp-88h]
  void *ptr; // [rsp+50h] [rbp-70h] BYREF
  __int128 v32; // [rsp+58h] [rbp-68h]
  void *v33; // [rsp+68h] [rbp-58h]
  __int64 v34; // [rsp+70h] [rbp-50h]
  __int64 v35; // [rsp+78h] [rbp-48h]
  unsigned __int64 v36; // [rsp+88h] [rbp-38h]

  v3 = *(pthread_rwlock_t **)(a1 + 8);
  v36 = __readfsqword(0x28u);
  v30 = 0;
  src = nullptr;
  if ( &_pthread_key_create )
  {
    do
      v7 = pthread_rwlock_rdlock(v3);
    while ( v7 == 11 );
    if ( v7 == 35 )
      std::__throw_system_error(35);
  }
  v4 = *(_BYTE **)(a1 + 112);
  if ( v4 && *v4 || *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) != *(_QWORD *)(a1 + 24) || !a2 )
  {
    if ( &_pthread_key_create )
      pthread_rwlock_unlock(v3);
    ptr = nullptr;
    v32 = 0;
    if ( (_QWORD)v30 )
    {
      ptr = (void *)qalloc_or_throw(8 * v30);
      *((_QWORD *)&v32 + 1) = v30;
      memcpy(ptr, src, 8 * v30);
      *(_QWORD *)&v32 = v30;
    }
    v5 = *(_QWORD *)(a1 + 96) == 0;
    v27 = 0;
    if ( v5 )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, char *, void **))(a1 + 104))(a1 + 80, &v27, &ptr);
    if ( ptr )
    {
      *(_QWORD *)&v32 = 0;
      qfree(ptr);
    }
    if ( src )
    {
      *(_QWORD *)&v30 = 0;
      qfree(src);
    }
  }
  else
  {
    v24 = a3[1];
    for ( i = *a3; v24 != i; *(_QWORD *)&v30 = v30 + 1 )
    {
      v8 = *i;
      v9 = *(_QWORD **)a1;
      v35 = 0;
      v34 = *(_QWORD *)(v9[14] + 8 * v8);
      v10 = v9[26];
      v11 = *(_QWORD *)(v10 + 8LL * *(unsigned int *)(v9[30] + 4 * v8));
      v12 = v11 + v9[20];
      ptr = (void *)(*(_QWORD *)(v10 + 8LL * (unsigned int)(*(_DWORD *)(v9[30] + 4 * v8) + 1)) + ~v11);
      *(_QWORD *)&v32 = v12;
      v13 = v9[39];
      v14 = *(_QWORD *)(v13 + 8LL * *(unsigned int *)(v9[43] + 4 * v8));
      v15 = (void *)(v14 + v9[33]);
      *((_QWORD *)&v32 + 1) = *(_QWORD *)(v13 + 8LL * (unsigned int)(*(_DWORD *)(v9[43] + 4 * v8) + 1)) + ~v14;
      v33 = v15;
      LOWORD(v35) = *(_WORD *)(v9[17] + 2 * v8);
      v16 = (*(__int64 (__fastcall **)(void **))(a1 + 72))(&ptr);
      sub_439190(
        v16,
        (*(_QWORD *)(a1 + 48) == 0) + *(_QWORD *)(a1 + 48) - 1LL,
        *(_QWORD *)(*(_QWORD *)(a1 + 64) - 24LL),
        *(char **)(a1 + 64),
        (__int64)ptr,
        v17,
        *((size_t *)&v32 + 1),
        v33);
      v18 = v30;
      v28 = v16;
      v19 = src;
      if ( *((_QWORD *)&v30 + 1) < (unsigned __int64)(v30 + 1) )
      {
        src = (void *)qvector_reserve(&src, src, v30 + 1, 8);
        v19 = src;
        v18 = v30;
      }
      v19[v18] = v16;
      ++i;
    }
    if ( &_pthread_key_create )
      pthread_rwlock_unlock(v3);
    v20 = *(_QWORD *)(a1 + 48);
    v21 = haystack;
    if ( v20 )
    {
      v21 = *(const char **)(a1 + 40);
      --v20;
    }
    sub_43BE20((__int64)&src, v20, (__int64)v21, *(int *)(a1 + 32));
    ptr = nullptr;
    v32 = 0;
    if ( (_QWORD)v30 )
    {
      v22 = 8 * v30;
      v23 = v30;
      ptr = (void *)qalloc_or_throw(8 * v30);
      *((_QWORD *)&v32 + 1) = v23;
      memcpy(ptr, src, v22);
      *(_QWORD *)&v32 = v23;
    }
    v5 = *(_QWORD *)(a1 + 96) == 0;
    LOBYTE(v28) = 1;
    if ( v5 )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, __int64 *, void **))(a1 + 104))(a1 + 80, &v28, &ptr);
    if ( ptr )
    {
      *(_QWORD *)&v32 = 0;
      qfree(ptr);
    }
    if ( src )
    {
      *(_QWORD *)&v30 = 0;
      qfree(src);
    }
  }
  return v36 - __readfsqword(0x28u);
}
