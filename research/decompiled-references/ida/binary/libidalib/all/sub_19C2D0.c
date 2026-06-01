bool __fastcall sub_19C2D0(unsigned __int8 *a1, char *a2)
{
  int v2; // r14d
  unsigned __int8 *v4; // r12
  unsigned __int8 v5; // bl
  unsigned __int8 v6; // bp
  const __int32_t **v7; // rax

  if ( a1 )
  {
    v2 = 0;
    v4 = a1;
    v5 = *a1;
    while ( 1 )
    {
      for ( ; (unsigned int)(char)v5 <= 0x7F; v5 = *++v4 )
      {
        if ( ((*__ctype_b_loc())[(char)v5] & 0x2004) == 0 )
          break;
      }
      v6 = *a2;
      if ( (unsigned int)*a2 > 0x7F )
        goto LABEL_9;
      if ( ((*__ctype_b_loc())[(char)v6] & 0x2004) != 0 )
      {
        ++a2;
      }
      else
      {
        if ( !v6 )
          return v2 > 0;
LABEL_9:
        v7 = __ctype_toupper_loc();
        if ( (*v7)[v6] != (*v7)[v5] || !v5 )
          return 0;
        ++v4;
        ++a2;
        ++v2;
        v5 = *v4;
      }
    }
  }
  return 0;
}

