__int64 __fastcall sub_5083A0(char a1)
{
  char *v2; // rdi
  char *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx

  v2 = (char *)qword_8D2330;
  v3 = (char *)(qword_8D2330 + 8 * xmmword_8D2338);
  if ( (char *)qword_8D2330 == v3 )
    return 0;
  v4 = qword_8D2330;
  while ( 1 )
  {
    v5 = *(_QWORD *)v4;
    if ( a1 == *(_BYTE *)(*(_QWORD *)v4 + 8LL) )
      break;
    v4 += 8;
    if ( v3 == (char *)v4 )
      return 0;
  }
  if ( !v5 )
    return 0;
  while ( v5 != *(_QWORD *)v2 )
  {
    v2 += 8;
    if ( v3 == v2 )
      return 0;
  }
  if ( v3 == v2 )
    return 0;
  memmove(v2, v2 + 8, v3 - v2 - 8);
  *(_QWORD *)&xmmword_8D2338 = xmmword_8D2338 - 1;
  return 1;
}
