__int64 __fastcall sub_4793A0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // ebx
  unsigned int v4; // r12d
  __int64 v5; // r14

  v2 = a1[8];
  qmutex_lock(v2);
  if ( a1[3] )
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    do
    {
      while ( !(unsigned __int8)qthread_equal(*(_QWORD *)(a1[2] + 24 * v5 + 8), a2) )
      {
        v5 = ++v3;
        if ( (unsigned __int64)v3 >= a1[3] )
          goto LABEL_6;
      }
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 256LL))(a1, v5, 1);
      ++v4;
      v5 = v3;
    }
    while ( (unsigned __int64)v3 < a1[3] );
  }
  else
  {
    v4 = 0;
  }
LABEL_6:
  qmutex_unlock(v2);
  return v4;
}
