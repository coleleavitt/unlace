/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qatexit
// Address: 0x000000010006F8AC

//----- (000000010006F8AC) ----------------------------------------------------
pthread_mutex_t *__fastcall qatexit(__int64 a1)
{
  pthread_mutex_t *v2; // x19
  _QWORD *v3; // x21
  _QWORD *v4; // x1
  __int64 v5; // x8
  _QWORD *v6; // x9
  __int64 v7; // x10
  _Unwind_Exception *v9; // x0
  _Unwind_Exception *v10; // x20

  v2 = (pthread_mutex_t *)qword_10009E3A0;
  if ( !qword_10009E3A0 )
  {
    v2 = qmutex_create();
    qword_10009E3A0 = (__int64)v2;
    if ( !v2 )
    {
      if ( under_debugger == 1 )
        __break(1u);
      interr(547);
      v10 = v9;
      qmutex_unlock(nullptr);
      _Unwind_Resume(v10);
    }
  }
  qmutex_lock(v2);
  v3 = (_QWORD *)qword_10009E3A8;
  if ( qword_10009E3A8 )
  {
    v4 = *(_QWORD **)qword_10009E3A8;
  }
  else
  {
    v3 = qalloc_or_throw(24);
    v4 = nullptr;
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    qword_10009E3A8 = (__int64)v3;
  }
  v5 = v3[1];
  v6 = v4;
  if ( (v5 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
  {
    v7 = 8 * v5;
    v6 = v4;
    while ( *v6 != a1 )
    {
      ++v6;
      v7 -= 8;
      if ( !v7 )
        goto LABEL_12;
    }
  }
  if ( v6 == &v4[v5] )
  {
LABEL_12:
    if ( v3[2] < (unsigned __int64)(v5 + 1) )
    {
      v4 = qvector_reserve(v3, v4, v5 + 1, 8u);
      *v3 = v4;
      v5 = v3[1];
    }
    v4[v5] = a1;
    ++v3[1];
  }
  return qmutex_unlock(v2);
}
// 10006F9C0: variable 'v9' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
// 10009DF98: using guessed type __int64 qword_10009DF98[128];
// 10009E3A0: using guessed type __int64 qword_10009E3A0;
// 10009E3A8: using guessed type __int64 qword_10009E3A8;
