int __fastcall sub_43F9C0(_QWORD *a1, __int64 a2, const char *a3)
{
  pthread_rwlock_t *v3; // r14
  __int64 v6; // r13
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  __int64 v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r8
  void (__fastcall *v16)(_QWORD *, _QWORD, size_t, const char *); // r13
  size_t v17; // rax
  __int64 v18; // rax
  void *v19; // rdi
  size_t n; // [rsp+8h] [rbp-90h]
  __int64 v22; // [rsp+10h] [rbp-88h]
  __int64 v23; // [rsp+18h] [rbp-80h]
  __int64 v24; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v27; // [rsp+48h] [rbp-50h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v3 = (pthread_rwlock_t *)a1[1];
  if ( !v3 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(v3) == 35 )
    std::__throw_system_error(35);
  v6 = ea2node(a2);
  v7 = sub_439830(a1 + 7, v6);
  v8 = v7;
  if ( v7 )
  {
    v9 = a1[18];
    v10 = *(unsigned int *)(a1[28] + 4LL * *((unsigned int *)v7 + 4));
    v11 = a1[24];
    v12 = *(_QWORD *)(v11 + 8 * v10);
    v13 = (unsigned int)(v10 + 1);
    v14 = *(_QWORD *)(v11 + 8 * v13);
    v27 = 0;
    ptr = nullptr;
    v15 = v14 - v12;
    n = v15 - 1;
    if ( v15 != 1 )
    {
      v19 = nullptr;
      if ( v15 )
      {
        v25 = v9;
        v24 = v12;
        v23 = v15;
        ptr = (void *)qvector_reserve(&ptr, 0, v15, 1);
        v9 = v25;
        v19 = ptr;
        v12 = v24;
        v15 = v23;
      }
      *(_QWORD *)&v27 = v15;
      v22 = v15;
      memmove(v19, (const void *)(v9 + v12), n);
      *((char *)ptr + v22 - 1) = 0;
    }
    sub_43CEC0(v6, (__int64)&ptr, v13);
    if ( ptr )
    {
      *(_QWORD *)&v27 = 0;
      qfree(ptr);
    }
    v16 = *(void (__fastcall **)(_QWORD *, _QWORD, size_t, const char *))(*a1 + 56LL);
    v17 = strlen(a3);
    v16(a1, *((unsigned int *)v8 + 4), v17, a3);
    ++*(_QWORD *)(a1[1] + 56LL);
  }
  if ( &_pthread_key_create )
    LODWORD(v18) = pthread_rwlock_unlock(v3);
  else
    return v28 - __readfsqword(0x28u);
  return v18;
}
