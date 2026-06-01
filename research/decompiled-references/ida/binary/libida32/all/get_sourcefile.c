_QWORD *__fastcall get_sourcefile(unsigned int a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_4EE820(*(_QWORD *)(qword_2CA1698 + 1480) + 1288LL, a1);
  if ( result )
  {
    if ( a2 )
      *a2 = *result;
    return (_QWORD *)result[1];
  }
  return result;
}

