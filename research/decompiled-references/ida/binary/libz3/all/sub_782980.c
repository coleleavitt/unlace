unsigned __int64 __fastcall sub_782980(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdi

  result = sub_781D20(a1);
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, a2);
  return result;
}

