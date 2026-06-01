unsigned __int64 __fastcall sanitize_file_name(char *s, __int64 a2)
{
  char *v2; // rbx
  char *v3; // r12
  char *v4; // rax
  char v5; // al
  char *v6; // rax
  char v7; // dl
  size_t v8; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdx

  v2 = s;
  while ( 1 )
  {
    v3 = strrchr(s, 47);
    v4 = strrchr(s, 92);
    if ( v4 >= v3 )
    {
      if ( !v4 )
        goto LABEL_11;
      v3 = v4;
    }
    v5 = v3[1];
    if ( (unsigned __int8)v5 > 0x1Fu )
      break;
    if ( (unsigned __int8)(v5 - 1) <= 0x1Eu )
    {
      v6 = v3 + 1;
      do
        v7 = *++v6;
      while ( (unsigned __int8)(v7 - 1) <= 0x1Eu );
      if ( v7 )
        break;
    }
    *v3 = 0;
  }
  v8 = strlen(v3);
  memmove(s, v3 + 1, v8);
LABEL_11:
  result = (unsigned __int8)*s;
  if ( (_BYTE)result )
    goto LABEL_14;
  if ( a2 )
  {
    qtmpnam(s);
    result = (unsigned __int8)*s;
    if ( (_BYTE)result )
    {
LABEL_14:
      v10 = 0x80000400FFFFFFFFLL;
      do
      {
        while ( (unsigned __int8)result > 0x3Fu )
        {
          if ( (((_BYTE)result - 91) & 0xFD) == 0 )
            goto LABEL_16;
LABEL_17:
          result = (unsigned __int8)*++v2;
          if ( !(_BYTE)result )
            return 1;
        }
        if ( _bittest64((const __int64 *)&v10, result) )
        {
LABEL_16:
          *v2 = 95;
          goto LABEL_17;
        }
        result = (unsigned __int8)*++v2;
      }
      while ( (_BYTE)result );
    }
    return 1;
  }
  return result;
}

