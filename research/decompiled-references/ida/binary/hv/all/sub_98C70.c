__int64 __fastcall sub_98C70(char *name, char *value)
{
  unsigned int v2; // ebx
  pthread_mutex_t *v3; // r12
  int v4; // eax

  if ( !value )
    return 0;
  v2 = (unsigned int)value;
  if ( !qword_1671D0 )
  {
    qword_1671D0 = j__pthread_self();
    qword_1671D8 = (__int64)sub_98180();
  }
  v3 = (pthread_mutex_t *)qword_1671D8;
  sub_98400((pthread_mutex_t *)qword_1671D8);
  if ( *value )
    v4 = setenv(name, value, 1);
  else
    v4 = unsetenv(name);
  LOBYTE(v2) = v4 == 0;
  sub_98450(v3);
  return v2;
}

