__int64 __fastcall sub_BBDBF0(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi

  result = sub_B8C330(a1);
  v4 = *(_QWORD *)(result + 18360);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 80LL))(v4, *(_QWORD *)(a1 + 72), a2);
  return result;
}
