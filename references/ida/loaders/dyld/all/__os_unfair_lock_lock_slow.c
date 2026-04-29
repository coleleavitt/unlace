__int64 __fastcall _os_unfair_lock_lock_slow(__int64 result, int a2, __int64 a3)
{
  __int64 v3; // x19
  atomic_uint *v5; // x21
  int v6; // w24
  __int64 v7; // x23
  int v8; // w8
  bool v9; // zf
  int v10; // w9
  int v12; // w9
  int v13; // w8

  if ( (a2 & 0xFEFAFFFF) != 0 )
  {
    qword_9C1C0 = (__int64)"BUG IN CLIENT OF LIBPLATFORM: Invalid options";
    qword_9C1F0 = a2 & 0xFEFFFFFF;
    __break(1u);
LABEL_29:
    _os_unfair_lock_recursive_abort(v3);
  }
  v3 = a3;
  v5 = (atomic_uint *)result;
  v6 = 0;
  while ( 1 )
  {
    v7 = (unsigned int)*v5;
    if ( !(_DWORD)v7 )
    {
      atomic_compare_exchange_strong_explicit(
        v5,
        (unsigned int *)&v7,
        v3 & ~v6,
        memory_order_acquire,
        memory_order_acquire);
      if ( !(_DWORD)v7 )
        return result;
    }
    v8 = v7 | 1;
    v9 = (a2 & 0x1000000) != 0 && v8 == -1;
    v10 = !v9;
    if ( v8 == (_DWORD)v3 && v10 != 0 )
      goto LABEL_29;
    if ( (_DWORD)v7 != (v7 & 0xFFFFFFFE) )
    {
      v12 = v7;
      atomic_compare_exchange_strong_explicit(
        v5,
        (unsigned int *)&v12,
        v7 & 0xFFFFFFFE,
        memory_order_relaxed,
        memory_order_relaxed);
      v9 = v12 == (_DWORD)v7;
      v7 = (unsigned int)v7 & 0xFFFFFFFE;
      if ( !v9 )
        continue;
    }
    result = __ulock_wait(a2 | 0x1000002u, v5, (unsigned int)v7, 0);
    if ( (result & 0x80000000) != 0 )
    {
      v13 = -(int)result;
      if ( (_DWORD)result != -4 && v13 != 14 )
      {
        if ( v13 == 105 )
          _os_unfair_lock_corruption_abort(v7);
        qword_9C1C0 = (__int64)"BUG IN LIBPLATFORM: ulock_wait failure";
        qword_9C1F0 = (unsigned int)-(int)result;
        __break(1u);
        return result;
      }
    }
    else if ( (_DWORD)result )
    {
      v6 = 1;
    }
  }
}
