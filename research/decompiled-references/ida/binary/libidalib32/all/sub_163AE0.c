bool __fastcall sub_163AE0(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rdx

  v1 = (_QWORD *)qword_253310;
  v2 = (_QWORD *)(qword_253310 + 8 * xmmword_253318);
  if ( (_QWORD *)qword_253310 == v2 )
    return 0;
  while ( a1 != *v1 )
  {
    if ( v2 == ++v1 )
      return 0;
  }
  return v2 != v1;
}

