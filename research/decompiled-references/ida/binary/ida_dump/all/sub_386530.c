void *__fastcall sub_386530(_QWORD *a1)
{
  void *result; // rax
  _QWORD *v2; // rbx

  *a1 = off_4E6680;
  if ( a1[24] )
  {
    a1[25] = 0;
    qfree();
  }
  result = &unk_4EBE48;
  v2 = a1 + 19;
  *a1 = &unk_4EBE48;
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
