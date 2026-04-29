void *__fastcall sub_2810(_QWORD *a1)
{
  void *result; // rax
  _QWORD *v2; // rbx

  *a1 = off_6AD8;
  if ( a1[27] )
  {
    a1[28] = 0;
    qfree();
  }
  result = &unk_6D00;
  v2 = a1 + 19;
  *a1 = &unk_6D00;
  do
  {
    if ( *v2 )
    {
      v2[1] = 0;
      result = (void *)qfree();
    }
    v2 -= 3;
  }
  while ( v2 != a1 + 7 );
  return result;
}
