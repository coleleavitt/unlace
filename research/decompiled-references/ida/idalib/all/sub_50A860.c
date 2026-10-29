_OWORD *__fastcall sub_50A860(_OWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  pthread_rwlock_t *v3; // rbx
  _BYTE *v4; // rdx
  int v5; // eax
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __m128i v12; // xmm0
  void **v13; // r12
  void **v14; // rbx
  __int64 v15; // rdx
  __m128i v16; // xmm0
  void **v17; // r12
  bool v19; // [rsp+1Eh] [rbp-72h] BYREF
  bool v20; // [rsp+1Fh] [rbp-71h] BYREF
  void *v21[2]; // [rsp+20h] [rbp-70h] BYREF
  __int64 v22; // [rsp+30h] [rbp-60h]
  void *v23[2]; // [rsp+40h] [rbp-50h] BYREF
  __int64 v24; // [rsp+50h] [rbp-40h]
  unsigned __int64 v25; // [rsp+58h] [rbp-38h]

  v2 = a2[1];
  v25 = __readfsqword(0x28u);
  v22 = 0;
  *(_OWORD *)v21 = 0;
  v3 = *(pthread_rwlock_t **)v2;
  if ( &_pthread_key_create )
  {
    do
      v5 = pthread_rwlock_rdlock(v3);
    while ( v5 == 11 );
    if ( v5 == 35 )
      std::__throw_system_error(35);
    v2 = a2[1];
  }
  v4 = *(_BYTE **)(v2 + 32);
  if ( v4 )
  {
    if ( *v4 )
    {
      if ( !&_pthread_key_create )
        goto LABEL_13;
      goto LABEL_12;
    }
    v2 = a2[1];
  }
  if ( *(_QWORD *)(*(_QWORD *)v2 + 56LL) != *(_QWORD *)(v2 + 120) )
  {
    if ( !&_pthread_key_create )
    {
LABEL_14:
      *(_BYTE *)(v2 + 88) = 1;
      if ( _InterlockedSub64((volatile signed __int64 *)(v2 + 80), 1u) )
        goto LABEL_15;
      v15 = *(_QWORD *)(v2 + 112);
      v16 = _mm_loadu_si128((const __m128i *)(v2 + 96));
      *(_QWORD *)(v2 + 112) = 0;
      v24 = v15;
      *(__m128i *)v23 = v16;
      *(_OWORD *)(v2 + 96) = 0;
      v20 = *(_BYTE *)(v2 + 88) == 0;
      if ( !*(_QWORD *)(v2 + 64) )
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(__int64, bool *, void **))(v2 + 72))(v2 + 48, &v20, v23);
      v17 = (void **)v23[1];
      v14 = (void **)v23[0];
      if ( v23[1] == v23[0] )
        goto LABEL_29;
      do
      {
        if ( *v14 )
          operator delete(*v14, (_BYTE *)v14[2] - (_BYTE *)*v14);
        v14 += 3;
      }
      while ( v17 != v14 );
      goto LABEL_28;
    }
LABEL_12:
    pthread_rwlock_unlock(v3);
LABEL_13:
    v2 = a2[1];
    goto LABEL_14;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, void **, _QWORD, _QWORD))(*(_QWORD *)*a2 + 16LL))(
    *a2,
    *(_QWORD *)(v2 + 16),
    *(_QWORD *)(*(_QWORD *)(v2 + 24) - 24LL),
    *(_QWORD *)(v2 + 24),
    v21,
    a2[4],
    a2[5]);
  if ( &_pthread_key_create )
    pthread_rwlock_unlock(v3);
  v7 = a2[1];
  v8 = *(_QWORD *)(v7 + 96) + 24LL * a2[3];
  v9 = *(void **)v8;
  v10 = *(_QWORD *)(v8 + 16);
  *(void **)v8 = v21[0];
  *(void **)(v8 + 8) = v21[1];
  *(_OWORD *)v21 = 0;
  *(_QWORD *)(v8 + 16) = v22;
  v22 = 0;
  if ( v9 )
    operator delete(v9, v10 - (_QWORD)v9);
  if ( !_InterlockedSub64((volatile signed __int64 *)(v7 + 80), 1u) )
  {
    v11 = *(_QWORD *)(v7 + 112);
    v12 = _mm_loadu_si128((const __m128i *)(v7 + 96));
    *(_QWORD *)(v7 + 112) = 0;
    v24 = v11;
    *(__m128i *)v23 = v12;
    *(_OWORD *)(v7 + 96) = 0;
    v19 = *(_BYTE *)(v7 + 88) == 0;
    if ( !*(_QWORD *)(v7 + 64) )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, bool *, void **))(v7 + 72))(v7 + 48, &v19, v23);
    v13 = (void **)v23[1];
    v14 = (void **)v23[0];
    if ( v23[1] == v23[0] )
      goto LABEL_29;
    do
    {
      if ( *v14 )
        operator delete(*v14, (_BYTE *)v14[2] - (_BYTE *)*v14);
      v14 += 3;
    }
    while ( v13 != v14 );
LABEL_28:
    v14 = (void **)v23[0];
LABEL_29:
    if ( v14 )
      operator delete(v14, v24 - (_QWORD)v14);
  }
LABEL_15:
  if ( v21[0] )
    operator delete(v21[0], v22 - (unsigned __int64)v21[0]);
  *a1 = 0;
  *(_BYTE *)a1 = 1;
  a1[1] = 0;
  return a1;
}
