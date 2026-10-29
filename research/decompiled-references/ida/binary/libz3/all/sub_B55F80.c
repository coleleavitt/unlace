_QWORD *__fastcall sub_B55F80(_QWORD *a1)
{
  _QWORD *result; // rax

  *a1 = &off_1C574A0;
  result = (_QWORD *)a1[5];
  if ( result )
  {
    if ( result != a1 + 7 )
      return (_QWORD *)sub_186B220(result);
  }
  return result;
}

