unsigned __int64 __fastcall sub_6C3C60(__int64 a1)
{
  const char *v1; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v4; // [rsp+8h] [rbp-30h]
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  ptr = nullptr;
  v4 = 0;
  if ( a1 >= 0 )
  {
    sub_35A790((char **)&ptr);
    if ( (a1 & 7) != 0 )
      sub_35A910((__int64 *)&ptr);
  }
  else
  {
    sub_35A790((char **)&ptr);
  }
  v1 = haystack;
  if ( (_QWORD)v4 )
    v1 = (const char *)ptr;
  set_error_string(0, v1);
  if ( ptr )
  {
    *(_QWORD *)&v4 = 0;
    qfree(ptr);
  }
  return v5 - __readfsqword(0x28u);
}
