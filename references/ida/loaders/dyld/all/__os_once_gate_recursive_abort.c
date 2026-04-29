void __fastcall __noreturn _os_once_gate_recursive_abort(unsigned int a1)
{
  qword_9C1C0 = (__int64)"BUG IN CLIENT OF LIBPLATFORM: Trying to recursively lock an os_once_t";
  qword_9C1F0 = a1;
  __break(1u);
}
