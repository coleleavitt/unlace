__int64 __fastcall sub_1F4250(__int64 a1)
{
  char *v2; // rdi
  char *v3; // rdx

  v2 = (char *)qword_8CB520;
  v3 = (char *)(qword_8CB520 + 8 * xmmword_8CB528);
  if ( (char *)qword_8CB520 == v3 )
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
  *(_QWORD *)&xmmword_8CB528 = xmmword_8CB528 - 1;
  if ( a1 == qword_8CB510 )
    qword_8CB510 = 0;
  return 1;
}
