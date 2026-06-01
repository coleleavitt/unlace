__int64 __fastcall sub_541BF0(__int64 a1)
{
  __int64 result; // rax

  result = xmmword_8D25B8;
  if ( *((_QWORD *)&xmmword_8D25B8 + 1) < (unsigned __int64)(xmmword_8D25B8 + 1) )
  {
    qword_8D25B0 = qvector_reserve(&qword_8D25B0, qword_8D25B0, xmmword_8D25B8 + 1, 8);
    result = xmmword_8D25B8;
  }
  *(_QWORD *)(qword_8D25B0 + 8 * xmmword_8D25B8) = a1;
  *(_QWORD *)&xmmword_8D25B8 = xmmword_8D25B8 + 1;
  return result;
}
