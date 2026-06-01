__int64 __fastcall Z3_get_finite_domain_sort_size(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v5; // r13

  if ( !a3 )
  {
    Z3_get_sort_kind(a1, a2);
    return 0;
  }
  *a3 = 0;
  if ( (unsigned int)Z3_get_sort_kind(a1, a2) != 8 )
    return 0;
  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_299850(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !(unsigned __int8)sub_16256D0(a1 + 336, a2, a3) )
  {
    sub_1872CE0("");
    sub_1873130(114, 216);
  }
  if ( v5 )
    byte_1C7EBA0 = 1;
  return 1;
}

