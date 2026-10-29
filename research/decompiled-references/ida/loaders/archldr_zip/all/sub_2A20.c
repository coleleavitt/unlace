__int64 __fastcall sub_2A20(_QWORD *a1)
{
  _QWORD *v1; // rbx

  *a1 = off_78F0;
  if ( a1[24] )
  {
    a1[25] = 0;
    ((void (*)(void))qfree)();
  }
  v1 = a1 + 19;
  *a1 = &unk_7C20;
  do
  {
    if ( *v1 )
    {
      v1[1] = 0;
      ((void (*)(void))qfree)();
    }
    v1 -= 3;
  }
  while ( v1 != a1 + 7 );
  return qfree(a1);
}

