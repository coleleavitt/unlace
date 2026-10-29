__int16 __fastcall sub_19CA40(char *s1)
{
  const char **v1; // rbp
  int i; // ebx
  char *v3; // rax
  char **v4; // rbx
  size_t v5; // rbp
  int v6; // ebx
  int v8; // [rsp+0h] [rbp-48h] BYREF
  char v9; // [rsp+4h] [rbp-44h]
  char v10; // [rsp+5h] [rbp-43h]
  char v11; // [rsp+6h] [rbp-42h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !s1 )
  {
LABEL_6:
    LOWORD(v3) = 0;
    return (__int16)v3;
  }
  v1 = (const char **)&off_2360A8;
  for ( i = 0; i != 83; ++i )
  {
    if ( !strcasecmp(s1, *v1) )
    {
      LOWORD(v3) = *((_WORD *)&unk_2360A0 + 8 * i);
      return (__int16)v3;
    }
    v1 += 2;
  }
  qstrncpy();
  qstrupr();
  if ( v8 == 1280463939 && v9 == 45 && !v11 )
  {
    if ( (unsigned __int8)(v10 - 65) <= 0x19u )
    {
      LOWORD(v3) = getAltCode(v10) + (char)(v10 - 64);
      return (__int16)v3;
    }
    goto LABEL_6;
  }
  if ( BYTE1(v8) )
  {
    v4 = &off_236060;
    if ( v8 != 760499265 || v10 )
    {
LABEL_12:
      while ( 1 )
      {
        v5 = *((unsigned __int16 *)v4 + 4);
        if ( !strncmp((const char *)&v8, *v4, v5) )
          break;
        v4 += 2;
        if ( v4 == (char **)&unk_2360A0 )
          goto LABEL_6;
      }
      v6 = *((unsigned __int16 *)v4 + 5);
      LODWORD(v3) = v6 + (((unsigned int)strtol((const char *)&v8 + v5, nullptr, 10) - 1) << 8);
    }
    else
    {
      v3 = strchr("QWERTYUIOP    ASDFGHJKL     ZXCVBNM", v9);
      if ( v3 )
      {
        LOWORD(v3) = (((_WORD)v3 - (unsigned __int16)"QWERTYUIOP    ASDFGHJKL     ZXCVBNM") << 8) + 4096;
      }
      else
      {
        if ( (unsigned __int8)(v9 - 48) > 9u )
          goto LABEL_12;
        LOWORD(v3) = -32512;
        if ( v9 != 48 )
          LOWORD(v3) = (v9 << 8) + 18176;
      }
    }
  }
  else
  {
    LOWORD(v3) = (*__ctype_toupper_loc())[(unsigned __int8)*s1];
  }
  return (__int16)v3;
}

