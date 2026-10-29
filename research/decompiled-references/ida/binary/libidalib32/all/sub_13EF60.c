__int64 __fastcall sub_13EF60(__int64 a1, char a2)
{
  volatile __int64 *v2; // r12
  int v3; // ebp
  void (__fastcall ***v4)(_QWORD); // rbx

LABEL_1:
  qmutex_lock();
  if ( *(_QWORD *)(a1 + 320) )
  {
    v2 = (volatile __int64 *)(a1 + 320);
    if ( a2 )
    {
      v3 = 1;
      goto LABEL_7;
    }
    v3 = 16;
    if ( !sub_CACE0() )
    {
LABEL_7:
      do
      {
        if ( v3-- == 0 )
          break;
        v4 = (void (__fastcall ***)(_QWORD))_InterlockedExchange64(v2, 0);
        if ( !v4 )
        {
          if ( under_debugger )
            BUG();
          interr();
          a1 = 40154;
          goto LABEL_1;
        }
        flush_exec_requests();
        qmutex_unlock();
        (**v4)(v4);
        qmutex_lock();
      }
      while ( *v2 );
    }
  }
  return qmutex_unlock();
}

