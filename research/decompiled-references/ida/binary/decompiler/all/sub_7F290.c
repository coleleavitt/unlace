unsigned __int64 __fastcall sub_7F290(__int64 *a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  if ( !(unsigned __int8)append_argloc() )
  {
    if ( !under_debugger )
      sub_37EA20(52148);
    BUG();
  }
  sub_7EA60(a1, 0, 0);
  return v2 - __readfsqword(0x28u);
}
