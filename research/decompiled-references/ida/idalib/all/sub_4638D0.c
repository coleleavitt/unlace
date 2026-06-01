_BOOL8 __fastcall sub_4638D0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi

  if ( a3 >= *(_QWORD *)(a1 + 48)
    || (v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * a3)) == 0
    || a3 >= *(_QWORD *)(a2 + 48)
    || (v4 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8 * a3)) == 0 )
  {
    if ( !under_debugger )
      interr(2662);
    BUG();
  }
  return !sub_463830(v3, v4);
}
