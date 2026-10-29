__int64 __fastcall sub_7D3190(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = sub_798D40(a1);
  v3 = *(_QWORD *)(result + 18200);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 80LL))(v3, *(_QWORD *)(a1 + 72), 0);
  return result;
}

