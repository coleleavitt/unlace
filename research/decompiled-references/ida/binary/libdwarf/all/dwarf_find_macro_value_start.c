_BYTE *__fastcall dwarf_find_macro_value_start(_BYTE *a1)
{
  char v1; // dl
  _BYTE *result; // rax
  int v3; // ecx

  v1 = *a1;
  result = a1;
  if ( *a1 )
  {
    v3 = 0;
    while ( v1 != 40 )
    {
      if ( v1 == 41 )
      {
        v1 = *++result;
        --v3;
        if ( !v1 )
          return result;
      }
      else
      {
        if ( v1 == 32 && !v3 )
          return ++result;
LABEL_5:
        v1 = *++result;
        if ( !v1 )
          return result;
      }
    }
    ++v3;
    goto LABEL_5;
  }
  return result;
}

