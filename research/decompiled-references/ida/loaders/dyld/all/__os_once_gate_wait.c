__int64 __fastcall _os_once_gate_wait(__int64 result, __int64 a2, __int64 (__fastcall *a3)(__int64), __int64 a4)
{
  atomic_ullong v4; // x23
  atomic_ullong *v8; // x19
  unsigned __int64 v9; // x24
  unsigned int v10; // w8
  atomic_ullong v11; // x10
  atomic_ullong v12; // x8
  __int64 _48; // [xsp+48h] [xbp+8h]

  v4 = *(_QWORD *)result;
  if ( *(_QWORD *)result != -1 )
  {
    v8 = (atomic_ullong *)result;
    v9 = (unsigned int)a4;
    while ( (v4 & 3) != 1 )
    {
      if ( v4 )
      {
        v10 = v4;
        if ( (v4 & 0xFFFFFFFFFFFFFFFELL) == v4
          || (v11 = v4,
              atomic_compare_exchange_strong_explicit(
                v8,
                (unsigned __int64 *)&v11,
                v4 & 0xFFFFFFFFFFFFFFFELL,
                memory_order_relaxed,
                memory_order_relaxed),
              v10 = v4 & 0xFFFFFFFE,
              v11 == v4) )
        {
          if ( ((unsigned int)v4 | 1) == (_DWORD)a4 )
            _os_once_gate_recursive_abort(a4);
          result = __ulock_wait(16777218, v8, v10, 0);
          if ( (result & 0x80000000) != 0 && (_DWORD)result != -4 && -(int)result != 14 )
          {
            if ( -(int)result == 105 )
              _os_once_gate_corruption_abort(v4);
            qword_9C1C0 = (__int64)"BUG IN LIBPLATFORM: ulock_wait failure";
            qword_9C1F0 = (unsigned int)-(int)result;
            __break(1u);
            return result;
          }
          v4 = *v8;
        }
        else
        {
          v4 = v11;
        }
      }
      else
      {
        v12 = 0;
        atomic_compare_exchange_strong_explicit(
          v8,
          (unsigned __int64 *)&v12,
          v9,
          memory_order_relaxed,
          memory_order_relaxed);
        if ( !v12 )
        {
          __dmb(9u);
          if ( ((_48 ^ (2 * _48)) & 0x4000000000000000LL) != 0 )
            __break(0xC471u);
          return _os_once_callout(v8, a2, a3, a4);
        }
        v4 = v12;
      }
      if ( v4 == -1 )
        return result;
    }
    __dmb(9u);
    if ( (unsigned __int64)(4LL * MEMORY[0xFFFFFC180] - v4 + 1) >= 0x10 )
      *v8 = -1;
  }
  return result;
}
