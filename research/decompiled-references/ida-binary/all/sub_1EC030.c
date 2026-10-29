__int64 __fastcall sub_1EC030(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi

  v2 = a1[111];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 152LL))(v2, 0, 0);
  v4 = a1[112];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 152LL))(v4, 0, 0);
  v5 = a1[113];
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 152LL))(v5, 0, 0);
  return result;
}
