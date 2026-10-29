__int64 __fastcall sub_52B420(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  unsigned int v6; // edx

  v4 = (_QWORD *)sub_5CAA10(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 1672LL));
  if ( !v4 || *v4 != a3 )
    return 0;
  LOBYTE(v6) = get_ea_name(a2, a3, 0, 0) > 0;
  return v6;
}
