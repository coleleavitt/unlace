_QWORD *__fastcall sub_10D8800(_QWORD **a1, _QWORD *a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdx

  result = *a1;
  if ( a2 != *a1 && !*result )
  {
    ++result;
    while ( 1 )
    {
      v3 = result;
      if ( a2 == result )
        break;
      if ( *result++ )
      {
        *a1 = v3;
        return result;
      }
    }
    *a1 = a2;
  }
  return result;
}
