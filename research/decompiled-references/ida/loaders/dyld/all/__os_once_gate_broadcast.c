__int64 __fastcall _os_once_gate_broadcast(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // x0
  __int64 v5; // x8

  result = a2 | 1;
  if ( (_DWORD)result != a3 )
    _os_once_gate_unowned_abort();
  if ( (a2 & 1) != 0 )
  {
    v5 = a2;
    qword_9C1C0 = (__int64)"BUG IN LIBPLATFORM: unlock_slow with no waiters";
    qword_9C1F0 = a2;
    __break(1u);
LABEL_9:
    qword_9C1C0 = (__int64)"BUG IN LIBPLATFORM: ulock_wake failure";
    qword_9C1F0 = v5;
    __break(1u);
  }
  else
  {
    while ( 1 )
    {
      result = __ulock_wake(16777474, a1, 0);
      if ( (result & 0x80000000) == 0 )
        break;
      if ( (_DWORD)result != -4 )
      {
        v5 = (unsigned int)-(int)result;
        if ( (_DWORD)v5 != 2 )
          goto LABEL_9;
        return result;
      }
    }
  }
  return result;
}
