__int64 __fastcall _pthread_set_self_dyld(
        void *a1,
        void *a2,
        void *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7,
        void *a8)
{
  __int64 result; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  result = __thread_selfid(a1, a2, a3, a4, a5, a6, a7, a8);
  qword_A9ED8 = result;
  if ( result == -1 )
  {
    qword_9C1C0 = (__int64)"BUG IN LIBPTHREAD: failed to set thread_id";
    __break(1u);
  }
  else
  {
    qword_A9EE0 = (__int64)&_main_thread;
    qword_A9EE8 = (__int64)&unk_A9EAC;
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return _thread_set_tsd_base(&qword_A9EE0);
  }
  return result;
}
