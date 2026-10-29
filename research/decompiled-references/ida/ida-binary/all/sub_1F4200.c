__int64 sub_1F4200()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rcx

  v0 = (_QWORD *)qword_8CB520;
  v1 = (_QWORD *)(qword_8CB520 + 8 * xmmword_8CB528);
  if ( (_QWORD *)qword_8CB520 == v1 )
    return 0;
  while ( qword_8CB510 != *v0 )
  {
    if ( v1 == ++v0 )
      return 0;
  }
  if ( v1 == v0 )
    return 0;
  else
    return qword_8CB510;
}
