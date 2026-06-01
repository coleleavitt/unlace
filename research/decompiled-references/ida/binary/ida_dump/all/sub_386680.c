__int64 __fastcall sub_386680(_QWORD *a1)
{
  _QWORD *v1; // rbx

  *a1 = off_4E6680;
  if ( a1[24] )
  {
    a1[25] = 0;
    qfree();
  }
  v1 = a1 + 19;
  *a1 = &unk_4EBE48;
  do
  {
    if ( *v1 )
    {
      v1[1] = 0;
      qfree();
    }
    v1 -= 3;
  }
  while ( v1 != a1 + 7 );
  return qfree();
}
