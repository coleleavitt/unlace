__int64 sub_65D40(unsigned int a1, __int64 a2, ...)
{
  void *ptr; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v4; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-C0h]

  va_start(va, a2);
  v6 = __readfsqword(0x28u);
  ptr = nullptr;
  v4 = 0;
  sub_17CB0((char **)&ptr);
  sub_8F890(0, ptr);
  if ( ptr )
  {
    *(_QWORD *)&v4 = 0;
    j__free(ptr);
  }
  return a1;
}

