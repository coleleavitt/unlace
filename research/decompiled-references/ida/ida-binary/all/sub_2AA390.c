__int64 __fastcall sub_2AA390(__int64 a1, _QWORD *a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v5; // rsi
  __int64 result; // rax

  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 656LL))(a1, *a2 + 24LL, a3, a4);
  result = 0;
  if ( v5 != -1 )
  {
    get_nice_colored_name(*a2, v5, 2);
    return 1;
  }
  return result;
}
