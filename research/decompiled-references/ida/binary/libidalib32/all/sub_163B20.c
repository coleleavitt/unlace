__int64 sub_163B20()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rcx

  v0 = (_QWORD *)qword_253310;
  v1 = (_QWORD *)(qword_253310 + 8 * xmmword_253318);
  if ( (_QWORD *)qword_253310 == v1 )
    return 0;
  while ( qword_253300 != *v0 )
  {
    if ( v1 == ++v0 )
      return 0;
  }
  if ( v1 == v0 )
    return 0;
  else
    return qword_253300;
}

