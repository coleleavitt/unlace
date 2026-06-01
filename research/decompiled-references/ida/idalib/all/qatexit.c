__int64 __fastcall qatexit(__int64 a1)
{
  __int64 v1; // r12
  __int64 *v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx

  v1 = qword_2CD6F10;
  if ( !qword_2CD6F10 )
  {
    qword_2CD6F10 = qmutex_create();
    v1 = qword_2CD6F10;
    if ( !qword_2CD6F10 )
    {
      if ( !under_debugger )
        interr(547);
      BUG();
    }
  }
  qmutex_lock(v1);
  v2 = (__int64 *)qword_2CD6F18;
  if ( qword_2CD6F18 )
  {
    v3 = *(_QWORD *)qword_2CD6F18;
    v4 = *((_QWORD *)qword_2CD6F18 + 1);
    v5 = (_QWORD *)(*(_QWORD *)qword_2CD6F18 + 8 * v4);
    if ( *(_QWORD **)qword_2CD6F18 != v5 )
    {
      v6 = *(_QWORD **)qword_2CD6F18;
      while ( *v6 != a1 )
      {
        if ( ++v6 == v5 )
          goto LABEL_10;
      }
      if ( v6 != v5 )
        return qmutex_unlock(v1);
    }
  }
  else
  {
    v8 = (_QWORD *)qalloc_or_throw(24);
    *v8 = 0;
    v2 = v8;
    v5 = nullptr;
    qword_2CD6F18 = v8;
    v3 = 0;
    v4 = 0;
    *(_OWORD *)(v8 + 1) = 0;
  }
LABEL_10:
  v9 = v4 + 1;
  if ( v2[2] < v9 )
  {
    v10 = qvector_reserve(v2, v3, v9, 8);
    v11 = v2[1];
    *v2 = v10;
    v5 = (_QWORD *)(v10 + 8 * v11);
  }
  *v5 = a1;
  ++v2[1];
  return qmutex_unlock(v1);
}
