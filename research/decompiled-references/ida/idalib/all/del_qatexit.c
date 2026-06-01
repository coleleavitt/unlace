__int64 __fastcall del_qatexit(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v3; // r12
  _QWORD *v4; // rdi
  __int64 v5; // rdx

  v1 = qword_2CD6F10;
  qmutex_lock(qword_2CD6F10);
  v3 = qword_2CD6F18;
  if ( qword_2CD6F18 )
  {
    v4 = *(_QWORD **)qword_2CD6F18;
    v5 = *(_QWORD *)qword_2CD6F18 + 8LL * *((_QWORD *)qword_2CD6F18 + 1);
    if ( *(_QWORD *)qword_2CD6F18 != v5 )
    {
      while ( *v4 != a1 )
      {
        if ( (_QWORD *)v5 == ++v4 )
          return qmutex_unlock(v1);
      }
      if ( (_QWORD *)v5 != v4 )
      {
        memmove(v4, v4 + 1, v5 - (_QWORD)v4 - 8);
        --v3[1];
      }
    }
  }
  return qmutex_unlock(v1);
}
