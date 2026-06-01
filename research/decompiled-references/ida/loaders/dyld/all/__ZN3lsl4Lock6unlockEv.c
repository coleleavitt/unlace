const os_unfair_lock *__fastcall lsl::Lock::unlock(lsl::Lock *this)
{
  const os_unfair_lock *result; // x0
  lsl::Lock *v3; // x0
  __int64 (*v4)(void); // x2
  __int64 _18; // [xsp+18h] [xbp+8h]

  result = *((const os_unfair_lock **)this + 1);
  if ( result )
  {
    os_unfair_lock_assert_owner(result);
    if ( !*(_QWORD *)this )
      lsl::Lock::unlock(v3);
    v4 = *(__int64 (**)(void))(**(_QWORD **)(*(_QWORD *)this + 120LL) + 192LL);
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const os_unfair_lock *)v4();
  }
  return result;
}
