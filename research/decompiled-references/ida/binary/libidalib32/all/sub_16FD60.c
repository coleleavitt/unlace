struct _Unwind_Exception *__fastcall sub_16FD60(_QWORD *a1)
{
  _QWORD *v1; // rbx
  struct _Unwind_Exception *result; // rax

  v1 = a1 + 19;
  a1[23] = &off_234880;
  result = &stru_235898;
  *a1 = &stru_235898;
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

