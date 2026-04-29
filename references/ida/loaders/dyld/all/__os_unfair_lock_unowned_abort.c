void __fastcall __noreturn _os_unfair_lock_unowned_abort(unsigned int a1)
{
  qword_9C1C0 = (__int64)"BUG IN CLIENT OF LIBPLATFORM: Unlock of an os_unfair_lock not owned by current thread";
  qword_9C1F0 = a1;
  __break(1u);
}
