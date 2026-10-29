struct _Unwind_Exception *__fastcall sub_170CE0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  struct _Unwind_Exception *result; // rax

  *a1 = off_235898;
  a1[23] = &off_235960;
  if ( a1[32] )
  {
    a1[33] = 0;
    qfree();
  }
  if ( a1[29] )
  {
    a1[30] = 0;
    qfree();
  }
  v1 = a1 + 19;
  a1[23] = &off_235880;
  result = &stru_236898;
  *a1 = &stru_236898;
  do
  {
    if ( *v1 )
    {
      v1[1] = 0;
      result = (struct _Unwind_Exception *)qfree();
    }
    v1 -= 3;
  }
  while ( v1 != a1 + 7 );
  return result;
}

