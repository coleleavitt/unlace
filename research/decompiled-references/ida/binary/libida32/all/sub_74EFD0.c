__int64 sub_74EFD0()
{
  char *v0; // rbx
  __int64 v1; // rbp
  __int64 result; // rax
  signed __int8 v3; // bp
  int v4; // edx
  unsigned int v5; // ecx
  char *v6; // rbx
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // edx

  v0 = qword_2CAA5C0;
  if ( !strchr(qword_2CAA5C0, 64) )
    goto LABEL_20;
  v1 = *v0;
  if ( (_BYTE)v1 != 95 && ((unsigned int)(char)v1 > 0x7F || ((*__ctype_b_loc())[v1] & 0x400) == 0) )
  {
    LODWORD(result) = sub_74EF70((unsigned __int8 *)v0);
    if ( (_DWORD)result )
      goto LABEL_6;
    goto LABEL_20;
  }
LABEL_5:
  LODWORD(result) = 1;
  do
  {
LABEL_6:
    v0 += (unsigned int)result;
    v3 = *v0;
    if ( *v0 == 95 || (unsigned int)v3 <= 0x7F && ((*__ctype_b_loc())[v3] & 8) != 0 )
      goto LABEL_5;
    result = sub_74EF70((unsigned __int8 *)v0);
  }
  while ( (_DWORD)result );
  if ( v3 != 64 )
    goto LABEL_20;
  v4 = v0[1];
  qword_2CAA5B0 = (__int64)v0;
  if ( (_BYTE)v4 == 64 )
  {
    v4 = v0[2];
    ++v0;
  }
  if ( (_BYTE)v4 == 48 )
  {
    if ( !v0[2] )
      return result;
LABEL_20:
    qword_2CAA5B0 = 0;
    return 0xFFFFFFFFLL;
  }
  if ( (unsigned __int8)(v4 - 48) > 9u )
    goto LABEL_20;
  v5 = 100;
  if ( *(v0 - 1) == 64 )
    v5 = 400;
  v6 = v0 + 1;
  v7 = v4 - 48;
  while ( 1 )
  {
    v8 = *++v6;
    if ( (unsigned __int8)(v8 - 48) > 9u )
      break;
    v7 = v8 + 10 * v7 - 48;
    if ( v7 >= v5 )
      goto LABEL_20;
  }
  if ( (_BYTE)v8 )
    goto LABEL_20;
  v9 = v7 % dword_2CAA5A8;
  result = v7 / dword_2CAA5A8;
  if ( v9 )
    goto LABEL_20;
  return result;
}

