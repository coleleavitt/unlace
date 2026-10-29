__int64 __fastcall qsetenv(char *name, char *value)
{
  unsigned int v2; // ebx
  __int64 v3; // r12
  int v4; // eax

  if ( !value )
    return 0;
  v2 = (unsigned int)value;
  if ( !qword_2CD6F30 )
  {
    qword_2CD6F30 = qthread_self();
    qword_2CD6F38 = qmutex_create();
  }
  v3 = qword_2CD6F38;
  qmutex_lock(qword_2CD6F38);
  if ( *value )
    v4 = setenv(name, value, 1);
  else
    v4 = unsetenv(name);
  LOBYTE(v2) = v4 == 0;
  qmutex_unlock(v3);
  return v2;
}
