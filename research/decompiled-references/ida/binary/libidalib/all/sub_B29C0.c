int *__fastcall sub_B29C0(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  int *result; // rax
  int *v5; // rsi

  result = sub_AF5F0(xmmword_251F20, 3u, a1, a2);
  if ( result )
  {
    *((_QWORD *)result + 3) = a3;
    v5 = result;
    result = (int *)qword_252000;
    if ( qword_252000 )
      return (int *)qword_252000(xmmword_251F20, v5);
  }
  return result;
}

