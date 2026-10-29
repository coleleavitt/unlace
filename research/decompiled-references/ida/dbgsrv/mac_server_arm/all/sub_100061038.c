/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061038
// Address: 0x0000000100061038

//----- (0000000100061038) ----------------------------------------------------
_QWORD *__fastcall sub_100061038(_QWORD *a1)
{
  pthread_mutex_t *v2; // x20
  __int64 v3; // x10
  _QWORD *v4; // x0
  __int64 v5; // x8

  *a1 = &off_10009BC90;
  v2 = (pthread_mutex_t *)qword_10009DAB8;
  qmutex_lock((pthread_mutex_t *)qword_10009DAB8);
  if ( (qword_10009DAC8 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
  {
    v3 = 8 * qword_10009DAC8;
    v4 = (_QWORD *)qword_10009DAC0;
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
    v4 = (_QWORD *)qword_10009DAC0;
  }
  v5 = qword_10009DAC0 + 8 * qword_10009DAC8;
  if ( v4 != (_QWORD *)v5 )
  {
    memmove(v4, v4 + 1, v5 - (_QWORD)v4 - 8);
    --qword_10009DAC8;
  }
LABEL_9:
  qmutex_unlock(v2);
  return a1;
}
// 10009BC90: using guessed type _UNKNOWN *off_10009BC90;
// 10009DAB8: using guessed type __int64 qword_10009DAB8;
// 10009DAC0: using guessed type __int64 qword_10009DAC0;
// 10009DAC8: using guessed type __int64 qword_10009DAC8;
