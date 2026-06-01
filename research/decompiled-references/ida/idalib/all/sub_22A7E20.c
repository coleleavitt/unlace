char *__fastcall sub_22A7E20(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  bool v4; // zf
  char *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx

  if ( !a3 )
    goto LABEL_2;
  if ( a3 != 6
    || *(_DWORD *)a2 != 1769234798
    || *(_WORD *)(a2 + 4) != 25974
    || (result = (char *)sub_22A33B0(), !v8)
    || v8 == 7 && *(_DWORD *)result == 1701733735 && *((_WORD *)result + 2) == 26994 && result[6] == 99 )
  {
    result = sub_22A73E0(a2, a3);
    if ( v7 == 7 )
    {
      if ( *(_DWORD *)result == 1701733735 && *((_WORD *)result + 2) == 26994 && result[6] == 99 )
        goto LABEL_2;
    }
    else if ( v7 == 6 && *(_DWORD *)result == 1769234798 && *((_WORD *)result + 2) == 25974 )
    {
LABEL_2:
      if ( *(_DWORD *)(a1 + 44) == 20 )
      {
        return "pwr7";
      }
      else
      {
        v3 = *(_DWORD *)(a1 + 32);
        if ( v3 == 24 )
        {
          return "ppc64le";
        }
        else
        {
          v4 = v3 == 23;
          result = "ppc64";
          if ( !v4 )
            return (char *)"ppc";
        }
      }
    }
  }
  return result;
}
