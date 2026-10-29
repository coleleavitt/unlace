__int64 __fastcall sub_301D70(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  volatile __int64 *v5; // r12
  int v6; // ebp
  void (__fastcall ***v7)(_QWORD); // rbx

  qmutex_lock(*(_QWORD *)(a1 + 80));
  if ( *(_QWORD *)(a1 + 712) )
  {
    v5 = (volatile __int64 *)(a1 + 712);
    if ( (_BYTE)a2 )
    {
      v6 = 1;
      goto LABEL_7;
    }
    v6 = 16;
    if ( !(unsigned __int8)sub_23BE00() )
    {
LABEL_7:
      do
      {
        if ( v6-- == 0 )
          break;
        v7 = (void (__fastcall ***)(_QWORD))_InterlockedExchange64(v5, 0);
        if ( !v7 )
        {
          if ( under_debugger )
            BUG();
          interr(40290, a2, v3, v4, a3);
          return IDAApplication__::vfunc_29();
        }
        qmutex_unlock(*(_QWORD *)(a1 + 80));
        (**v7)(v7);
        qmutex_lock(*(_QWORD *)(a1 + 80));
      }
      while ( *v5 );
    }
  }
  return qmutex_unlock(*(_QWORD *)(a1 + 80));
}
