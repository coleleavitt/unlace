/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: del_qatexit
// Address: 0x00000000000C36D0

//----- (00000000000C36D0) ----------------------------------------------------
bool __fastcall del_qatexit(__int64 a1)
{
  pthread_mutex_t *v2; // r14
  _QWORD *v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *i; // rdi
  __int64 v7; // rdx

  v2 = (pthread_mutex_t *)qword_158B38;
  qmutex_lock((pthread_mutex_t *)qword_158B38);
  v3 = qword_158B48;
  if ( qword_158B48 )
  {
    v4 = *((_QWORD *)qword_158B48 + 1);
    v5 = 8 * v4;
    i = *(_QWORD **)qword_158B48;
    if ( 8 * v4 )
    {
      for ( i = *(_QWORD **)qword_158B48; *i != a1; ++i )
      {
        v5 -= 8;
        if ( !v5 )
          return qmutex_unlock(v2);
      }
    }
    v7 = *(_QWORD *)qword_158B48 + 8 * v4;
    if ( i != (_QWORD *)v7 )
    {
      memmove(i, i + 1, (v7 - 8 - (_QWORD)i) & 0xFFFFFFFFFFFFFFF8LL);
      --v3[1];
    }
  }
  return qmutex_unlock(v2);
}
// 158B38: using guessed type __int64 qword_158B38;
