void __fastcall sub_2296EA0(_BYTE *a1, __int64 a2)
{
  pthread_mutex_t *v2; // r14
  int v3; // eax
  __int64 i; // rbx
  size_t v5; // rbp
  size_t v6; // rdx
  size_t v7; // r13
  __int64 v8; // rbp
  void *v9; // rdi
  const char *s2; // [rsp+8h] [rbp-60h]
  void *s1; // [rsp+10h] [rbp-58h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  _BYTE v13[72]; // [rsp+20h] [rbp-48h] BYREF

  s1 = v13;
  if ( !a1 )
  {
    n = 0;
    v13[0] = 0;
    if ( qword_2D0B850 )
      goto LABEL_3;
LABEL_24:
    sub_2230020((__int64 *)&qword_2D0B850, (__int64 (*)(void))sub_20C09B0, (__int64)sub_20C0990);
    goto LABEL_3;
  }
  sub_22968A0(&s1, a1, (__int64)&a1[a2]);
  if ( !qword_2D0B850 )
    goto LABEL_24;
LABEL_3:
  v2 = qword_2D0B850;
  if ( &_pthread_key_create )
  {
    v3 = pthread_mutex_lock(qword_2D0B850);
    if ( v3 )
      std::__throw_system_error(v3);
  }
  for ( i = qword_2D0B848; i; i = *(_QWORD *)(i + 8) )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)i )
      {
        v5 = n;
        s2 = *(const char **)i;
        v6 = strlen(*(const char **)i);
        v7 = v6;
        if ( v5 <= v6 )
          v6 = v5;
        if ( !v6 || !memcmp(s1, s2, v6) )
        {
          v8 = v5 - v7;
          if ( v8 <= 0x7FFFFFFF && v8 >= (__int64)0xFFFFFFFF80000000LL && !(_DWORD)v8 )
          {
            v9 = (void *)_InterlockedExchange64((volatile __int64 *)i, 0);
            if ( v9 )
              break;
          }
        }
      }
      i = *(_QWORD *)(i + 8);
      if ( !i )
        goto LABEL_18;
    }
    free(v9);
  }
LABEL_18:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(v2);
  if ( s1 != v13 )
    operator delete(s1);
}
