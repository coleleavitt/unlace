char **__fastcall sub_98AD80(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  char **result; // rax
  bool v4; // zf
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( sub_2246D90(v5, "error", 5, 0) != -1 )
    return (char **)&off_2B40260;
  if ( sub_2246D90(v5, "cancel", 6, 0) != -1 )
    return &off_2B40270;
  if ( sub_2246D90(v5, "shouldCall", 10, 0) != -1 )
    return &off_2B40280;
  if ( sub_2246D90(v5, "done", 4, 0) != -1 )
    return &off_2B40290;
  v2 = sub_2246D90(v5, "OK", 2, 0);
  result = (char **)&off_2B402A0;
  if ( v2 == -1 )
  {
    v4 = sub_2246D90(v5, "success", 7, 0) == -1;
    result = &off_2B402C0;
    if ( !v4 )
      return &off_2B402C0 - 2;
  }
  return result;
}
