unsigned __int64 __fastcall sub_6A2F50(__int64 a1)
{
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v3; // [rsp+8h] [rbp-30h]
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  ptr = nullptr;
  v3 = 0;
  if ( a1 >= 0 )
  {
    sub_3573A0((char **)&ptr);
    if ( (a1 & 7) != 0 )
      sub_357520((__int64 *)&ptr);
  }
  else
  {
    sub_3573A0((char **)&ptr);
  }
  set_error_string();
  if ( ptr )
  {
    *(_QWORD *)&v3 = 0;
    qfree(ptr);
  }
  return v4 - __readfsqword(0x28u);
}

