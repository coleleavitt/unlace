void __fastcall sub_3EFE40(__int64 a1)
{
  char *v2; // rdi
  char *v3; // rdx

  if ( !a1 )
    goto LABEL_9;
  v2 = (char *)qword_8D14A0;
  v3 = (char *)(qword_8D14A0 + 8 * xmmword_8D14A8);
  if ( (char *)qword_8D14A0 == v3 )
    goto LABEL_9;
  while ( *(_QWORD *)v2 != a1 )
  {
    v2 += 8;
    if ( v3 == v2 )
      goto LABEL_9;
  }
  if ( v3 == v2 )
  {
LABEL_9:
    if ( (_QWORD)xmmword_8D14A8 )
      return;
  }
  else
  {
    memmove(v2, v2 + 8, v3 - v2 - 8);
    *(_QWORD *)&xmmword_8D14A8 = xmmword_8D14A8 - 1;
    if ( (_QWORD)xmmword_8D14A8 )
      return;
  }
  sub_40B820();
}
