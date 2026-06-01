bool __fastcall sub_6CBF50(__int64 a1)
{
  bool result; // al
  const char *v2; // rbx
  int v3; // edx
  int v4; // eax

  result = 0;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v2 = *(const char **)a1;
    v3 = strcmp(*(const char **)a1, "__return_address");
    result = 1;
    if ( v3 )
    {
      v4 = *(unsigned __int8 *)v2 - 32;
      if ( *v2 == 32 )
      {
        v4 = *((unsigned __int8 *)v2 + 1) - 114;
        if ( v2[1] == 114 )
          v4 = *((unsigned __int8 *)v2 + 2);
      }
      return v4 == 0;
    }
  }
  return result;
}
