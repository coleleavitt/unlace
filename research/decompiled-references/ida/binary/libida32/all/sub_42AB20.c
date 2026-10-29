unsigned __int64 __fastcall sub_42AB20(__int64 a1, const char *a2, unsigned int **a3)
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
  const char *v22; // rsi
  size_t v23; // r12
  __int64 v24; // r15
  unsigned int *v25; // [rsp+10h] [rbp-A0h]
  unsigned int *i; // [rsp+18h] [rbp-98h]
  char v28; // [rsp+27h] [rbp-89h] BYREF
  __int64 v29; // [rsp+28h] [rbp-88h] BYREF
  void *src; // [rsp+30h] [rbp-80h] BYREF
  __int128 v31; // [rsp+38h] [rbp-78h]
  void *ptr; // [rsp+50h] [rbp-60h] BYREF
  __int128 v33; // [rsp+58h] [rbp-58h]
  void *v34; // [rsp+68h] [rbp-48h]
  int v35; // [rsp+70h] [rbp-40h]
  __int16 v36; // [rsp+74h] [rbp-3Ch]
  __int16 v37; // [rsp+76h] [rbp-3Ah]
  unsigned __int64 v38; // [rsp+78h] [rbp-38h]

  v3 = *(pthread_rwlock_t **)(a1 + 8);
  v38 = __readfsqword(0x28u);
  src = nullptr;
  v31 = 0;
  if ( &_pthread_key_create )
  {
    do
      v7 = pthread_rwlock_rdlock(v3);
    while ( v7 == 11 );
    if ( v7 == 35 )
      std::__throw_system_error(35);
  }
  v4 = *(_BYTE **)(a1 + 112);
  if ( v4 && *v4 || *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) != *(_QWORD *)(a1 + 24) || !(_BYTE)a2 )
  {
    if ( &_pthread_key_create )
      pthread_rwlock_unlock(v3);
    ptr = nullptr;
    v33 = 0;
    if ( (_QWORD)v31 )
    {
      ptr = (void *)qalloc_or_throw(8 * v31, a2);
      *((_QWORD *)&v33 + 1) = v31;
      memcpy(ptr, src, 8 * v31);
      *(_QWORD *)&v33 = v31;
    }
    v5 = *(_QWORD *)(a1 + 96) == 0;
    v28 = 0;
    if ( v5 )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, char *, void **))(a1 + 104))(a1 + 80, &v28, &ptr);
    if ( ptr )
    {
      *(_QWORD *)&v33 = 0;
      qfree(ptr);
    }
    if ( src )
    {
      *(_QWORD *)&v31 = 0;
      qfree(src);
    }
  }
  else
  {
    v25 = a3[1];
    for ( i = *a3; v25 != i; *(_QWORD *)&v31 = v31 + 1 )
    {
      v8 = *i;
      v9 = *(_QWORD **)a1;
      v37 = 0;
      v35 = *(_DWORD *)(v9[14] + 4 * v8);
      v10 = v9[26];
      v11 = *(_QWORD *)(v10 + 8LL * *(unsigned int *)(v9[30] + 4 * v8));
      v12 = v11 + v9[20];
      ptr = (void *)(*(_QWORD *)(v10 + 8LL * (unsigned int)(*(_DWORD *)(v9[30] + 4 * v8) + 1)) + ~v11);
      *(_QWORD *)&v33 = v12;
      v13 = v9[39];
      v14 = *(_QWORD *)(v13 + 8LL * *(unsigned int *)(v9[43] + 4 * v8));
      v15 = (void *)(v14 + v9[33]);
      *((_QWORD *)&v33 + 1) = *(_QWORD *)(v13 + 8LL * (unsigned int)(*(_DWORD *)(v9[43] + 4 * v8) + 1)) + ~v14;
      v34 = v15;
      v36 = *(_WORD *)(v9[17] + 2 * v8);
      v16 = (*(__int64 (__fastcall **)(void **))(a1 + 72))(&ptr);
      sub_425270(
        v16,
        (*(_QWORD *)(a1 + 48) == 0) + *(_QWORD *)(a1 + 48) - 1LL,
        *(_QWORD *)(*(_QWORD *)(a1 + 64) - 24LL),
        *(char **)(a1 + 64),
        (__int64)ptr,
        v17,
        *((size_t *)&v33 + 1),
        v34);
      v18 = v31;
      v29 = v16;
      v19 = src;
      if ( *((_QWORD *)&v31 + 1) < (unsigned __int64)(v31 + 1) )
      {
        src = (void *)qvector_reserve(&src, src, v31 + 1, 8);
        v19 = src;
        v18 = v31;
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
    v22 = (const char *)v20;
    sub_427F20((__int64)&src, v20, (__int64)v21, *(int *)(a1 + 32));
    ptr = nullptr;
    v33 = 0;
    if ( (_QWORD)v31 )
    {
      v23 = 8 * v31;
      v24 = v31;
      ptr = (void *)qalloc_or_throw(8 * v31, v22);
      *((_QWORD *)&v33 + 1) = v24;
      memcpy(ptr, src, v23);
      *(_QWORD *)&v33 = v24;
    }
    v5 = *(_QWORD *)(a1 + 96) == 0;
    LOBYTE(v29) = 1;
    if ( v5 )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, __int64 *, void **))(a1 + 104))(a1 + 80, &v29, &ptr);
    if ( ptr )
    {
      *(_QWORD *)&v33 = 0;
      qfree(ptr);
    }
    if ( src )
    {
      *(_QWORD *)&v31 = 0;
      qfree(src);
    }
  }
  return v38 - __readfsqword(0x28u);
}

