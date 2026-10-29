void __fastcall sub_5A0EB0(char *s, char a2)
{
  char v2; // bp
  char *v3; // rbx
  int v4; // r12d
  int v5; // r14d
  char v6; // r15
  int v7; // eax
  char *v8; // rdx
  char v9; // al
  bool v10; // zf
  char v11; // [rsp+Fh] [rbp-39h]

  v2 = *s;
  if ( !*s )
    return;
  v3 = s;
  v4 = 0;
  do
  {
    while ( 1 )
    {
      v5 = v2;
      v6 = v3[1];
      if ( (unsigned int)v2 <= 0x7F )
        break;
      if ( a2 )
        goto LABEL_4;
LABEL_32:
      v11 = v2;
      v2 = v6;
      if ( v4 && strchr(" [](),*&", v5) )
        goto LABEL_6;
      v2 = v11;
LABEL_13:
      if ( v3 - s <= 7 || strncmp(v3 - 8, "operator", 8u) )
        goto LABEL_4;
      if ( strchr(" +-*/%&!^", v5) )
        goto LABEL_16;
      if ( v2 == 40 )
      {
        if ( v6 == 41 )
          goto LABEL_39;
LABEL_4:
        v2 = v6;
        goto LABEL_5;
      }
      v10 = v2 == 91;
      v2 = v6;
      if ( v10 && v6 == 93 )
      {
LABEL_39:
        v2 = v3[2];
        ++v3;
        goto LABEL_6;
      }
LABEL_5:
      *v3 = 95;
LABEL_6:
      ++v3;
      if ( !v2 )
        goto LABEL_17;
    }
    while ( 1 )
    {
      v7 = isalnum(v5);
      if ( v2 == 95 || v7 )
        break;
      if ( a2 )
        goto LABEL_4;
      if ( v2 == 58 )
      {
        if ( v6 != 58 )
          goto LABEL_13;
        v2 = v3[2];
        if ( v2 == 58 )
          goto LABEL_13;
        v8 = v3 + 2;
        if ( !v2 )
          goto LABEL_17;
        v5 = v2;
        v9 = v3[3];
        if ( (unsigned int)v2 > 0x7F )
          goto LABEL_31;
        v6 = v3[2];
        v3 += 2;
      }
      else
      {
        if ( v2 == 126 && s < v3 )
        {
          if ( *(v3 - 1) != 58 )
            goto LABEL_13;
          v8 = v3 + 1;
          if ( !v6 )
            goto LABEL_17;
        }
        else if ( v2 == 60 )
        {
          ++v4;
          v8 = v3 + 1;
          if ( !v6 )
            goto LABEL_17;
        }
        else
        {
          if ( v2 != 62 || v4 <= 0 )
            goto LABEL_32;
          --v4;
          v8 = v3 + 1;
          if ( !v6 )
            goto LABEL_17;
        }
        v5 = v6;
        v9 = v3[2];
        if ( (unsigned int)v6 > 0x7F )
        {
          v2 = v6;
LABEL_31:
          v6 = v9;
          v3 = v8;
          goto LABEL_32;
        }
        v3 = v8;
      }
      v2 = v6;
      v6 = v9;
    }
LABEL_16:
    v2 = v6;
    ++v3;
  }
  while ( v6 );
LABEL_17:
  while ( v4 )
  {
    *strrchr(s, 60) = 95;
    --v4;
  }
}
