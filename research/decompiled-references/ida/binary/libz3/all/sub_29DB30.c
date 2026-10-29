__int64 __fastcall sub_29DB30(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  unsigned int *v8; // rbp
  __int64 v9; // rdi

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BB940(a2);
  sub_2BB940(a3);
  sub_2BBA80(a4);
  if ( a4 )
  {
    v8 = &a5[a4];
    do
    {
      v9 = *a5++;
      sub_2BBA80(v9);
    }
    while ( v8 != a5 );
  }
  sub_2BBEF0(a4);
  return sub_2BC0D0(510);
}

