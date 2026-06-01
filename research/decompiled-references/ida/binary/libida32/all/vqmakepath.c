char *__fastcall vqmakepath(char *s, __int64 a2, const char *a3, int *a4)
{
  const char *v5; // rsi
  char *v6; // r13
  const char *v8; // r15
  int v9; // ebx
  char *v10; // rax
  int v11; // ecx
  char v12; // dl
  int v13; // esi
  unsigned int v14; // edx
  const char **v15; // rcx
  const char **v16; // rcx

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    goto LABEL_38;
  }
  if ( !s )
    return s;
  v5 = a3;
  v6 = &s[a2];
  if ( !a3 )
  {
    v10 = s;
LABEL_27:
    if ( v10 < v6 )
      goto LABEL_28;
    if ( !under_debugger )
      interr(519);
LABEL_38:
    BUG();
  }
  v8 = s;
  v9 = 0;
  while ( 1 )
  {
    if ( v5 != v8 )
      qustrncpy(v8, v5, v6 - v8);
    v10 = (char *)&v8[strlen(v8)];
    if ( s < v10 )
    {
      while ( 1 )
      {
        v12 = *(v10 - 1);
        v13 = v9;
        LOBYTE(v11) = v12 == 47;
        v9 = v11;
        LOBYTE(v9) = v12 == 92 || v12 == 47;
        if ( !(_BYTE)v9 )
          break;
        if ( s == --v10 )
          goto LABEL_12;
      }
      v9 = v13;
    }
LABEL_12:
    v14 = *a4;
    if ( (unsigned int)*a4 > 0x2F )
      break;
    v15 = (const char **)(*((_QWORD *)a4 + 2) + v14);
    *a4 = v14 + 8;
    v5 = *v15;
    if ( !*v15 )
      goto LABEL_22;
LABEL_16:
    while ( *v5 == 47 || *v5 == 92 )
      ++v5;
    if ( v10 >= v6 )
      goto LABEL_36;
    v8 = v10 + 1;
    *v10 = 47;
    if ( v10 + 1 >= v6 )
    {
      *(v6 - 1) = 0;
      v8 = v6 - 1;
    }
  }
  v16 = *((const char ***)a4 + 1);
  *((_QWORD *)a4 + 1) = v16 + 1;
  v5 = *v16;
  if ( *v16 )
    goto LABEL_16;
LABEL_22:
  if ( s != v10 || !(_BYTE)v9 )
    goto LABEL_27;
  if ( v10 >= v6 )
  {
LABEL_36:
    if ( !under_debugger )
      interr(518);
    goto LABEL_38;
  }
  *v10 = 47;
  if ( v10 + 1 >= v6 )
  {
    *(v6 - 1) = 0;
    v10 = v6 - 1;
    goto LABEL_27;
  }
  ++v10;
LABEL_28:
  *v10 = 0;
  return s;
}

