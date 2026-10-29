__int64 __fastcall dwarf_ignorethissection(char *s1)
{
  size_t v1; // rax
  const char *v2; // r15
  int v3; // r14d
  int v4; // ebp
  int v5; // ebx
  int v6; // r14d
  int v7; // eax

  v1 = 4;
  v2 = ".plt";
  v3 = 19;
  v4 = 19;
  v5 = 0;
  while ( 1 )
  {
    v6 = v3 / 2;
    v7 = strncmp(s1, v2, v1);
    if ( v7 >= 0 )
      break;
    v4 = v6 - 1;
    if ( v5 > v6 - 1 )
      return 0;
LABEL_4:
    v3 = v5 + v4;
    v2 = off_B75E0[(v5 + v4) / 2];
    v1 = strlen(v2);
  }
  if ( v7 )
  {
    v5 = v6 + 1;
    if ( v6 + 1 > v4 )
      return 0;
    goto LABEL_4;
  }
  return 1;
}

