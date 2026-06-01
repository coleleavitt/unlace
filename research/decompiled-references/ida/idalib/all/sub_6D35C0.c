void __noreturn sub_6D35C0(__int64 a1, __int64 a2, ...)
{
  const char *v2; // rcx
  void *ptr; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v4; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-C0h]

  va_start(va, a2);
  v6 = __readfsqword(0x28u);
  ptr = nullptr;
  v4 = 0;
  sub_35A6C0((char **)&ptr);
  v2 = haystack;
  if ( (_QWORD)v4 )
    v2 = (const char *)ptr;
  sub_378C70(
    (__int64)"Upgrade failed: %s %s -> %s",
    *(const char **)(*(_QWORD *)a1 + 16LL),
    *(const char **)(*(_QWORD *)a1 + 24LL),
    v2);
}
