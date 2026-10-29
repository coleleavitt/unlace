__int64 __fastcall sub_1644B0(__int64 a1)
{
  char *v2; // rdi
  char *v3; // rdx

  v2 = (char *)qword_2544E0;
  v3 = (char *)(qword_2544E0 + 8 * xmmword_2544E8);
  if ( (char *)qword_2544E0 == v3 )
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
  *(_QWORD *)&xmmword_2544E8 = xmmword_2544E8 - 1;
  if ( a1 == qword_2544D0 )
    qword_2544D0 = 0;
  return 1;
}

