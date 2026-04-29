__int64 __fastcall sub_32BFE0(const char **a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  const char *v4; // rdx
  _QWORD *module_data; // rcx

  if ( !a2 )
  {
    module_data = (_QWORD *)get_module_data((unsigned int)dword_4CF8F8);
LABEL_12:
    result = module_data[51];
    v4 = s1;
    if ( module_data[54] )
      v4 = (const char *)module_data[53];
    goto LABEL_5;
  }
  result = a2[61];
  v3 = a2[63];
  if ( result != -1 )
  {
    v4 = s1;
    if ( v3 )
      v4 = (const char *)a2[62];
    goto LABEL_5;
  }
  result = a2[5];
  v4 = s1;
  if ( v3 )
    v4 = (const char *)a2[62];
  if ( result == -1 )
  {
    module_data = (_QWORD *)a2[187];
    goto LABEL_12;
  }
LABEL_5:
  if ( a1 )
    *a1 = v4;
  return result;
}
