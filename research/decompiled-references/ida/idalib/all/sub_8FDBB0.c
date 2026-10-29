__int64 __fastcall sub_8FDBB0(char *haystack)
{
  char v2; // cl
  char *v3; // rdx
  char v4; // al
  char v5; // cl
  char v6; // cl
  char v7; // cl

  if ( !haystack || !*haystack || strchr(haystack, 10) || strchr(haystack, 35) || (unsigned __int8)sub_8FDB30(haystack) )
  {
LABEL_5:
    set_error_string(0, haystack);
    return 7;
  }
  else if ( *haystack == 47 && (v2 = haystack[1], v3 = haystack + 1, v2 == 47) )
  {
    v4 = haystack[2];
    while ( v2 == 47 )
    {
      if ( v4 == 47 )
        goto LABEL_5;
      if ( v4 != 46 )
        break;
      v6 = v3[2];
      if ( !v6 || v6 == 47 )
        goto LABEL_5;
      while ( 1 )
      {
        ++v3;
        v2 = 46;
LABEL_15:
        v4 = v3[1];
        if ( v2 != 46 )
          break;
        if ( v4 != 46 )
          goto LABEL_13;
        v5 = *(v3 - 1);
        if ( !v5 || v5 == 47 )
        {
          v7 = v3[2];
          if ( v7 == 47 || !v7 )
            goto LABEL_5;
        }
      }
    }
LABEL_13:
    ++v3;
    if ( v4 )
    {
      v2 = v4;
      goto LABEL_15;
    }
    return 0;
  }
  else
  {
    set_error_string(0, haystack);
    return 42;
  }
}
