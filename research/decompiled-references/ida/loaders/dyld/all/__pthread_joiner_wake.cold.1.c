void __fastcall __noreturn _pthread_joiner_wake_cold_1(int a1)
{
  qword_9C1C0 = (__int64)"BUG IN LIBPTHREAD: pthread_join() wake failure";
  qword_9C1F0 = -a1;
  __break(1u);
}
