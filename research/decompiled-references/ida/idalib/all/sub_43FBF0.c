unsigned __int64 __fastcall sub_43FBF0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  _BYTE *v9; // r13
  char *v10; // rax
  __int64 v11; // rax
  const char *v12; // r12
  __int64 v13; // rax
  const char *v14; // rdx
  pthread_rwlock_t *v15; // r15
  __int64 v16; // r12
  const char *v17; // r13
  _QWORD *v18; // rax
  void *v19; // rdi
  bool v21; // zf
  signed __int64 v22; // rax
  signed __int64 v23; // r12
  size_t v24; // r14
  char *v25; // rax
  pthread_rwlock_t *v26; // r15
  const char *v27; // r13
  __int64 v28; // r12
  _QWORD *v29; // rax
  void *src[2]; // [rsp+0h] [rbp-78h] BYREF
  pthread_rwlock_t *v31; // [rsp+10h] [rbp-68h]
  char v32; // [rsp+18h] [rbp-60h]
  void *dest; // [rsp+20h] [rbp-58h] BYREF
  __int128 v34; // [rsp+28h] [rbp-50h]
  unsigned __int64 v35; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 1672);
  v35 = __readfsqword(0x28u);
  *(__m128i *)src = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + *(unsigned int *)(a2 + 4)));
  v6 = (_QWORD *)sub_433DB0(v4, 1u);
  v7 = unpack_dq(src);
  dest = nullptr;
  v8 = v7;
  v34 = 0;
  if ( !a3 )
  {
    v9 = src[0];
    v10 = (char *)src[0];
    do
    {
      if ( v10 >= src[1] )
        goto LABEL_5;
      ++v10;
    }
    while ( *(v10 - 1) );
    src[0] = v10;
    if ( !v9 )
    {
LABEL_5:
      v11 = 0;
      v12 = haystack;
      goto LABEL_22;
    }
    v22 = v10 - v9;
    v21 = v22 == 0;
    v23 = v22;
    v24 = v22 - 1;
    v25 = nullptr;
    if ( !v21 )
    {
      v25 = (char *)qvector_reserve(&dest, 0, v23, 1);
      dest = v25;
    }
    *(_QWORD *)&v34 = v23;
    v25[v23 - 1] = 0;
    v12 = haystack;
    memmove(dest, v9, v24);
    v11 = v34;
    if ( (_QWORD)v34 )
    {
      v12 = (const char *)dest;
      v11 = v34 - 1;
    }
LABEL_22:
    v26 = (pthread_rwlock_t *)v6[1];
    v27 = v12;
    v32 = 0;
    v28 = v11;
    v31 = v26;
    if ( !v26 )
      std::__throw_system_error(1);
    if ( &_pthread_key_create && pthread_rwlock_wrlock(v26) == 35 )
      std::__throw_system_error(35);
    v32 = 1;
    v29 = sub_439830(v6 + 7, v8);
    if ( v29 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, const char *))(*v6 + 56LL))(
        v6,
        *((unsigned int *)v29 + 4),
        v28,
        v27);
      ++*(_QWORD *)(v6[1] + 56LL);
      if ( !&_pthread_key_create )
        goto LABEL_28;
    }
    else if ( !&_pthread_key_create )
    {
LABEL_28:
      v19 = dest;
      if ( !dest )
        return v35 - __readfsqword(0x28u);
      goto LABEL_15;
    }
    pthread_rwlock_unlock(v26);
    goto LABEL_28;
  }
  get_func_name(&dest, v7);
  v13 = v34;
  v14 = haystack;
  if ( (_QWORD)v34 )
  {
    v14 = (const char *)dest;
    v13 = v34 - 1;
  }
  v15 = (pthread_rwlock_t *)v6[1];
  v32 = 0;
  v16 = v13;
  v17 = v14;
  v31 = v15;
  if ( !v15 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(v15) == 35 )
    std::__throw_system_error(35);
  v32 = 1;
  v18 = sub_439830(v6 + 7, v8);
  if ( v18 )
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, const char *))(*v6 + 56LL))(
      v6,
      *((unsigned int *)v18 + 4),
      v16,
      v17);
    ++*(_QWORD *)(v6[1] + 56LL);
    if ( !&_pthread_key_create )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( &_pthread_key_create )
LABEL_13:
    pthread_rwlock_unlock(v15);
LABEL_14:
  v19 = dest;
  if ( dest )
  {
LABEL_15:
    *(_QWORD *)&v34 = 0;
    qfree(v19);
  }
  return v35 - __readfsqword(0x28u);
}
