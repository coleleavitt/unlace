struct _Unwind_Exception *__fastcall sub_121690(_QWORD *a1)
{
  struct _Unwind_Exception *result; // rax
  _QWORD *v2; // rbx

  *a1 = off_231030;
  if ( a1[28] )
  {
    a1[29] = 0;
    qfree();
  }
  if ( a1[25] )
  {
    a1[26] = 0;
    qfree();
  }
  result = &stru_235898;
  v2 = a1 + 19;
  *a1 = &stru_235898;
  do
  {
    if ( *v2 )
    {
      v2[1] = 0;
      result = (struct _Unwind_Exception *)qfree();
    }
    v2 -= 3;
  }
  while ( v2 != a1 + 7 );
  return result;
}

