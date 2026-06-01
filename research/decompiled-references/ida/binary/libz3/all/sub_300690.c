__int64 __fastcall sub_300690(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  result = sub_1863170(a1 + 160, a2);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL);
    if ( v4 == sub_2FF6A0 )
      return sub_1863170(v3 + 152, a2);
    else
      return v4(v3, a2);
  }
  return result;
}

