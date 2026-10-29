void __noreturn sub_57DAD0(__int64 a1, ...)
{
  void *ptr; // [rsp+0h] [rbp-108h] BYREF
  __int128 v2; // [rsp+8h] [rbp-100h]
  gcc_va_list va; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v4; // [rsp+38h] [rbp-D0h]
  __int64 v5; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v6; // [rsp+48h] [rbp-C0h]

  va_start(va, a1);
  v6 = __readfsqword(0x28u);
  v4 = 0x74726F627E417ELL;
  v5 = 0x797274657E527ELL;
  ptr = nullptr;
  v2 = 0;
  sub_3572D0((char **)&ptr);
  sub_383E70();
}

