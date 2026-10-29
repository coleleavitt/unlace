void __fastcall sub_22488E0(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // r13
  __int64 *i; // rbx
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 *v14; // r14
  __int64 v15; // r12
  __int64 v16; // r13
  void (__fastcall *v17)(__int64, __int64, __int64); // rax
  __int64 v18; // rsi
  __int64 v19; // rdi
  void (__fastcall *v20)(__int64, __int64, __int64); // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  void (__fastcall *v23)(__int64, __int64, __int64); // rax
  __int64 v24; // rsi
  __int64 v25; // rdi
  void *v26; // rdi
  void **v27; // rbx
  unsigned __int64 v28; // r12
  void *v29; // rdi
  _QWORD *v30; // rdx
  _QWORD *v31; // rdi
  _QWORD *v32; // rax
  void (__fastcall *v33)(__int64, __int64, __int64); // rax
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // [rsp+0h] [rbp-58h]
  unsigned __int64 v37; // [rsp+0h] [rbp-58h]
  __int64 v38; // [rsp+8h] [rbp-50h]
  __int64 v39; // [rsp+8h] [rbp-50h]
  __int64 v40; // [rsp+10h] [rbp-48h]
  __int64 v41; // [rsp+10h] [rbp-48h]
  __int64 v42; // [rsp+18h] [rbp-40h]
  __int64 v43; // [rsp+18h] [rbp-40h]

  *(_QWORD *)a1 = off_2BEB2D0;
  if ( &_pthread_key_create )
  {
    v3 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 176));
    if ( v3 )
      std::__throw_system_error(v3);
  }
  *(_BYTE *)(a1 + 344) = 0;
  if ( &_pthread_key_create )
    pthread_mutex_unlock((pthread_mutex_t *)(a1 + 176));
  std::condition_variable::notify_all((std::condition_variable *)(a1 + 216));
  do
    v4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 32));
  while ( v4 == 11 );
  if ( v4 == 35 )
    std::__throw_system_error(35);
  v9 = *(__int64 **)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 8); v9 != i; *(i - 1) = 0 )
  {
    v11 = *i++;
    sub_2297EA0(v11, a2, v5, v6, v7, v8, v36, v38, v40, v42);
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 32));
  operator delete(*(_QWORD *)(a1 + 320), 16LL * *(unsigned int *)(a1 + 336), 8);
  std::condition_variable::~condition_variable((std::condition_variable *)(a1 + 264));
  std::condition_variable::~condition_variable((std::condition_variable *)(a1 + 216));
  v12 = *(_QWORD *)(a1 + 152);
  v13 = *(_QWORD *)(a1 + 112);
  v41 = *(_QWORD *)(a1 + 128);
  v39 = *(_QWORD *)(a1 + 144);
  v14 = (__int64 *)(*(_QWORD *)(a1 + 136) + 8LL);
  v43 = *(_QWORD *)(a1 + 136);
  v37 = *(_QWORD *)(a1 + 168);
  if ( v37 > (unsigned __int64)v14 )
  {
LABEL_11:
    while ( 2 )
    {
      v15 = *v14;
      v16 = *v14 + 480;
      do
      {
        while ( 1 )
        {
          v17 = *(void (__fastcall **)(__int64, __int64, __int64))(v15 + 16);
          if ( !v17 )
            break;
          v18 = v15;
          v19 = v15;
          v15 += 40;
          v17(v19, v18, 3);
          if ( v16 == v15 )
          {
            if ( v37 > (unsigned __int64)++v14 )
              goto LABEL_11;
            goto LABEL_15;
          }
        }
        v15 += 40;
      }
      while ( v16 != v15 );
      if ( v37 > (unsigned __int64)++v14 )
        continue;
      break;
    }
  }
LABEL_15:
  if ( v37 == v43 )
  {
    while ( v39 != v13 )
    {
      while ( 1 )
      {
        v33 = *(void (__fastcall **)(__int64, __int64, __int64))(v13 + 16);
        if ( !v33 )
          break;
        v34 = v13;
        v35 = v13;
        v13 += 40;
        v33(v35, v34, 3);
        if ( v13 == v39 )
          goto LABEL_22;
      }
      v13 += 40;
    }
  }
  else
  {
    for ( ; v41 != v13; v13 += 40 )
    {
      while ( 1 )
      {
        v20 = *(void (__fastcall **)(__int64, __int64, __int64))(v13 + 16);
        if ( !v20 )
          break;
        v21 = v13;
        v22 = v13;
        v13 += 40;
        v20(v22, v21, 3);
        if ( v13 == v41 )
          goto LABEL_19;
      }
    }
LABEL_19:
    while ( v39 != v12 )
    {
      while ( 1 )
      {
        v23 = *(void (__fastcall **)(__int64, __int64, __int64))(v12 + 16);
        if ( !v23 )
          break;
        v24 = v12;
        v25 = v12;
        v12 += 40;
        v23(v25, v24, 3);
        if ( v39 == v12 )
          goto LABEL_22;
      }
      v12 += 40;
    }
  }
LABEL_22:
  v26 = *(void **)(a1 + 96);
  if ( v26 )
  {
    v27 = *(void ***)(a1 + 136);
    v28 = *(_QWORD *)(a1 + 168) + 8LL;
    if ( v28 > (unsigned __int64)v27 )
    {
      do
      {
        v29 = *v27++;
        operator delete(v29);
      }
      while ( v28 > (unsigned __int64)v27 );
      v26 = *(void **)(a1 + 96);
    }
    operator delete(v26);
  }
  v30 = *(_QWORD **)(a1 + 16);
  v31 = *(_QWORD **)(a1 + 8);
  if ( v30 != v31 )
  {
    if ( *v31 )
LABEL_47:
      std::terminate();
    v32 = *(_QWORD **)(a1 + 8);
    while ( 1 )
    {
      if ( v30 == ++v32 )
        goto LABEL_32;
      if ( *v32 )
        goto LABEL_47;
    }
  }
  if ( v30 )
LABEL_32:
    operator delete(v31);
}
