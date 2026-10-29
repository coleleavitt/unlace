__int64 __fastcall sub_7FD50(__int64 *a1, _BYTE *a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // [rsp+38h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( !*a2 )
    return sub_7A780(a1, 0);
  if ( !(unsigned __int8)serialize_tinfo() )
  {
    if ( !under_debugger )
      sub_383060(51102);
    BUG();
  }
  v2 = a1[1];
  v3 = *a1;
  if ( a1[2] < (unsigned __int64)(v2 + 1) )
  {
    v5 = qvector_reserve();
    *a1 = v5;
    v3 = v5;
    v2 = a1[1];
  }
  *(_BYTE *)(v3 + v2) = -1;
  ++a1[1];
  sub_7FC40(a1, nullptr);
  sub_7FC40(a1, nullptr);
  return v6 - __readfsqword(0x28u);
}
