__int64 __fastcall qatexit(__int64 a1, const char *a2)
{
  __int64 v2; // r12
  __int64 *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx

  v2 = qword_2CACFF0;
  if ( !qword_2CACFF0 )
  {
    qword_2CACFF0 = qmutex_create();
    v2 = qword_2CACFF0;
    if ( !qword_2CACFF0 )
    {
      if ( !under_debugger )
        interr(547);
      BUG();
    }
  }
  qmutex_lock(v2);
  v3 = (__int64 *)qword_2CACFF8;
  if ( qword_2CACFF8 )
  {
    v4 = *(_QWORD *)qword_2CACFF8;
    v5 = *((_QWORD *)qword_2CACFF8 + 1);
    v6 = (_QWORD *)(*(_QWORD *)qword_2CACFF8 + 8 * v5);
    if ( *(_QWORD **)qword_2CACFF8 != v6 )
    {
      v7 = *(_QWORD **)qword_2CACFF8;
      while ( *v7 != a1 )
      {
        if ( ++v7 == v6 )
          goto LABEL_10;
      }
      if ( v7 != v6 )
        return qmutex_unlock(v2);
    }
  }
  else
  {
    v9 = (_QWORD *)qalloc_or_throw(24, a2);
    *v9 = 0;
    v3 = v9;
    v6 = nullptr;
    qword_2CACFF8 = v9;
    v4 = 0;
    v5 = 0;
    *(_OWORD *)(v9 + 1) = 0;
  }
LABEL_10:
  v10 = v5 + 1;
  if ( v3[2] < v10 )
  {
    v11 = qvector_reserve(v3, v4, v10, 8);
    v12 = v3[1];
    *v3 = v11;
    v6 = (_QWORD *)(v11 + 8 * v12);
  }
  *v6 = a1;
  ++v3[1];
  return qmutex_unlock(v2);
}

