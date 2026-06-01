/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_483730
// Address: 0x0000000000483730

//----- (0000000000483730) ----------------------------------------------------
__int64 __fastcall sub_483730(char *name, char *value)
{
  unsigned int v2; // ebx
  pthread_mutex_t *v3; // r12
  int v4; // eax

  if ( !value )
    return 0;
  v2 = (unsigned int)value;
  if ( !qword_4C9510 )
  {
    qword_4C9510 = j__pthread_self();
    qword_4C9518 = (__int64)sub_482C40();
  }
  v3 = (pthread_mutex_t *)qword_4C9518;
  sub_482EC0((pthread_mutex_t *)qword_4C9518);
  if ( *value )
    v4 = setenv(name, value, 1);
  else
    v4 = unsetenv(name);
  LOBYTE(v2) = v4 == 0;
  sub_482F10(v3);
  return v2;
}
// 4C9510: using guessed type __int64 qword_4C9510;
// 4C9518: using guessed type __int64 qword_4C9518;
