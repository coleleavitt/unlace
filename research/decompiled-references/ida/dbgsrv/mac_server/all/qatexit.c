/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qatexit
// Address: 0x000000010007D0E0

//----- (000000010007D0E0) ----------------------------------------------------
bool __fastcall qatexit(__int64 a1)
{
  pthread_mutex_t *v1; // rbx
  _QWORD *v2; // r15
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  _QWORD *v6; // rdx
  _Unwind_Exception *v8; // rax
  _Unwind_Exception *v9; // r14

  v1 = (pthread_mutex_t *)qword_1000AECE8;
  if ( !qword_1000AECE8 )
  {
    v1 = qmutex_create();
    qword_1000AECE8 = (__int64)v1;
    if ( !v1 )
    {
      if ( under_debugger == 1 )
        BUG();
      interr(0x223u);
      v9 = v8;
      qmutex_unlock(nullptr);
      _Unwind_Resume(v9);
    }
  }
  qmutex_lock(v1);
  v2 = (_QWORD *)qword_1000AECF0;
  if ( qword_1000AECF0 )
  {
    v3 = *(_QWORD **)qword_1000AECF0;
  }
  else
  {
    v2 = qalloc_or_throw(24);
    *(_OWORD *)v2 = 0;
    v2[2] = 0;
    qword_1000AECF0 = (__int64)v2;
    v3 = nullptr;
  }
  v4 = v2[1];
  v5 = 8 * v4;
  v6 = v3;
  if ( 8 * v4 )
  {
    v6 = v3;
    while ( *v6 != a1 )
    {
      ++v6;
      v5 -= 8;
      if ( !v5 )
        goto LABEL_12;
    }
  }
  if ( v6 == &v3[v4] )
  {
LABEL_12:
    if ( v2[2] < (unsigned __int64)(v4 + 1) )
    {
      v3 = qvector_reserve((__int64)v2, v3, v4 + 1, 8u);
      *v2 = v3;
      v4 = v2[1];
    }
    v3[v4] = a1;
    ++v2[1];
  }
  return qmutex_unlock(v1);
}
// 10007D1DB: variable 'v8' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
// 1000AECE8: using guessed type __int64 qword_1000AECE8;
// 1000AECF0: using guessed type __int64 qword_1000AECF0;
