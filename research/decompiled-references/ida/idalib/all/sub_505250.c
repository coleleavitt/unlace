unsigned __int64 sub_505250(__int64 a1, __int64 a2, ...)
{
  void *ptr; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v4; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-C0h]

  v6 = __readfsqword(0x28u);
  if ( (*(_DWORD *)&debug & 0x8000000) != 0 )
  {
    va_start(va, a2);
    ptr = nullptr;
    v4 = 0;
    sub_35A6C0((char **)&ptr);
    sub_368890();
  }
  return v6 - __readfsqword(0x28u);
}
