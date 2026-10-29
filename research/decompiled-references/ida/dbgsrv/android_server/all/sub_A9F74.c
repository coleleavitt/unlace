/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9F74
// Address: 0x00000000000A9F74

//----- (00000000000A9F74) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_A9F74(_QWORD *a1)
{
  pthread_mutex_t *v1; // x19
  __int64 v3; // x9
  __int64 v4; // x10
  _QWORD *i; // x0

  *a1 = &off_15F3C0;
  v1 = (pthread_mutex_t *)qword_166D30;
  qmutex_lock((pthread_mutex_t *)qword_166D30);
  v3 = 8 * qword_166D40;
  if ( 8 * qword_166D40 )
  {
    v4 = 8 * qword_166D40;
    for ( i = (_QWORD *)qword_166D38; (_QWORD *)*i != a1; ++i )
    {
      v4 -= 8;
      if ( !v4 )
        return qmutex_unlock(v1);
    }
  }
  else
  {
    i = (_QWORD *)qword_166D38;
  }
  if ( i != (_QWORD *)(qword_166D38 + v3) )
  {
    memmove(i, i + 1, (qword_166D38 + v3 - 8 - (_QWORD)i) & 0xFFFFFFFFFFFFFFF8LL);
    --qword_166D40;
  }
  return qmutex_unlock(v1);
}
// 15F3C0: using guessed type void (__fastcall __noreturn *off_15F3C0)();
// 166D30: using guessed type __int64 qword_166D30;
// 166D38: using guessed type __int64 qword_166D38;
// 166D40: using guessed type __int64 qword_166D40;
