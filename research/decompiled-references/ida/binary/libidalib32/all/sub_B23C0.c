_DWORD *__fastcall sub_B23C0(unsigned int a1, unsigned int a2, int a3)
{
  _DWORD *result; // rax
  _DWORD *v5; // rsi

  result = (_DWORD *)sub_AEF10(xmmword_250E60, 2u, a1, a2);
  if ( result )
  {
    result[6] = a3;
    v5 = result;
    result = qword_250F40;
    if ( qword_250F40 )
      return (_DWORD *)qword_250F40(xmmword_250E60, v5);
  }
  return result;
}

