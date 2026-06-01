__int64 __fastcall sub_175B20(_QWORD *a1)
{
  int v1; // ebx
  unsigned int v2; // r12d
  __int64 v3; // r14

  qmutex_lock();
  if ( a1[3] )
  {
    v1 = 0;
    v2 = 0;
    v3 = 0;
    do
    {
      while ( !(unsigned __int8)qthread_equal() )
      {
        v3 = ++v1;
        if ( (unsigned __int64)v1 >= a1[3] )
          goto LABEL_6;
      }
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 256LL))(a1, v3, 1);
      ++v2;
      v3 = v1;
    }
    while ( (unsigned __int64)v1 < a1[3] );
  }
  else
  {
    v2 = 0;
  }
LABEL_6:
  qmutex_unlock();
  return v2;
}

