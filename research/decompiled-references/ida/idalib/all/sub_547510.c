__int64 __fastcall sub_547510(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rbx

  v4 = *a2;
  clear_tinfo_t(a2);
  v5 = *(_QWORD *)(a1[18] + 8 * sub_533EC0(*a1, a2, v4));
  if ( !(unsigned __int8)sub_546C50(v5, a3) )
  {
    if ( !under_debugger )
      interr(2982);
    BUG();
  }
  return v5;
}
