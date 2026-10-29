bool __fastcall sub_78D5A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const char *v7; // rax
  __int64 idc_gvar; // rax
  __int64 v9; // [rsp+8h] [rbp-10h]

  if ( a1 && *(_BYTE *)a1 == 7 )
  {
    v7 = haystack;
    if ( *(_QWORD *)(a1 + 16) )
      v7 = *(const char **)(a1 + 8);
    v9 = a3;
    idc_gvar = find_idc_gvar(v7);
    a3 = v9;
    a1 = idc_gvar;
  }
  return (unsigned int)set_idcv_attr(a1, a2, a3, 0, a5, a6) == 0;
}
