__int64 __fastcall sub_E466C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi

  sub_1817FC0(a2, a1 + 208);
  result = sub_1817F10(a1 + 208);
  if ( !(_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 176);
    if ( v3 )
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 136LL))(v3, a2);
  }
  return result;
}

