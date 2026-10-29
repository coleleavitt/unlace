void __fastcall __noreturn _os_semaphore_dispose_cold_1(int a1)
{
  qword_9C1C0 = (__int64)"BUG IN CLIENT OF LIBPLATFORM: Destroying semaphore failed";
  qword_9C1F0 = a1;
  __break(1u);
}
