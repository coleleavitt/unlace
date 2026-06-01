__int64 __fastcall sub_541C50(__int64 a1)
{
  char *v2; // rdi
  char *v3; // rdx

  v2 = (char *)qword_8D25B0;
  v3 = (char *)(qword_8D25B0 + 8 * xmmword_8D25B8);
  if ( (char *)qword_8D25B0 == v3 )
    return 0;
  while ( *(_QWORD *)v2 != a1 )
  {
    v2 += 8;
    if ( v3 == v2 )
      return 0;
  }
  if ( v3 == v2 )
    return 0;
  memmove(v2, v2 + 8, v3 - v2 - 8);
  *(_QWORD *)&xmmword_8D25B8 = xmmword_8D25B8 - 1;
  return 1;
}
