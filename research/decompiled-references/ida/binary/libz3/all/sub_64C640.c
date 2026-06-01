__int64 __fastcall sub_64C640(__int64 a1, std::ostream *a2)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = sub_63C8E0((__int64 *)(a1 + 2360), a2);
  v3 = *(_QWORD *)(a1 + 2968);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, std::ostream *))(*(_QWORD *)v3 + 248LL))(v3, a2);
  return result;
}

