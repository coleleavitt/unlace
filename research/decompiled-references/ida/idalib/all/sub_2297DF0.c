pthread_t __fastcall sub_2297DF0(void *(*start_routine)(void *), void *arg, size_t stacksize)
{
  int v4; // eax
  int v5; // eax
  pthread_t v6; // rbp
  int v7; // eax
  int v9; // eax
  pthread_t newthread; // [rsp+8h] [rbp-70h] BYREF
  pthread_attr_t attr; // [rsp+10h] [rbp-68h] BYREF

  v4 = pthread_attr_init(&attr);
  if ( v4 )
    sub_2297950("pthread_attr_init failed", v4);
  if ( BYTE4(stacksize) )
  {
    v9 = pthread_attr_setstacksize(&attr, (unsigned int)stacksize);
    if ( v9 )
      sub_2297950("pthread_attr_setstacksize failed", v9);
  }
  v5 = pthread_create(&newthread, &attr, start_routine, arg);
  if ( v5 )
    sub_2297950("pthread_create failed", v5);
  v6 = newthread;
  v7 = pthread_attr_destroy(&attr);
  if ( v7 )
    sub_2297950("pthread_attr_destroy failed", v7);
  return v6;
}
