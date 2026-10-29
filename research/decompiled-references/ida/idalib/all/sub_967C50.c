__int64 __fastcall sub_967C50(char *ptr)
{
  char *v2; // rdi
  void (__fastcall *v3)(__int64); // rbp
  __int64 v4; // r12
  void (__fastcall *v5)(_QWORD); // rax
  void (__fastcall *v6)(_QWORD, char *); // rax
  void *v8; // rsi

  if ( !ptr )
    return 0;
  if ( (ptr[3096] & 1) == 0 )
    sub_902E80(*(char **)ptr);
  sub_966980((__int64)ptr);
  v2 = *((char **)ptr + 1);
  if ( v2 )
    sub_966DC0(
      v2,
      *((_DWORD *)ptr + 752) + 1,
      *((void (__fastcall **)(__int64, char *))ptr + 383),
      *((_QWORD *)ptr + 384));
  sub_966820(*((pthread_mutex_t **)ptr + 2));
  sub_966E40(*((pthread_mutex_t **)ptr + 3));
  sub_966820(*((pthread_mutex_t **)ptr + 4));
  v3 = *((void (__fastcall **)(__int64))ptr + 74);
  v4 = *((_QWORD *)ptr + 75);
  pthread_mutex_destroy((pthread_mutex_t *)(ptr + 344));
  pthread_cond_destroy((pthread_cond_t *)ptr + 8);
  pthread_mutex_destroy((pthread_mutex_t *)(ptr + 2856));
  pthread_cond_destroy((pthread_cond_t *)(ptr + 2896));
  if ( !*((_QWORD *)ptr + 86) )
  {
    v8 = *((void **)ptr + 88);
    if ( !v8 )
      goto LABEL_10;
    if ( v3 )
      goto LABEL_9;
LABEL_20:
    free(v8);
    goto LABEL_10;
  }
  if ( !v3 )
  {
    free(*((void **)ptr + 86));
    v8 = *((void **)ptr + 88);
    if ( !v8 )
      goto LABEL_10;
    goto LABEL_20;
  }
  v3(v4);
  if ( *((_QWORD *)ptr + 88) )
LABEL_9:
    v3(v4);
LABEL_10:
  sub_910820(*((_QWORD **)ptr + 385));
  if ( *((_QWORD *)ptr + 40) )
  {
    v5 = *((void (__fastcall **)(_QWORD))ptr + 383);
    if ( v5 )
      v5(*((_QWORD *)ptr + 384));
    else
      free(*((void **)ptr + 40));
  }
  v6 = *((void (__fastcall **)(_QWORD, char *))ptr + 383);
  if ( v6 )
    v6(*((_QWORD *)ptr + 384), ptr);
  else
    free(ptr);
  return 0;
}
