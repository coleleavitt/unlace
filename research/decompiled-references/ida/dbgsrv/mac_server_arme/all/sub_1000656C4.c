/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000656C4
// Address: 0x00000001000656C4

//----- (00000001000656C4) ----------------------------------------------------
_QWORD *__fastcall sub_1000656C4(_QWORD *a1)
{
  pthread_mutex_t *v2; // x20
  __int64 v3; // x10
  _QWORD *v4; // x0
  __int64 v5; // x8

  *a1 = &off_10009FCD0;
  v2 = (pthread_mutex_t *)qword_1000A5AB8;
  qmutex_lock((pthread_mutex_t *)qword_1000A5AB8);
  if ( (qword_1000A5AC8 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
  {
    v3 = 8 * qword_1000A5AC8;
    v4 = (_QWORD *)qword_1000A5AC0;
    while ( (_QWORD *)*v4 != a1 )
    {
      ++v4;
      v3 -= 8;
      if ( !v3 )
        goto LABEL_9;
    }
  }
  else
  {
    v4 = (_QWORD *)qword_1000A5AC0;
  }
  v5 = qword_1000A5AC0 + 8 * qword_1000A5AC8;
  if ( v4 != (_QWORD *)v5 )
  {
    memmove(v4, v4 + 1, v5 - (_QWORD)v4 - 8);
    --qword_1000A5AC8;
  }
LABEL_9:
  qmutex_unlock(v2);
  return a1;
}
// 10009FCD0: using guessed type _UNKNOWN *off_10009FCD0;
// 1000A5AB8: using guessed type __int64 qword_1000A5AB8;
// 1000A5AC0: using guessed type __int64 qword_1000A5AC0;
// 1000A5AC8: using guessed type __int64 qword_1000A5AC8;
