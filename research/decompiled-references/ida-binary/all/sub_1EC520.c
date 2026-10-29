unsigned __int64 __fastcall sub_1EC520(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  bool v5; // sf
  unsigned __int64 result; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 8LL))(a2, a1[91]);
  v3 = a1[88];
  v4 = v3 * (v2 - a1[89]) / (a1[90] - a1[89]);
  if ( v3 > v4 )
    v3 = v4;
  v5 = v4 < 0;
  result = 0;
  if ( !v5 )
    return v3;
  return result;
}
