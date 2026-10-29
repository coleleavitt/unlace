__int64 __fastcall sub_1131C90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  const char *v5; // rsi

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 608LL))(a1);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result != 1 )
      return result;
    v5 = "-lstdc++";
    return sub_10DC5D0(a3, (__int64)v5);
  }
  sub_10DC5D0(a3, (__int64)"-lc++");
  result = sub_10DCD30(a2, 0x29Fu);
  v5 = "-lc++experimental";
  if ( result )
    return sub_10DC5D0(a3, (__int64)v5);
  return result;
}
