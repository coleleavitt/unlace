bool __fastcall sub_99D10(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rdx

  v1 = (_QWORD *)qword_250930;
  v2 = (_QWORD *)(qword_250930 + 8 * xmmword_250938);
  if ( (_QWORD *)qword_250930 == v2 )
    return 0;
  while ( a1 != *v1 )
  {
    if ( v2 == ++v1 )
      return 0;
  }
  return v2 != v1;
}

