__int64 __fastcall sub_386BC0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // rdi

  *a1 = off_4E0D40;
  v2 = a1[24];
  if ( v2 )
  {
    a1[25] = 0;
    qfree(v2);
  }
  v3 = a1 + 19;
  *a1 = &unk_4E7D28;
  do
  {
    v4 = *v3;
    if ( *v3 )
    {
      v3[1] = 0;
      qfree(v4);
    }
    v3 -= 3;
  }
  while ( v3 != a1 + 7 );
  return qfree(a1);
}
