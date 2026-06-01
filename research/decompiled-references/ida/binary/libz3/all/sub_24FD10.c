int __fastcall sub_24FD10(__int64 *a1, __int64 a2, __int64 a3)
{
  char **exception; // r13
  pthread_mutex_t *v4; // r12
  int v6; // eax
  __int64 v7; // r13
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  int result; // eax
  _QWORD *v12; // rcx
  unsigned int v13; // r14d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = (pthread_mutex_t *)(a2 + 256);
  *a1 = a2;
  if ( &_pthread_key_create )
  {
    v6 = pthread_mutex_lock((pthread_mutex_t *)(a2 + 256));
    if ( v6 )
      std::__throw_system_error(v6);
    v7 = *a1;
    v8 = *(_QWORD **)(*a1 + 1576);
    if ( v8 )
      goto LABEL_4;
LABEL_13:
    v18 = (_QWORD *)sub_186B270(0x18u);
    v8 = v18 + 1;
    *v18 = 2;
    result = 1;
    *(_QWORD *)(v7 + 1576) = v8;
    v12 = v8;
    goto LABEL_6;
  }
  v7 = a2;
  v8 = *(_QWORD **)(a2 + 1576);
  if ( !v8 )
    goto LABEL_13;
LABEL_4:
  v9 = *((_DWORD *)v8 - 1);
  if ( v9 == *((_DWORD *)v8 - 2) )
  {
    v13 = (3 * v9 + 1) >> 1;
    v14 = 8 * v13 + 8;
    if ( 8 * v9 + 8 >= (unsigned int)v14 || v9 >= v13 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v19, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v19);
      sub_233E40((__int64)v19);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v15 = (unsigned int *)sub_186B300(v8 - 1, v14);
    v16 = v15[1];
    v17 = v15 + 2;
    *v15 = v13;
    *(_QWORD *)(v7 + 1576) = v15 + 2;
    result = v16 + 1;
    *(_QWORD *)&v17[2 * v16] = a3;
    *(v17 - 1) = v16 + 1;
    if ( &_pthread_key_create )
      return pthread_mutex_unlock(v4);
    return result;
  }
  v10 = v9;
  result = v9 + 1;
  v12 = &v8[v10];
LABEL_6:
  *v12 = a3;
  *((_DWORD *)v8 - 1) = result;
  if ( &_pthread_key_create )
    return pthread_mutex_unlock(v4);
  return result;
}

