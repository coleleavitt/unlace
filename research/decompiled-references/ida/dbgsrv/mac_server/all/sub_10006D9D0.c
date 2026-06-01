/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006D9D0
// Address: 0x000000010006D9D0

//----- (000000010006D9D0) ----------------------------------------------------
bool __fastcall sub_10006D9D0(_QWORD *a1)
{
  pthread_mutex_t *v2; // rbx
  __int64 v3; // rdx
  char *i; // rdi
  char *v5; // rdx

  *a1 = &off_1000AA7F0;
  v2 = (pthread_mutex_t *)qword_1000AE3F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AE3F0);
  v3 = 8LL * (_QWORD)*(&xmmword_1000AE3F8 + 1);
  i = (char *)xmmword_1000AE3F8;
  if ( 8LL * (_QWORD)*(&xmmword_1000AE3F8 + 1) )
  {
    for ( i = (char *)xmmword_1000AE3F8; *(_QWORD **)i != a1; i += 8 )
    {
      v3 -= 8;
      if ( !v3 )
        return qmutex_unlock(v2);
    }
  }
  v5 = (char *)xmmword_1000AE3F8 + 8 * (_QWORD)*(&xmmword_1000AE3F8 + 1);
  if ( i != v5 )
  {
    memmove(i, i + 8, v5 - i - 8);
    *(&xmmword_1000AE3F8 + 1) = (char *)*(&xmmword_1000AE3F8 + 1) - 1;
  }
  return qmutex_unlock(v2);
}
// 1000AA7F0: using guessed type _UNKNOWN *off_1000AA7F0;
// 1000AE3F0: using guessed type __int64 qword_1000AE3F0;
