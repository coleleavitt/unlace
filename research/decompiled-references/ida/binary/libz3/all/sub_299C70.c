__int64 __fastcall sub_299C70(__int64 a1, unsigned int a2, __int64 *a3, unsigned int a4)
{
  __int64 *v6; // rbp
  __int64 v7; // rdi

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BBA80(a2);
  if ( a2 )
  {
    v6 = &a3[a2];
    do
    {
      v7 = *a3++;
      sub_2BB940(v7);
    }
    while ( a3 != v6 );
  }
  sub_2BBE50(a2);
  sub_2BBA80(a4);
  return sub_2BC0D0(274);
}

