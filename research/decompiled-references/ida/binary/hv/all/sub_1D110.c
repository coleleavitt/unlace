__int64 sub_1D110(__int64 a1, ...)
{
  const char *v1; // rsi
  void *ptr; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v4; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-C0h]

  va_start(va, a1);
  v6 = __readfsqword(0x28u);
  ptr = nullptr;
  v4 = 0;
  sub_17CB0((char **)&ptr);
  v1 = haystack;
  if ( (_QWORD)v4 )
    v1 = (const char *)ptr;
  sub_8F890(0, v1);
  if ( ptr )
  {
    *(_QWORD *)&v4 = 0;
    j__free(ptr);
  }
  return 33;
}

