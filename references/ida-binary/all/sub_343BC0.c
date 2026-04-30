unsigned __int64 __fastcall navigation_history_chooser_t__::vfunc_6(
        _QWORD *a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 result; // rax

  result = a1[26];
  if ( a5 < result )
  {
    result = sub_3437A0((__int64)a1, a2, a1[25] + 96 * a5);
    if ( a1[28] == a5 )
      *(_DWORD *)(a4 + 4) |= 1u;
  }
  else if ( a5 != result && a5 < result + a1[30] + 1 )
  {
    return sub_3437A0((__int64)a1, a2, a1[29] + 96 * (a5 - 1 - result));
  }
  return result;
}
