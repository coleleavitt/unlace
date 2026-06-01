__int64 sub_8DB5A0(unsigned int a1, __int64 a2, ...)
{
  void *ptr; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v4; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-C0h]

  va_start(va, a2);
  v6 = __readfsqword(0x28u);
  ptr = nullptr;
  v4 = 0;
  sub_3572D0((char **)&ptr);
  set_error_string();
  if ( ptr )
  {
    *(_QWORD *)&v4 = 0;
    qfree(ptr);
  }
  return a1;
}

