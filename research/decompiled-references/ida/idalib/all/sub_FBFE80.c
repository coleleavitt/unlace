char *__fastcall sub_FBFE80(int a1)
{
  _UNKNOWN **i; // rcx
  int v2; // eax

  if ( a1 == 1 )
    return "7.0";
LABEL_2:
  for ( i = &off_2B4D460; ; i += 4 )
  {
    v2 = *((_DWORD *)i + 10);
    if ( !v2 )
    {
      a1 = 0;
      goto LABEL_2;
    }
    if ( v2 == a1 )
      break;
  }
  return (char *)i[4];
}
