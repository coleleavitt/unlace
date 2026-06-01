void __fastcall __noreturn __stack_chk_fail(__int64 a1, const char *a2)
{
  dyld4::halt((dyld4 *)"stack buffer overrun", a2);
}
