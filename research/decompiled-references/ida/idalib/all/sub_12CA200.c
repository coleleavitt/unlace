void __fastcall sub_12CA200(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v4; // eax

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 608LL))(a1);
  if ( v4 )
  {
    if ( v4 == 1 )
      sub_2221C70("linking libstdc++ is unimplemented on z/OS", 1);
  }
  else
  {
    sub_12C9880(a2, a3);
  }
}
