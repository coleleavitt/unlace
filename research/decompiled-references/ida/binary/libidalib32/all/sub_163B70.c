__int64 __fastcall sub_163B70(__int64 a1)
{
  char *v2; // rdi
  char *v3; // rdx

  v2 = (char *)qword_253310;
  v3 = (char *)(qword_253310 + 8 * xmmword_253318);
  if ( (char *)qword_253310 == v3 )
    return 0;
  while ( a1 != *(_QWORD *)v2 )
  {
    v2 += 8;
    if ( v3 == v2 )
      return 0;
  }
  if ( v3 == v2 )
    return 0;
  memmove(v2, v2 + 8, v3 - v2 - 8);
  *(_QWORD *)&xmmword_253318 = xmmword_253318 - 1;
  if ( a1 == qword_253300 )
    qword_253300 = 0;
  return 1;
}

