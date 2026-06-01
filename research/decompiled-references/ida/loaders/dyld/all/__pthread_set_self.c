__int64 __fastcall _pthread_set_self(_QWORD *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
  __int64 result; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( a1 )
  {
    result = __thread_selfid(a1, a2, a3, a4, a5, a6, a7, a8);
    a1[27] = result;
    if ( result == -1 )
    {
      qword_9C1C0 = (__int64)"BUG IN LIBPTHREAD: failed to set thread_id";
      __break(1u);
    }
    else
    {
      if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return _thread_set_tsd_base(a1 + 28);
    }
  }
  else
  {
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return _pthread_set_self_dyld();
  }
  return result;
}
