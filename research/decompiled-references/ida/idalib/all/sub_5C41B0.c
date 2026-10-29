size_t __fastcall sub_5C41B0(char *s)
{
  char *v1; // rax
  _BYTE *v2; // rcx

  v1 = strrchr(s, 95);
  if ( v1 )
  {
    v2 = v1 + 1;
    while ( (unsigned __int8)(*v2 - 48) <= 9u )
    {
      if ( !*++v2 )
        return v1 - s;
    }
  }
  return strlen(s);
}
