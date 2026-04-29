bool __fastcall sub_B9EA0(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v3; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v4[5]; // [rsp+10h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( a1[1] != 2 )
  {
    if ( !under_debugger )
      sub_37E160(50962);
LABEL_15:
    BUG();
  }
  if ( !(unsigned __int8)sub_11BB80(*a1, &v3, 0) )
  {
    if ( !under_debugger )
      sub_37E160(50961);
    goto LABEL_15;
  }
  v1 = v3;
  if ( !v3 )
  {
    if ( !under_debugger )
      sub_37E160(50963);
    goto LABEL_15;
  }
  if ( !(unsigned __int8)sub_11BB80(*a1 + 80LL, v4, 0) || v4[0] != SLODWORD(v4[0]) )
  {
    if ( !under_debugger )
      sub_37E160(50960);
    goto LABEL_15;
  }
  return sub_B9DF0(v1, v4[0]) != 0;
}
