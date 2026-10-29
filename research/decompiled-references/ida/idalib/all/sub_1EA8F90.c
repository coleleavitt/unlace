__int64 __fastcall sub_1EA8F90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 v4; // rdi

  v2 = a1 - 24;
  *(_QWORD *)(a1 + 128) = a2;
  if ( a2 )
    result = sub_1F37FE0(a1 - 24);
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, v2);
  return result;
}
