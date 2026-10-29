__int64 sub_22907D0()
{
  char *v0; // rax
  char *v1; // rbx
  size_t v2; // rax
  __int64 v4; // rax

  v0 = getenv("TERM");
  if ( !v0 )
    return 0;
  v1 = v0;
  v2 = strlen(v0);
  if ( v2 == 4 )
  {
    if ( *(_DWORD *)v1 == 1769172577 )
      return 1;
    goto LABEL_10;
  }
  if ( v2 == 6 )
  {
    if ( *(_DWORD *)v1 == 2003269987 && *((_WORD *)v1 + 2) == 28265 )
      return 1;
LABEL_18:
    if ( *(_DWORD *)v1 == 1701995379 && *((_WORD *)v1 + 2) == 28261 )
      return 1;
    goto LABEL_8;
  }
  if ( v2 != 5 )
  {
    if ( v2 <= 5 )
      return 0;
    goto LABEL_18;
  }
  if ( *(_DWORD *)v1 == 1970170220 && v1[4] == 120 )
    return 1;
LABEL_8:
  if ( *(_DWORD *)v1 == 1919251576 && v1[4] == 109 || *(_DWORD *)v1 == 808547446 && v1[4] == 48 )
    return 1;
LABEL_10:
  if ( *(_DWORD *)v1 != 1953921138 )
  {
    if ( v2 <= 4 )
      return 0;
    v4 = (__int64)&v1[v2 - 5];
    if ( *(_DWORD *)v4 != 1869377379 || *(_BYTE *)(v4 + 4) != 114 )
      return 0;
  }
  return 1;
}
