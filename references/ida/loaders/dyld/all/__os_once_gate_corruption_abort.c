void __fastcall __noreturn _os_once_gate_corruption_abort(unsigned int a1)
{
  qword_9C1C0 = (__int64)"BUG IN CLIENT OF LIBPLATFORM: os_once_t is corrupt";
  qword_9C1F0 = a1;
  __break(1u);
}
