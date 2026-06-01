struct _Unwind_Exception *__fastcall sub_134940(_QWORD *a1)
{
  struct _Unwind_Exception *result; // rax
  _QWORD *v2; // rbx

  *a1 = off_231740;
  if ( a1[23] )
  {
    a1[24] = 0;
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

