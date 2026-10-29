char **__fastcall sub_10B3E10(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = a1[1];
  v2 = *a1;
  if ( v1 != 3 )
  {
    if ( v1 == 13 )
    {
      if ( *(_QWORD *)v2 == 0x676E696465656C62LL && *(_DWORD *)(v2 + 8) == 1734632749 && *(_BYTE *)(v2 + 12) == 101 )
        return &off_2B61010;
    }
    else if ( v1 == 7 )
    {
      if ( *(_DWORD *)v2 == 1701733735 && *(_WORD *)(v2 + 4) == 26994 && *(_BYTE *)(v2 + 6) == 99 )
        return (char **)&off_2B61020;
    }
    else if ( v1 == 5 && *(_DWORD *)v2 == 1701669228 && *(_BYTE *)(v2 + 4) == 49 )
    {
      return &off_2B61030;
    }
    return (char **)&off_2B61040;
  }
  if ( *(_WORD *)v2 != 30317 || *(_BYTE *)(v2 + 2) != 112 )
    return (char **)&off_2B61040;
  return &off_2B61000;
}
