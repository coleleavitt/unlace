bool __fastcall sub_7204C0(int *a1, int a2)
{
  int v2; // eax

  v2 = *a1;
  if ( !*a1 || !a2 )
    return 0;
  if ( a2 != v2 )
  {
    do
      a2 = qword_47D46A0[2 * a2];
    while ( v2 != a2 && a2 );
  }
  return v2 == a2;
}

