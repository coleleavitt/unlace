__int64 __fastcall sub_81A6B0(char *s, char *a2, char a3)
{
  char *v3; // r14
  char v5; // al
  int v6; // r13d
  char *v7; // rax
  unsigned int v8; // ebx

  v3 = s;
  v5 = *s;
  if ( *s == 47 )
  {
    v5 = s[1];
    v3 = s + 1;
  }
  v6 = a3 & 1;
  while ( v5 != 46 || *a2 == 46 || !v6 )
  {
    v8 = sub_81A560(v3, a2, a3);
    if ( (_BYTE)v8 )
      return v8;
    v7 = strchr(v3, 47);
    if ( !v7 )
      return v8;
    v3 = v7 + 1;
    v5 = v7[1];
  }
  return 0;
}

