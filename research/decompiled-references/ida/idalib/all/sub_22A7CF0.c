char *__fastcall sub_22A7CF0(__int64 a1, __int64 a2, __int64 a3)
{
  char *result; // rax
  int v4; // edx
  __int64 v6; // rdx
  __int64 v7; // rdx

  if ( a3 )
  {
    if ( a3 == 6 && *(_DWORD *)a2 == 1769234798 && *(_WORD *)(a2 + 4) == 25974 )
    {
      result = (char *)sub_22A33B0();
      if ( v7 )
      {
        if ( v7 != 7 || *(_DWORD *)result != 1701733735 || *((_WORD *)result + 2) != 26994 || result[6] != 99 )
          return result;
      }
    }
    result = sub_22A73E0(a2, a3);
    if ( v6 == 7 )
    {
      if ( *(_DWORD *)result != 1701733735 || *((_WORD *)result + 2) != 26994 || result[6] != 99 )
        return result;
    }
    else if ( v6 != 6 || *(_DWORD *)result != 1769234798 || *((_WORD *)result + 2) != 25974 )
    {
      return result;
    }
  }
  result = "pwr7";
  if ( *(_DWORD *)(a1 + 44) != 20 )
  {
    v4 = *(_DWORD *)(a1 + 32);
    if ( v4 == 24 )
    {
      return "ppc64le";
    }
    else
    {
      result = (char *)"ppc";
      if ( v4 == 23 )
        return "ppc64";
    }
  }
  return result;
}
