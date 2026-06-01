__int64 sub_164460()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rcx

  v0 = (_QWORD *)qword_2544E0;
  v1 = (_QWORD *)(qword_2544E0 + 8 * xmmword_2544E8);
  if ( (_QWORD *)qword_2544E0 == v1 )
    return 0;
  while ( qword_2544D0 != *v0 )
  {
    if ( v1 == ++v0 )
      return 0;
  }
  if ( v1 == v0 )
    return 0;
  else
    return qword_2544D0;
}

