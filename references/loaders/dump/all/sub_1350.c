__int64 __fastcall sub_1350(char *a1, _QWORD *a2)
{
  char *v2; // rbx
  unsigned int v3; // edi
  unsigned int v4; // r14d
  __int64 v5; // r12
  unsigned int v6; // edi
  char v7; // bp
  unsigned int v8; // edi
  char *v9; // rbp

  v2 = a1;
  v3 = *a1;
  if ( v3 <= 0x7F )
  {
    while ( 1 )
    {
      v4 = isspace(v3);
      if ( !v4 )
        break;
      v3 = *++v2;
      if ( v3 > 0x7F )
        goto LABEL_4;
    }
    if ( !*v2 )
      return v4;
  }
LABEL_4:
  v5 = 1;
  *a2 = v2;
  while ( 1 )
  {
    v6 = *v2;
    v7 = *v2;
    if ( v6 <= 0x7F )
      break;
LABEL_11:
    ++v2;
  }
  while ( 1 )
  {
    if ( !isspace(v6) )
    {
      if ( !v7 )
      {
LABEL_13:
        v4 = v5;
        v9 = v2;
        v8 = 0;
        goto LABEL_14;
      }
      goto LABEL_11;
    }
    if ( !v7 )
      goto LABEL_13;
    v8 = v2[1];
    *v2 = 0;
    v9 = v2 + 1;
    if ( v8 > 0x7F )
    {
LABEL_9:
      if ( ++v5 == 1025 )
        return 1024;
      goto LABEL_10;
    }
    v4 = v5;
    do
    {
LABEL_14:
      if ( !isspace(v8) )
      {
        if ( !*v9 )
          return v4;
        goto LABEL_9;
      }
      v8 = *++v9;
    }
    while ( v8 <= 0x7F );
    if ( ++v5 == 1025 )
      return 1024;
LABEL_10:
    v2 = v9;
    a2[v5 - 1] = v9;
    v7 = *v9;
    v6 = v7;
    if ( (unsigned int)v7 > 0x7F )
      goto LABEL_11;
  }
}
