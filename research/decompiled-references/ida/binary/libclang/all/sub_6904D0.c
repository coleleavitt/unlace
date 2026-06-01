char *__fastcall sub_6904D0(const char *a1)
{
  if ( a1 )
  {
    if ( *a1 )
      return strdup(a1);
    else
      return (char *)&byte_3B9466E;
  }
  return (char *)a1;
}

