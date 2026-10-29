void __fastcall __noreturn _os_unfair_lock_corruption_abort(unsigned int a1)
{
  if ( a1 - 512 <= 0x3FE00 )
  {
    qword_9C1C0 = (__int64)"BUG IN CLIENT OF LIBPLATFORM: os_unfair_lock is corrupt, or owner thread exited without unlocking";
    qword_9C1F0 = a1;
    __break(1u);
  }
  qword_9C1C0 = (__int64)"BUG IN CLIENT OF LIBPLATFORM: os_unfair_lock is corrupt";
  qword_9C1F0 = a1;
  __break(1u);
}
