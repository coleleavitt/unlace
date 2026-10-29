int __fastcall sub_E3CBB0(pthread_mutex_t *mutex, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  _QWORD *v8; // rcx
  int result; // eax
  unsigned int v10; // r13d
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  char **exception; // r13
  __int64 v16; // rdx
  __int64 v17[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( &_pthread_key_create )
  {
    v3 = pthread_mutex_lock(mutex);
    if ( v3 )
      std::__throw_system_error(v3);
  }
  v4 = *(&mutex[2].__align + 1);
  if ( !v4 )
  {
    v14 = (_QWORD *)sub_186B270(0x18u);
    v4 = (__int64)(v14 + 1);
    *v14 = 2;
    v7 = 1;
    *(&mutex[2].__align + 1) = v4;
    v8 = (_QWORD *)v4;
LABEL_6:
    *v8 = a2;
    *(_DWORD *)(v4 - 4) = v7;
    result = *((_DWORD *)&mutex[2].__align + 6);
    if ( !result )
      goto LABEL_7;
LABEL_12:
    result = std::condition_variable::notify_one((std::condition_variable *)&mutex[1]);
    if ( &_pthread_key_create )
      return pthread_mutex_unlock(mutex);
    return result;
  }
  v5 = *(_DWORD *)(v4 - 4);
  if ( v5 != *(_DWORD *)(v4 - 8) )
  {
    v6 = v5;
    v7 = v5 + 1;
    v8 = (_QWORD *)(v4 + 8 * v6);
    goto LABEL_6;
  }
  v10 = (3 * v5 + 1) >> 1;
  v11 = 8 * v10 + 8;
  if ( 8 * v5 + 8 >= (unsigned int)v11 || v5 >= v10 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_181416(v17, "Overflow encountered when expanding vector", v16);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v17);
    sub_233E40((__int64)v17);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v12 = (unsigned int *)sub_186B300((void *)(v4 - 8), v11);
  v13 = v12[1];
  *v12 = v10;
  *(&mutex[2].__align + 1) = (__int64)(v12 + 2);
  *(_QWORD *)&v12[2 * v13 + 2] = a2;
  v12[1] = v13 + 1;
  result = *((_DWORD *)&mutex[2].__align + 6);
  if ( result )
    goto LABEL_12;
LABEL_7:
  if ( &_pthread_key_create )
    return pthread_mutex_unlock(mutex);
  return result;
}

