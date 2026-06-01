/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsetenv
// Address: 0x00000001000802F0

//----- (00000001000802F0) ----------------------------------------------------
__int64 __fastcall qsetenv(char *a1, char *__value)
{
  unsigned int v2; // r14d
  pthread_mutex_t *v3; // rbx
  int v4; // eax

  if ( __value )
  {
    v2 = (unsigned int)a1;
    if ( qword_1000AED00 )
    {
      v3 = qword_1000AED08;
    }
    else
    {
      qword_1000AED00 = pthread_self();
      v3 = qmutex_create();
      qword_1000AED08 = v3;
    }
    if ( v3 )
      pthread_mutex_lock(v3);
    if ( *__value )
      v4 = setenv(a1, __value, 1);
    else
      v4 = unsetenv(a1);
    LOBYTE(v2) = v4 == 0;
    if ( v3 )
      pthread_mutex_unlock(v3);
  }
  else
  {
    return 0;
  }
  return v2;
}
