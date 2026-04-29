void __noreturn dyld_halt(char *a1, ...)
{
  __int64 v2; // x0
  const char *v3; // x19
  __int64 v4; // x20

  v2 = _simple_salloc(a1);
  if ( v2 )
  {
    v4 = v2;
    _simple_vsprintf(v2, a1);
    v3 = (const char *)_simple_string(v4);
  }
  else
  {
    v3 = "panic: [failed to allocate panic message]";
  }
  if ( __getpid() == 1 )
    __syscall(55, 3072, v3);
  qword_9C1C0 = (__int64)v3;
  __break(1u);
}
