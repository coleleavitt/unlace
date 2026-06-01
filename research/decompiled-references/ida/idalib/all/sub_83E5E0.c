char __fastcall sub_83E5E0(char *s, char *a2, char a3)
{
  signed __int8 *v3; // r12
  char result; // al
  char *v6; // rax
  char *v7; // rax

  v3 = s;
  if ( (a3 & 1) != 0 )
  {
    v6 = strchr(a2, 47);
    if ( !v6 )
      return sub_83DA70(s, a2, a3);
LABEL_5:
    if ( v6[1] )
      return sub_83D920(&s[*s == 47], &a2[*a2 == 47], a3);
    return sub_83DA70(s, a2, a3);
  }
  result = *a2 == 47 || *a2 == 42;
  if ( !result || a2[1] )
  {
    v6 = strchr(a2, 47);
    if ( v6 )
      goto LABEL_5;
    v7 = strrchr(s, 47);
    if ( v7 )
      v3 = v7 + 1;
    return sub_83D7C0(v3, (unsigned __int8 *)a2);
  }
  return result;
}
