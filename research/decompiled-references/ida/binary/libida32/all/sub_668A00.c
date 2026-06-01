char *__fastcall sub_668A00(char *a1, _DWORD *a2)
{
  char *v2; // rbp
  unsigned int v3; // edi
  unsigned __int8 v4; // r12
  unsigned __int8 i; // bl
  unsigned __int8 v7; // r12

  v2 = a1;
  *a2 = 0;
  v3 = *a1;
  if ( v3 <= 0x7F )
  {
    v4 = v3;
    for ( i = v3; isxdigit(v3); v3 = (char)i )
    {
      ++v2;
      if ( i > 0x39u )
      {
        v7 = v4 - 32;
        if ( i > 0x60u )
          i = v7;
        i -= 7;
      }
      *a2 = 16 * *a2 + i - 48;
      i = *v2;
      v4 = *v2;
      if ( (unsigned int)*v2 > 0x7F )
        break;
    }
  }
  return v2;
}

