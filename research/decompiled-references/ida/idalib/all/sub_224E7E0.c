int __fastcall sub_224E7E0(_QWORD *a1, _BYTE *a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  __int64 v8; // rbp
  pthread_mutex_t *v9; // rbp
  int v10; // eax
  __int64 v11; // rax
  __int64 *v12; // rax

  if ( !qword_2D0ABB0 )
    sub_2230020(&qword_2D0ABB0, sub_224F5D0, (__int64)sub_22522C0);
  v8 = qword_2D0ABB0;
  *a1 = a1 + 2;
  v9 = (pthread_mutex_t *)(v8 + 616);
  sub_224D960(a1, a2, (__int64)&a2[a3]);
  a1[4] = a1 + 6;
  sub_224D960(a1 + 4, a4, (__int64)&a4[a5]);
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  if ( &_pthread_key_create )
  {
    v10 = pthread_mutex_lock(v9);
    if ( v10 )
      std::__throw_system_error(v10);
  }
  v11 = qword_2D0ABC8;
  if ( qword_2D0ABC8 )
    *(_QWORD *)(qword_2D0ABC8 + 96) = a1 + 13;
  a1[13] = v11;
  v12 = &qword_2D0ABC8;
  a1[12] = &qword_2D0ABC8;
  qword_2D0ABC8 = (__int64)a1;
  if ( &_pthread_key_create )
    LODWORD(v12) = pthread_mutex_unlock(v9);
  return (int)v12;
}
