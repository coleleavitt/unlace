__int64 __fastcall _os_unfair_lock_unlock_slow(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v5; // x8

  result = a3 | 1;
  if ( (_DWORD)result != a2 )
    _os_unfair_lock_unowned_abort();
  if ( (a3 & 1) != 0 )
  {
    v5 = a3;
    qword_9C1C0 = (__int64)"BUG IN LIBPLATFORM: unlock_slow with no waiters";
    qword_9C1F0 = a3;
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
      result = __ulock_wake(16777218, a1, 0);
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
