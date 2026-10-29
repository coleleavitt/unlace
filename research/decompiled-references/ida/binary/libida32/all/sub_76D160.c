bool __fastcall sub_76D160(__int64 a1)
{
  const char *v2; // rax

  if ( a1 && *(_BYTE *)a1 == 7 )
  {
    v2 = haystack;
    if ( *(_QWORD *)(a1 + 16) )
      v2 = *(const char **)(a1 + 8);
    find_idc_gvar(v2);
  }
  return (unsigned int)set_idcv_attr() == 0;
}

