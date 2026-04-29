void __fastcall __noreturn os_unfair_lock_assert_not_owner_cold_1(unsigned int a1)
{
  qword_9C1C0 = (__int64)"BUG IN CLIENT OF LIBPLATFORM: Assertion failed: Lock unexpectedly owned by current thread";
  qword_9C1F0 = a1;
  __break(1u);
}
