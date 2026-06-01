int __fastcall sub_2230020(__int64 *a1, __int64 (*a2)(void), __int64 a3)
{
  int v4; // eax
  __int64 v5; // rax

  if ( &_pthread_key_create )
  {
    v4 = pthread_mutex_lock(&stru_2C8F5E0);
    if ( v4 )
      std::__throw_system_error(v4);
  }
  v5 = *a1;
  if ( *a1 )
  {
    if ( !&_pthread_key_create )
      return v5;
  }
  else
  {
    *a1 = a2();
    a1[1] = a3;
    v5 = qword_2D0AB50;
    qword_2D0AB50 = (__int64)a1;
    a1[2] = v5;
    if ( !&_pthread_key_create )
      return v5;
  }
  LODWORD(v5) = pthread_mutex_unlock(&stru_2C8F5E0);
  return v5;
}
