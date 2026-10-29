__int64 __fastcall sub_2A06A0(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 *v6; // rbp
  __int64 v7; // rdi

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BB940(a2);
  sub_2BBA80(a3);
  if ( a3 )
  {
    v6 = &a4[a3];
    do
    {
      v7 = *a4++;
      sub_2BB940(v7);
    }
    while ( a4 != v6 );
  }
  sub_2BBE50(a3);
  return sub_2BC0D0(668);
}

