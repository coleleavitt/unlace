char **__fastcall sub_967040(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  char **result; // rax
  bool v4; // zf
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( sub_2223050(v5, "error", 5, 0) != -1 )
    return (char **)&off_2B162C0;
  if ( sub_2223050(v5, "cancel", 6, 0) != -1 )
    return &off_2B162D0;
  if ( sub_2223050(v5, "shouldCall", 10, 0) != -1 )
    return &off_2B162E0;
  if ( sub_2223050(v5, "done", 4, 0) != -1 )
    return &off_2B162F0;
  v2 = sub_2223050(v5, "OK", 2, 0);
  result = (char **)&off_2B16300;
  if ( v2 == -1 )
  {
    v4 = sub_2223050(v5, "success", 7, 0) == -1;
    result = &off_2B16320;
    if ( !v4 )
      return &off_2B16320 - 2;
  }
  return result;
}

