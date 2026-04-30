unsigned __int64 __fastcall sub_27DBC0(_QWORD *a1, const char *a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  sub_1E8570((__int64)(a1 + 78), a2);
  result = sub_1EA230((__int64)(a1 + 48));
  v4 = a1[111];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v4 + 264LL))(v4, a2);
  v5 = a1[112];
  if ( v5 )
    result = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v5 + 264LL))(v5, a2);
  v6 = a1[113];
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v6 + 264LL))(v6, a2);
  return result;
}
