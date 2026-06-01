int *__fastcall sub_221F70(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  int *result; // rax
  int *v5; // rsi

  result = sub_21EBB0((__m128i *)qword_8CBAA0, 2u, a1, a2);
  if ( result )
  {
    *((_QWORD *)result + 3) = a3;
    v5 = result;
    result = (int *)qword_8CBB80;
    if ( qword_8CBB80 )
      return (int *)qword_8CBB80(qword_8CBAA0, v5);
  }
  return result;
}
