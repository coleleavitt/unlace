const char *__fastcall sub_224F3E0(__int64 a1, const char *a2)
{
  pthread_mutex_t *v3; // r13
  int v4; // eax
  _QWORD *v5; // rbx
  char *v6; // rax

  if ( !qword_2D0ABB0 )
    sub_2230020(&qword_2D0ABB0, sub_224F5D0, (__int64)sub_22522C0);
  v3 = (pthread_mutex_t *)(qword_2D0ABB0 + 616);
  if ( &_pthread_key_create )
  {
    v4 = pthread_mutex_lock((pthread_mutex_t *)(qword_2D0ABB0 + 616));
    if ( v4 )
      std::__throw_system_error(v4);
  }
  v5 = (_QWORD *)qword_2D0ABC8;
  if ( qword_2D0ABC8 )
  {
    do
    {
      v6 = sub_224F030(v5, a1, a2);
      v5 = (_QWORD *)v5[13];
      a2 = v6;
    }
    while ( v5 );
  }
  if ( &_pthread_key_create )
    pthread_mutex_unlock(v3);
  return a2;
}
